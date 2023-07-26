#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/gamemode/GameMode.h"

class SurvivalMode : public ::GameMode {

public:
    // prevent constructor by default
    SurvivalMode& operator=(SurvivalMode const&) = delete;
    SurvivalMode(SurvivalMode const&)            = delete;
    SurvivalMode()                               = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?startDestroyBlock\@SurvivalMode\@\@UEAA_NAEBVBlockPos\@\@EAEA_N\@Z
     */
    virtual bool startDestroyBlock(class BlockPos const&, unsigned char, bool&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?destroyBlock\@SurvivalMode\@\@UEAA_NAEBVBlockPos\@\@E\@Z
     */
    virtual bool destroyBlock(class BlockPos const&, unsigned char); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?startBuildBlock\@SurvivalMode\@\@UEAAXAEBVBlockPos\@\@E\@Z
     */
    virtual void startBuildBlock(class BlockPos const&, unsigned char); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?buildBlock\@SurvivalMode\@\@UEAA_NAEBVBlockPos\@\@E_N\@Z
     */
    virtual bool buildBlock(class BlockPos const&, unsigned char, bool); // NOLINT
    /**
     * @vftbl 9
     * @symbol ?tick\@SurvivalMode\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 11
     * @symbol ?useItem\@SurvivalMode\@\@UEAA_NAEAVItemStack\@\@\@Z
     */
    virtual bool useItem(class ItemStack&); // NOLINT
    /**
     * @vftbl 12
     * @symbol
     * ?useItemOn\@SurvivalMode\@\@UEAA?AVInteractionResult\@\@AEAVItemStack\@\@AEBVBlockPos\@\@EAEBVVec3\@\@PEBVBlock\@\@\@Z
     */
    virtual class InteractionResult
    useItemOn(class ItemStack&, class BlockPos const&, unsigned char, class Vec3 const&, class Block const*); // NOLINT
    /**
     * @vftbl 13
     * @symbol ?interact\@SurvivalMode\@\@UEAA_NAEAVActor\@\@AEBVVec3\@\@\@Z
     */
    virtual bool interact(class Actor&, class Vec3 const&); // NOLINT
    /**
     * @vftbl 14
     * @symbol ?attack\@SurvivalMode\@\@UEAA_NAEAVActor\@\@\@Z
     */
    virtual bool attack(class Actor&); // NOLINT
    /**
     * @vftbl 16
     * @symbol ?setTrialMode\@SurvivalMode\@\@UEAAX_N\@Z
     */
    virtual void setTrialMode(bool); // NOLINT
    /**
     * @vftbl 17
     * @symbol ?isInTrialMode\@SurvivalMode\@\@UEAA_NXZ
     */
    virtual bool isInTrialMode(); // NOLINT
    /**
     * @vftbl 18
     * @symbol ?registerUpsellScreenCallback\@SurvivalMode\@\@UEAAXV?$function\@$$A6AX_N\@Z\@std\@\@\@Z
     */
    virtual void registerUpsellScreenCallback(class std::function<void(bool)>); // NOLINT
    /**
     * @symbol ??0SurvivalMode\@\@QEAA\@AEAVPlayer\@\@\@Z
     */
    MCAPI SurvivalMode(class Player&); // NOLINT

    // private:
    /**
     * @symbol
     * ?_messagePlayers\@SurvivalMode\@\@AEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void _messagePlayers(std::string); // NOLINT
    /**
     * @symbol ?_showTrialReminder\@SurvivalMode\@\@AEAAX_N\@Z
     */
    MCAPI void _showTrialReminder(bool); // NOLINT

private:
    /**
     * @symbol ?mTrialHasEnded\@SurvivalMode\@\@0_NA
     */
    MCAPI static bool mTrialHasEnded; // NOLINT
};
