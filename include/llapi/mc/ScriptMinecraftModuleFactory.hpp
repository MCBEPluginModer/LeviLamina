/**
 * @file  ScriptMinecraftModuleFactory.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "ScriptModuleMinecraft.hpp"
#include "Scripting.hpp"
#include "TextObjectText.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptMinecraftModuleFactory.
 *
 */
class ScriptMinecraftModuleFactory : public TextObjectText {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMINECRAFTMODULEFACTORY
public:
    class ScriptMinecraftModuleFactory& operator=(class ScriptMinecraftModuleFactory const &) = delete;
    ScriptMinecraftModuleFactory(class ScriptMinecraftModuleFactory const &) = delete;
    ScriptMinecraftModuleFactory() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1891725498
     */
    virtual ~ScriptMinecraftModuleFactory();
    /**
     * @symbol ??0ScriptMinecraftModuleFactory@@QEAA@PEAVServerLevel@@@Z
     * @hash   1750450604
     */
    MCAPI ScriptMinecraftModuleFactory(class ServerLevel *);
    /**
     * @symbol ?getActorComponentFactories@ScriptMinecraftModuleFactory@@SAAEAV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VIComponentFactory@ScriptModuleMinecraft@@U?$default_delete@VIComponentFactory@ScriptModuleMinecraft@@@std@@@2@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VIComponentFactory@ScriptModuleMinecraft@@U?$default_delete@VIComponentFactory@ScriptModuleMinecraft@@@std@@@2@@std@@@2@@std@@XZ
     * @hash   -787608758
     */
    MCAPI static class std::unordered_map<std::string, std::unique_ptr<class ScriptModuleMinecraft::IComponentFactory>, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::unique_ptr<class ScriptModuleMinecraft::IComponentFactory>>>> & getActorComponentFactories();
    /**
     * @symbol ?getModuleUUIDAsString@ScriptMinecraftModuleFactory@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1096711872
     */
    MCAPI static std::string getModuleUUIDAsString();
    /**
     * @symbol ?makeModuleDescriptorFor@ScriptMinecraftModuleFactory@@SA?AUModuleDescriptor@Scripting@@UVersion@3@@Z
     * @hash   602604639
     */
    MCAPI static struct Scripting::ModuleDescriptor makeModuleDescriptorFor(struct Scripting::Version);

//private:
    /**
     * @symbol ?_addVersions@ScriptMinecraftModuleFactory@@AEAAXXZ
     * @hash   -1231234483
     */
    MCAPI void _addVersions();
    /**
     * @symbol ?_generateBindings@ScriptMinecraftModuleFactory@@AEAA?AUModuleBinding@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUVersion@3@_NAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@5@@Z
     * @hash   -1788709086
     */
    MCAPI struct Scripting::ModuleBinding _generateBindings(std::string const &, struct Scripting::Version const &, bool, std::vector<std::string> const &);

private:
    /**
     * @symbol ?LegacyModuleName@ScriptMinecraftModuleFactory@@0PEBDEB
     * @hash   1437521135
     */
    MCAPI static char const * LegacyModuleName;
    /**
     * @symbol ?ModuleName@ScriptMinecraftModuleFactory@@0PEBDEB
     * @hash   458869166
     */
    MCAPI static char const * ModuleName;
    /**
     * @symbol ?ModuleUUID@ScriptMinecraftModuleFactory@@0VUUID@mce@@B
     * @hash   -861309323
     */
    MCAPI static class mce::UUID const ModuleUUID;

};