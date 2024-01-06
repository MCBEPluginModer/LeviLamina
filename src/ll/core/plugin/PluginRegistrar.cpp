#include "ll/core/plugin/PluginRegistrar.h"

#include "ll/api/base/ErrorInfo.h"
#include "ll/api/io/FileUtils.h"
#include "ll/api/reflection/Deserialization.h"
#include "ll/core/LeviLamina.h"
#include "ll/core/plugin/NativePluginManager.h"

#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"
#include "mc/server/ServerInstance.h"
#include "mc/world/events/ServerInstanceEventCoordinator.h"


namespace ll::plugin {
using namespace i18n_literals;

struct PluginRegistrarEnableAll;
struct PluginRegistrarDisableAll;

static bool checkVersion(Manifest const& real, Dependency const& need) {
    if (!real.version || !need.version) {
        return true;
    }
    // TODO: check version range
    return true;
}

enum class DirState {
    Empty,
    Error,
    Success,
};

static DirState loadManifest(Manifest& manifest, std::filesystem::path const& file) {
    auto content = file_utils::readFile(file / u8"manifest.json");
    if (!content || content->empty()) {
        return DirState::Empty;
    }
    auto json = nlohmann::json::parse(*content, nullptr, false, true);
    if (json.is_discarded()) {
        return DirState::Error;
    }
    std::string dirName = string_utils::u8str2str(file.stem().u8string());
    try {
        reflection::deserialize<nlohmann::json, Manifest>(manifest, json);
    } catch (...) {
        error_info::printCurrentException();
        return DirState::Error;
    }
    if (manifest.name != dirName) {
        logger.error("ll.plugin.error.nameUnmatch"_tr(manifest.name, dirName));
        return DirState::Error;
    }
    return DirState::Success;
}

PluginRegistrar& PluginRegistrar::getInstance() {
    static PluginRegistrar instance;
    return instance;
}

void PluginRegistrar::registerPlugins() {
    std::unordered_map<std::string, Manifest> manifests;

    ll::logger.info("ll.loader.loadMain.start"_tr);

    auto& registry = PluginManagerRegistry::getInstance();

    if (!registry.addManager(std::make_shared<NativePluginManager>())) {
        logger.error("ll.plugin.error.failCreateManager"_tr);
        return;
    }

    for (auto& file : std::filesystem::directory_iterator(pluginsPath)) {
        if (!file.is_directory()) {
            continue;
        }
        Manifest manifest;
        auto     res = loadManifest(manifest, file.path());
        if (res != DirState::Success) {
            if (res == DirState::Error) {
                logger.error("ll.plugin.error.failToLoad"_tr(string_utils::u8str2str(file.path().stem().u8string())));
            }
            continue;
        }
        manifests.emplace(std::string{manifest.name}, std::move(manifest));
    }

    std::unordered_set<std::string> needLoad;
    for (auto& [name, manifest] : manifests) {
        if (manifest.passive == true) {
            continue;
        }
        if (manifest.dependencies) {
            bool error = false;
            for (auto& dependency : *manifest.dependencies) {
                if (!manifests.contains(dependency.name) || !checkVersion(manifests.at(dependency.name), dependency)) {
                    error = true;
#if _HAS_CXX23
                    logger.error("ll.plugin.error.lackDependence"_tr(
                        dependency.version.transform([&](auto& ver) { return dependency.name + " " + ver; }
                        ).value_or(dependency.name)
                    ));
#endif
                }
            }
            if (error) {
                continue;
            }
            for (auto& dependency : *manifest.dependencies) {
                needLoad.emplace(dependency.name);
            }
        }
        needLoad.emplace(name);
        if (manifest.optionalDependencies) {
            for (auto& dependency : *manifest.optionalDependencies) {
                if (manifests.contains(dependency.name) && checkVersion(manifests.at(dependency.name), dependency)) {
                    needLoad.emplace(dependency.name);
                }
            }
        }
    }
    std::vector<std::string> conflicts;
    for (auto& name : needLoad) {
        auto& manifest = manifests.at(name);
        if (!manifest.conflicts) {
            continue;
        }
        for (auto& conflict : *manifest.conflicts) {
            if (manifests.contains(conflict.name) && checkVersion(manifests.at(conflict.name), conflict)) {
                conflicts.emplace_back(name);
#if _HAS_CXX23
                logger.error("ll.plugin.error.conflict"_tr(
                    name,
                    conflict.version.transform([&](auto& ver) { return conflict.name + " " + ver; }
                    ).value_or(conflict.name)
                ));
#endif
            }
        }
    }
    for (auto& name : conflicts) {
        needLoad.erase(name);
    }

    DependencyGraph<std::string> deps;
    for (auto& name : needLoad) {
        auto& manifest = manifests.at(name);
        if (manifest.dependencies) {
            bool deniedByConflict = false;
            for (auto& dependency : *manifest.dependencies) {
                if (!needLoad.contains(dependency.name)) {
                    deniedByConflict = true;
                }
            }
            if (deniedByConflict) {
                continue;
            }
            for (auto& dependency : *manifest.dependencies) {
                deps.emplaceDependency(name, dependency.name);
            }
        } else {
            deps.emplace(name);
        }
        if (manifest.optionalDependencies) {
            for (auto& dependency : *manifest.optionalDependencies) {
                if (needLoad.contains(dependency.name)) {
                    deps.emplaceDependency(name, dependency.name);
                }
            }
        }
        if (manifest.loadBefore) {
            for (auto& dependency : *manifest.loadBefore) {
                if (needLoad.contains(dependency.name) && checkVersion(manifests.at(dependency.name), dependency)) {
                    deps.emplaceDependency(dependency.name, name);
                }
            }
        }
    }
    auto sort = deps.sort();
    for (auto& name : sort.unsorted) {
        logger.error("ll.plugin.error.cycleDeps"_tr(name));
    }

    std::unordered_set<std::string> loadErrored;
    for (auto& name : sort.sorted) {
        auto& manifest = manifests.at(name);
        if (manifest.dependencies) {
            bool deniedByDepError = false;
            for (auto& dependency : *manifest.dependencies) {
                if (loadErrored.contains(dependency.name)) {
                    deniedByDepError = true;
                    logger.error("ll.plugin.error.depsNotLoaded"_tr(name, dependency.name));
                }
            }
            if (deniedByDepError) {
                loadErrored.emplace(name);
                continue;
            }
        }
        if (registry.loadPlugin(std::move(manifest))) {
            logger.info("ll.plugin.info.loaded"_tr(name));
        } else {
            loadErrored.emplace(name);
            logger.error("ll.plugin.error.failToLoad"_tr(name));
        }
    }
    size_t loadedCount = sort.sorted.size() - loadErrored.size();

    ll::memory::HookRegistrar<PluginRegistrarEnableAll>  r1;
    ll::memory::HookRegistrar<PluginRegistrarDisableAll> r2;

    ll::logger.info("ll.loader.loadMain.done"_tr(loadedCount));
}
LL_AUTO_TYPED_INSTANCE_HOOK(
    PluginRegistrarEnableAll,
    ll::memory::HookPriority::High,
    ServerInstanceEventCoordinator,
    &ServerInstanceEventCoordinator::sendServerThreadStarted,
    void,
    ::ServerInstance& ins
) {
    origin(ins);
    try {
        PluginManagerRegistry::getInstance().forEachManager([&](std::string_view, PluginManager& manager) {
            manager.enableAll();
            return true;
        });
    } catch (...) {
        error_info::printCurrentException();
    }
}
LL_AUTO_TYPED_INSTANCE_HOOK(
    PluginRegistrarDisableAll,
    HookPriority::Low,
    ServerInstance,
    &ServerInstance::leaveGameSync,
    void
) {
    try {
        PluginManagerRegistry::getInstance().forEachManager([&](std::string_view, PluginManager& manager) {
            manager.disableAll();
            return true;
        });
    } catch (...) {
        error_info::printCurrentException();
    }
    origin();
}
} // namespace ll::plugin
