#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PickupItemsGoal {

public:
    // prevent constructor by default
    PickupItemsGoal& operator=(PickupItemsGoal const&) = delete;
    PickupItemsGoal(PickupItemsGoal const&)            = delete;
    PickupItemsGoal()                                  = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@PickupItemsGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@PickupItemsGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@PickupItemsGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@PickupItemsGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@PickupItemsGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@PickupItemsGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @symbol
     * ??0PickupItemsGoal\@\@QEAA\@AEAVMob\@\@M_NHHM11H11AEBV?$vector\@VItemDescriptor\@\@V?$allocator\@VItemDescriptor\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI
    PickupItemsGoal(class Mob&, float, bool, int, int, float, bool, bool, int, bool, bool, std::vector<class ItemDescriptor> const&); // NOLINT

    // private:
    /**
     * @symbol ?_dropItem\@PickupItemsGoal\@\@AEBAXAEBVItemStack\@\@\@Z
     */
    MCAPI void _dropItem(class ItemStack const&) const; // NOLINT
    /**
     * @symbol
     * ?_filterValidTargets\@PickupItemsGoal\@\@AEBA?AV?$vector\@VWeakEntityRef\@\@V?$allocator\@VWeakEntityRef\@\@\@std\@\@\@std\@\@AEBV?$vector\@UDistanceSortedActor\@\@V?$allocator\@UDistanceSortedActor\@\@\@std\@\@\@3\@\@Z
     */
    MCAPI std::vector<class WeakEntityRef>
          _filterValidTargets(std::vector<struct DistanceSortedActor> const&) const; // NOLINT
    /**
     * @symbol ?_getShareableItem\@PickupItemsGoal\@\@AEBAPEBUShareable\@\@AEBVItemStack\@\@\@Z
     */
    MCAPI struct Shareable const* _getShareableItem(class ItemStack const&) const; // NOLINT
    /**
     * @symbol ?_hasRoomForCarriedItem\@PickupItemsGoal\@\@AEBA_NXZ
     */
    MCAPI bool _hasRoomForCarriedItem() const; // NOLINT
    /**
     * @symbol ?_pickItemUp\@PickupItemsGoal\@\@AEAAXPEAVItemActor\@\@\@Z
     */
    MCAPI void _pickItemUp(class ItemActor*); // NOLINT

private:
};
