#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/InheritanceTree.h"
#include "mc/common/TagRegistry.h"
#include "mc/common/wrapper/IDType.h"
#include "mc/common/wrapper/StackRefResultT.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class BiomeRegistry {
public:
    // BiomeRegistry inner types declare
    // clang-format off
    struct BiomeParent;
    // clang-format on

    // BiomeRegistry inner types define
    struct BiomeParent {

    public:
        // prevent constructor by default
        BiomeParent& operator=(BiomeParent const&) = delete;
        BiomeParent(BiomeParent const&)            = delete;
        BiomeParent()                              = delete;

    public:
        /**
         * @symbol ??1BiomeParent\@BiomeRegistry\@\@QEAA\@XZ
         */
        MCAPI ~BiomeParent(); // NOLINT
    };

public:
    // prevent constructor by default
    BiomeRegistry& operator=(BiomeRegistry const&) = delete;
    BiomeRegistry(BiomeRegistry const&)            = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BIOMEREGISTRY
    /**
     * @symbol ?getEntityRegistry\@BiomeRegistry\@\@UEBA?AV?$StackRefResultT\@UEntityRegistryConstRefTraits\@\@\@\@XZ
     */
    MCVAPI class StackRefResultT<struct EntityRegistryConstRefTraits> getEntityRegistry() const; // NOLINT
    /**
     * @symbol ?getEntityRegistry\@BiomeRegistry\@\@UEAA?AV?$StackRefResultT\@UEntityRegistryRefTraits\@\@\@\@XZ
     */
    MCVAPI class StackRefResultT<struct EntityRegistryRefTraits> getEntityRegistry(); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BiomeRegistry(); // NOLINT
#endif
    /**
     * @symbol ??0BiomeRegistry\@\@QEAA\@XZ
     */
    MCAPI BiomeRegistry(); // NOLINT
    /**
     * @symbol ?forEachBiome\@BiomeRegistry\@\@QEBAXV?$function\@$$A6AXAEAVBiome\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void forEachBiome(class std::function<void(class Biome&)>) const; // NOLINT
    /**
     * @symbol
     * ?getTagRegistry\@BiomeRegistry\@\@QEAAAEAV?$TagRegistry\@U?$IDType\@UBiomeTagIDType\@\@\@\@U?$IDType\@UBiomeTagSetIDType\@\@\@\@\@\@XZ
     */
    MCAPI class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType>>&
    getTagRegistry(); // NOLINT
    /**
     * @symbol
     * ?getTagRegistry\@BiomeRegistry\@\@QEBAAEBV?$TagRegistry\@U?$IDType\@UBiomeTagIDType\@\@\@\@U?$IDType\@UBiomeTagSetIDType\@\@\@\@\@\@XZ
     */
    MCAPI class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType>> const&
    getTagRegistry() const; // NOLINT
    /**
     * @symbol
     * ?initServerFromPacks\@BiomeRegistry\@\@QEAAXAEAVResourcePackManager\@\@AEAVIWorldRegistriesProvider\@\@\@Z
     */
    MCAPI void initServerFromPacks(class ResourcePackManager&, class IWorldRegistriesProvider&); // NOLINT
    /**
     * @symbol ?initializeWithLevelStorageManager\@BiomeRegistry\@\@QEAAXAEAVLevelStorageManager\@\@\@Z
     */
    MCAPI void initializeWithLevelStorageManager(class LevelStorageManager&); // NOLINT
    /**
     * @symbol ?isRegistrationFinished\@BiomeRegistry\@\@QEBA_NXZ
     */
    MCAPI bool isRegistrationFinished() const; // NOLINT
    /**
     * @symbol ?lookupByHash\@BiomeRegistry\@\@QEBAPEAVBiome\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI class Biome* lookupByHash(class HashedString const&) const; // NOLINT
    /**
     * @symbol ?lookupById\@BiomeRegistry\@\@QEBAPEAVBiome\@\@H\@Z
     */
    MCAPI class Biome* lookupById(int) const; // NOLINT
    /**
     * @symbol
     * ?lookupByName\@BiomeRegistry\@\@QEBAPEAVBiome\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Biome* lookupByName(std::string const&) const; // NOLINT
    /**
     * @symbol
     * ?registerBiome\@BiomeRegistry\@\@QEAAAEAVBiome\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Biome& registerBiome(std::string const&); // NOLINT
    /**
     * @symbol ?registrationFinished\@BiomeRegistry\@\@QEAAXXZ
     */
    MCAPI void registrationFinished(); // NOLINT

    // private:
    /**
     * @symbol
     * ?_addToInheritanceTree\@BiomeRegistry\@\@AEAA_NAEAV?$InheritanceTree\@UBiomeParent\@BiomeRegistry\@\@\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$QEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI bool
    _addToInheritanceTree(class InheritanceTree<struct BiomeRegistry::BiomeParent>&, std::string const&, class Json::Value&&, class SemVersion const&); // NOLINT
    /**
     * @symbol
     * ?_buildInheritanceTree\@BiomeRegistry\@\@AEAA?AV?$InheritanceTree\@UBiomeParent\@BiomeRegistry\@\@\@\@AEAVResourcePackManager\@\@\@Z
     */
    MCAPI class InheritanceTree<struct BiomeRegistry::BiomeParent>
    _buildInheritanceTree(class ResourcePackManager&); // NOLINT
    /**
     * @symbol ?_initTagRegistry\@BiomeRegistry\@\@AEAAXXZ
     */
    MCAPI void _initTagRegistry(); // NOLINT
    /**
     * @symbol
     * ?_loadSingleBiome\@BiomeRegistry\@\@AEAA_NAEAVResourcePackManager\@\@AEAV?$InheritanceTree\@UBiomeParent\@BiomeRegistry\@\@\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool
    _loadSingleBiome(class ResourcePackManager&, class InheritanceTree<struct BiomeRegistry::BiomeParent>&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?_mergeDataInheritance\@BiomeRegistry\@\@AEAAXAEAVValue\@Json\@\@AEAVSemVersion\@\@AEAV?$InheritanceTree\@UBiomeParent\@BiomeRegistry\@\@\@\@AEBUBiomeParent\@1\@\@Z
     */
    MCAPI void
    _mergeDataInheritance(class Json::Value&, class SemVersion&, class InheritanceTree<struct BiomeRegistry::BiomeParent>&, struct BiomeRegistry::BiomeParent const&); // NOLINT
    /**
     * @symbol ?_save\@BiomeRegistry\@\@AEAAXAEAVLevelStorage\@\@\@Z
     */
    MCAPI void _save(class LevelStorage&); // NOLINT

private:
};
