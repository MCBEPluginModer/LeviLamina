#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class ResourcePackManager {

public:
    // prevent constructor by default
    ResourcePackManager& operator=(ResourcePackManager const&) = delete;
    ResourcePackManager(ResourcePackManager const&)            = delete;
    ResourcePackManager()                                      = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?load\@ResourcePackManager\@\@UEBA_NAEBVResourceLocation\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual bool load(class ResourceLocation const&, std::string&) const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?load\@ResourcePackManager\@\@UEBA_NAEBVResourceLocation\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@4\@\@Z
     */
    virtual bool load(class ResourceLocation const&, std::string&, std::vector<std::string> const&) const; // NOLINT
    /**
     * @vftbl 3
     * @symbol
     * ?load\@ResourcePackManager\@\@UEBA_NAEBVResourceLocationPair\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@4\@\@Z
     */
    virtual bool load(class ResourceLocationPair const&, std::string&, std::vector<std::string> const&) const; // NOLINT
    /**
     * @vftbl 4
     * @symbol
     * ?loadAllVersionsOf\@ResourcePackManager\@\@UEBA?AV?$vector\@VLoadedResourceData\@\@V?$allocator\@VLoadedResourceData\@\@\@std\@\@\@std\@\@AEBVResourceLocation\@\@\@Z
     */
    virtual std::vector<class LoadedResourceData> loadAllVersionsOf(class ResourceLocation const&) const; // NOLINT
    /**
     * @vftbl 5
     * @symbol ?isInStreamableLocation\@ResourcePackManager\@\@UEBA_NAEBVResourceLocation\@\@\@Z
     */
    virtual bool isInStreamableLocation(class ResourceLocation const&) const; // NOLINT
    /**
     * @vftbl 6
     * @symbol
     * ?isInStreamableLocation\@ResourcePackManager\@\@UEBA_NAEBVResourceLocation\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    virtual bool isInStreamableLocation(class ResourceLocation const&, std::vector<std::string> const&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?getPath\@ResourcePackManager\@\@UEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@AEBVResourceLocation\@\@\@Z
     */
    virtual class Core::PathBuffer<std::string> getPath(class ResourceLocation const&) const; // NOLINT
    /**
     * @vftbl 8
     * @symbol
     * ?getPath\@ResourcePackManager\@\@UEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@AEBVResourceLocation\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    virtual class Core::PathBuffer<std::string>
    getPath(class ResourceLocation const&, std::vector<std::string> const&) const; // NOLINT
    /**
     * @vftbl 9
     * @symbol
     * ?getPathContainingResource\@ResourcePackManager\@\@UEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@AEBVResourceLocation\@\@\@Z
     */
    virtual class Core::PathBuffer<std::string>
    getPathContainingResource(class ResourceLocation const&) const; // NOLINT
    /**
     * @vftbl 10
     * @symbol
     * ?getPathContainingResource\@ResourcePackManager\@\@UEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@AEBVResourceLocation\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    virtual class Core::PathBuffer<std::string>
    getPathContainingResource(class ResourceLocation const&, std::vector<std::string>) const; // NOLINT
    /**
     * @vftbl 11
     * @symbol
     * ?getPackStackIndexOfResource\@ResourcePackManager\@\@UEBA?AU?$pair\@HAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@AEBVResourceLocation\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    virtual struct std::pair<int, std::string const&>
    getPackStackIndexOfResource(class ResourceLocation const&, std::vector<std::string> const&) const; // NOLINT
    /**
     * @vftbl 12
     * @symbol
     * ?hasCapability\@ResourcePackManager\@\@UEBA_NV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    virtual bool hasCapability(class std::basic_string_view<char, struct std::char_traits<char>>) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RESOURCEPACKMANAGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ResourcePackManager(); // NOLINT
#endif
    /**
     * @symbol
     * ??0ResourcePackManager\@\@QEAA\@V?$function\@$$A6A?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ\@std\@\@AEBV?$not_null\@V?$NonOwnerPointer\@$$CBVIContentTierManager\@\@\@Bedrock\@\@\@gsl\@\@_N\@Z
     */
    MCAPI ResourcePackManager(
        class std::function<class Core::PathBuffer<std::string>(void)>,
        class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentTierManager const>> const&,
        bool
    ); // NOLINT
    /**
     * @symbol ?clearStack\@ResourcePackManager\@\@QEAAXW4ResourcePackStackType\@\@_N\@Z
     */
    MCAPI void clearStack(enum class ResourcePackStackType, bool); // NOLINT
    /**
     * @symbol ?composeFullStack\@ResourcePackManager\@\@QEBAHAEAVResourcePackStack\@\@AEBV2\@11\@Z
     */
    MCAPI int
    composeFullStack(class ResourcePackStack&, class ResourcePackStack const&, class ResourcePackStack const&, class ResourcePackStack const&)
        const; // NOLINT
    /**
     * @symbol ?getFullStackMinEngineVersion\@ResourcePackManager\@\@QEBA?AVSemVersion\@\@XZ
     */
    MCAPI class SemVersion getFullStackMinEngineVersion() const; // NOLINT
    /**
     * @symbol ?getPackSourceReport\@ResourcePackManager\@\@QEBAPEBVPackSourceReport\@\@XZ
     */
    MCAPI class PackSourceReport const* getPackSourceReport() const; // NOLINT
    /**
     * @symbol
     * ?getResourcesOfGroup\@ResourcePackManager\@\@QEBA?AV?$vector\@V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@V?$allocator\@V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI std::vector<class Core::PathBuffer<std::string>> getResourcesOfGroup(std::string const&) const; // NOLINT
    /**
     * @symbol
     * ?getResourcesOfGroup\@ResourcePackManager\@\@QEBA?AV?$vector\@V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@V?$allocator\@V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@\@std\@\@\@std\@\@AEBVPackInstance\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI std::vector<class Core::PathBuffer<std::string>>
          getResourcesOfGroup(class PackInstance const&, std::string const&) const; // NOLINT
    /**
     * @symbol ?getStack\@ResourcePackManager\@\@QEBAAEBVResourcePackStack\@\@W4ResourcePackStackType\@\@\@Z
     */
    MCAPI class ResourcePackStack const& getStack(enum class ResourcePackStackType) const; // NOLINT
    /**
     * @symbol ?handlePendingStackChanges\@ResourcePackManager\@\@QEAAXXZ
     */
    MCAPI void handlePendingStackChanges(); // NOLINT
    /**
     * @symbol ?hasResource\@ResourcePackManager\@\@QEBA_NAEBVResourceLocation\@\@\@Z
     */
    MCAPI bool hasResource(class ResourceLocation const&) const; // NOLINT
    /**
     * @symbol ?isOnlyBaseGamePacks\@ResourcePackManager\@\@QEBA_NXZ
     */
    MCAPI bool isOnlyBaseGamePacks() const; // NOLINT
    /**
     * @symbol ?iteratePacks\@ResourcePackManager\@\@QEBAXAEBV?$function\@$$A6AXAEBVPackInstance\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void iteratePacks(class std::function<void(class PackInstance const&)> const&) const; // NOLINT
    /**
     * @symbol
     * ?loadAllVersionsOf\@ResourcePackManager\@\@QEBA_NAEBVResourceLocation\@\@AEAVResourcePackMergeStrategy\@\@\@Z
     */
    MCAPI bool loadAllVersionsOf(class ResourceLocation const&, class ResourcePackMergeStrategy&) const; // NOLINT
    /**
     * @symbol ?registerResourcePackListener\@ResourcePackManager\@\@QEAAXAEAVResourcePackListener\@\@\@Z
     */
    MCAPI void registerResourcePackListener(class ResourcePackListener&); // NOLINT
    /**
     * @symbol ?removeIf\@ResourcePackManager\@\@QEAAXAEBV?$function\@$$A6A_NAEBVPackInstance\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void removeIf(class std::function<bool(class PackInstance const&)> const&); // NOLINT
    /**
     * @symbol ?setPackSourceReport\@ResourcePackManager\@\@QEAAX$$QEAVPackSourceReport\@\@\@Z
     */
    MCAPI void setPackSourceReport(class PackSourceReport&&); // NOLINT
    /**
     * @symbol
     * ?setStack\@ResourcePackManager\@\@QEAA_NV?$unique_ptr\@VResourcePackStack\@\@U?$default_delete\@VResourcePackStack\@\@\@std\@\@\@std\@\@W4ResourcePackStackType\@\@_N\@Z
     */
    MCAPI bool setStack(std::unique_ptr<class ResourcePackStack>, enum class ResourcePackStackType, bool); // NOLINT
    /**
     * @symbol ?unRegisterResourcePackListener\@ResourcePackManager\@\@QEAAXAEAVResourcePackListener\@\@\@Z
     */
    MCAPI void unRegisterResourcePackListener(class ResourcePackListener&); // NOLINT

    // private:
    /**
     * @symbol ?_calculateMinEngineVersionFromFullStack\@ResourcePackManager\@\@AEAAXXZ
     */
    MCAPI void _calculateMinEngineVersionFromFullStack(); // NOLINT
    /**
     * @symbol ?_composeFullStack\@ResourcePackManager\@\@AEAAXXZ
     */
    MCAPI void _composeFullStack(); // NOLINT
    /**
     * @symbol ?_getPackForResource\@ResourcePackManager\@\@AEBAPEAVPackInstance\@\@AEBVPath\@Core\@\@\@Z
     */
    MCAPI class PackInstance* _getPackForResource(class Core::Path const&) const; // NOLINT
    /**
     * @symbol
     * ?_getResourcesOfGroup\@ResourcePackManager\@\@AEBAXAEBVPackInstance\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$vector\@V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@V?$allocator\@V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@\@std\@\@\@4\@\@Z
     */
    MCAPI void
    _getResourcesOfGroup(class PackInstance const&, std::string const&, std::vector<class Core::PathBuffer<std::string>>&)
        const; // NOLINT
    /**
     * @symbol ?_updateLanguageSubpacks\@ResourcePackManager\@\@AEAAXXZ
     */
    MCAPI void _updateLanguageSubpacks(); // NOLINT

private:
};
