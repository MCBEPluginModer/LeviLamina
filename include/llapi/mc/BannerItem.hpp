/**
 * @file  BannerItem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BannerItem.
 *
 */
class BannerItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BANNERITEM
public:
    class BannerItem& operator=(class BannerItem const &) = delete;
    BannerItem(class BannerItem const &) = delete;
    BannerItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1763196585
     */
    virtual ~BannerItem();
    /**
     * @vftbl  7
     * @hash   -1253298233
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  11
     * @hash   -234427292
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  14
     * @hash   -231656729
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  16
     * @hash   -229809687
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  51
     * @hash   -119910688
     */
    virtual void __unk_vfn_51();
    /**
     * @vftbl  53
     * @hash   -118063646
     */
    virtual void __unk_vfn_53();
    /**
     * @vftbl  54
     * @symbol ?isWearableThroughLootTable@BannerItem@@UEBA_NPEBVCompoundTag@@@Z
     * @hash   -385220217
     */
    virtual bool isWearableThroughLootTable(class CompoundTag const *) const;
    /**
     * @vftbl  60
     * @symbol ?appendFormattedHovertext@BannerItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     * @hash   -749610832
     */
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /**
     * @vftbl  66
     * @hash   -86663932
     */
    virtual void __unk_vfn_66();
    /**
     * @vftbl  67
     * @symbol ?isValidAuxValue@BannerItem@@UEBA_NH@Z
     * @hash   -178899003
     */
    virtual bool isValidAuxValue(int) const;
    /**
     * @vftbl  70
     * @hash   -63575907
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl  71
     * @hash   -62652386
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl  72
     * @hash   -61728865
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl  75
     * @hash   -58958302
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  79
     * @hash   -275840522
     */
    virtual void __unk_vfn_79();
    /**
     * @vftbl  80
     * @hash   -255523060
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl  95
     * @symbol ?buildDescriptionId@BannerItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
     * @hash   321382715
     */
    virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /**
     * @vftbl  132
     * @symbol ?_useOn@BannerItem@@UEBA_NAEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
     * @hash   541318591
     */
    virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, class Vec3 const &) const;
    /**
     * @symbol ??0BannerItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   922339053
     */
    MCAPI BannerItem(std::string const &, int);
    /**
     * @symbol ?getPatternAndColorPairsFromItemStack@BannerItem@@SA?AV?$vector@U?$pair@V?$not_null@PEBVBannerPattern@@@gsl@@W4ItemColor@@@std@@V?$allocator@U?$pair@V?$not_null@PEBVBannerPattern@@@gsl@@W4ItemColor@@@std@@@2@@std@@AEBVItemStackBase@@@Z
     * @hash   -1701582244
     */
    MCAPI static std::vector<struct std::pair<class gsl::not_null<class BannerPattern const *>, enum class ItemColor>> getPatternAndColorPairsFromItemStack(class ItemStackBase const &);

};