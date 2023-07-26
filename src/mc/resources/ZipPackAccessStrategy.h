#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/resources/PackAccessStrategy.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class ZipPackAccessStrategy : public ::PackAccessStrategy {

public:
    // prevent constructor by default
    ZipPackAccessStrategy& operator=(ZipPackAccessStrategy const&) = delete;
    ZipPackAccessStrategy(ZipPackAccessStrategy const&)            = delete;
    ZipPackAccessStrategy()                                        = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getPackSize\@ZipPackAccessStrategy\@\@UEBA_KXZ
     */
    virtual unsigned __int64 getPackSize() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol ?getPackLocation\@ZipPackAccessStrategy\@\@UEBAAEBVResourceLocation\@\@XZ
     */
    virtual class ResourceLocation const& getPackLocation() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol
     * ?getPackName\@ZipPackAccessStrategy\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getPackName() const; // NOLINT
    /**
     * @vftbl 4
     * @symbol ?isWritable\@ZipPackAccessStrategy\@\@UEBA_NXZ
     */
    virtual bool isWritable() const; // NOLINT
    /**
     * @vftbl 5
     * @symbol ?setIsTrusted\@ZipPackAccessStrategy\@\@UEAAX_N\@Z
     */
    virtual void setIsTrusted(bool); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?isTrusted\@ZipPackAccessStrategy\@\@UEBA_NXZ
     */
    virtual bool isTrusted() const; // NOLINT
    /**
     * @vftbl 7
     * @symbol ?hasAsset\@ZipPackAccessStrategy\@\@UEBA_NAEBVPath\@Core\@\@_N1\@Z
     */
    virtual bool hasAsset(class Core::Path const&, bool, bool) const; // NOLINT
    /**
     * @vftbl 8
     * @symbol ?hasFolder\@ZipPackAccessStrategy\@\@UEBA_NAEBVPath\@Core\@\@\@Z
     */
    virtual bool hasFolder(class Core::Path const&) const; // NOLINT
    /**
     * @vftbl 9
     * @symbol
     * ?getAsset\@ZipPackAccessStrategy\@\@UEBA_NAEBVPath\@Core\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    virtual bool getAsset(class Core::Path const&, std::string&, bool) const; // NOLINT
    /**
     * @vftbl 10
     * @symbol
     * ?deleteAsset\@ZipPackAccessStrategy\@\@UEAA_NAEBV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@\@Z
     */
    virtual bool deleteAsset(class Core::PathBuffer<std::string> const&); // NOLINT
    /**
     * @vftbl 11
     * @symbol
     * ?writeAsset\@ZipPackAccessStrategy\@\@UEAA_NAEBVPath\@Core\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual bool writeAsset(class Core::Path const&, std::string const&); // NOLINT
    /**
     * @vftbl 12
     * @symbol
     * ?forEachIn\@ZipPackAccessStrategy\@\@UEBAXAEBVPath\@Core\@\@V?$function\@$$A6AXAEBVPath\@Core\@\@\@Z\@std\@\@_N\@Z
     */
    virtual void
    forEachIn(class Core::Path const&, class std::function<void(class Core::Path const&)>, bool) const; // NOLINT
    /**
     * @vftbl 14
     * @symbol ?getStrategyType\@ZipPackAccessStrategy\@\@UEBA?AW4PackAccessStrategyType\@\@XZ
     */
    virtual enum class PackAccessStrategyType getStrategyType() const; // NOLINT
    /**
     * @vftbl 15
     * @symbol
     * ?getSubPath\@ZipPackAccessStrategy\@\@UEBAAEBV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    virtual class Core::PathBuffer<std::string> const& getSubPath() const; // NOLINT
    /**
     * @vftbl 16
     * @symbol
     * ?createSubPack\@ZipPackAccessStrategy\@\@UEBA?AV?$unique_ptr\@VPackAccessStrategy\@\@U?$default_delete\@VPackAccessStrategy\@\@\@std\@\@\@std\@\@AEBVPath\@Core\@\@\@Z
     */
    virtual std::unique_ptr<class PackAccessStrategy> createSubPack(class Core::Path const&) const; // NOLINT
    /**
     * @vftbl 19
     * @symbol ?unload\@ZipPackAccessStrategy\@\@UEAAXXZ
     */
    virtual void unload(); // NOLINT
    /**
     * @vftbl 21
     * @symbol ?readContentIdentity\@ZipPackAccessStrategy\@\@UEBA?AVContentIdentity\@\@XZ
     */
    virtual class ContentIdentity readContentIdentity() const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ZIPPACKACCESSSTRATEGY
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ZipPackAccessStrategy(); // NOLINT
#endif
    /**
     * @symbol
     * ??0ZipPackAccessStrategy\@\@QEAA\@AEBV?$not_null\@V?$NonOwnerPointer\@VIFileAccess\@\@\@Bedrock\@\@\@gsl\@\@AEBVResourceLocation\@\@AEBVPath\@Core\@\@\@Z
     */
    MCAPI
    ZipPackAccessStrategy(class gsl::not_null<class Bedrock::NonOwnerPointer<class IFileAccess>> const&, class ResourceLocation const&, class Core::Path const&); // NOLINT

    // private:
    /**
     * @symbol
     * ?_tryReadFromPendingQueue\@ZipPackAccessStrategy\@\@AEBA_NAEBVPath\@Core\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool _tryReadFromPendingQueue(class Core::Path const&, std::string&) const; // NOLINT

private:
};
