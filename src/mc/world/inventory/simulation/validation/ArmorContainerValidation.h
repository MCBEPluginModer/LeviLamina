#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

class ArmorContainerValidation : public ::ContainerValidationBase {

public:
    // prevent constructor by default
    ArmorContainerValidation& operator=(ArmorContainerValidation const&) = delete;
    ArmorContainerValidation(ArmorContainerValidation const&)            = delete;
    ArmorContainerValidation()                                           = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?isValidSlotForContainer\@ContainerValidationBase\@\@UEBA_NAEBVContainerScreenContext\@\@AEBVContainer\@\@H\@Z
     */
    virtual bool
    isValidSlotForContainer(class ContainerScreenContext const&, class Container const&, int) const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?isItemAllowedInSlot\@ArmorContainerValidation\@\@UEBA_NAEBVContainerScreenContext\@\@HAEBVItemStackBase\@\@H\@Z
     */
    virtual bool
    isItemAllowedInSlot(class ContainerScreenContext const&, int, class ItemStackBase const&, int) const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?getAvailableSetCount\@ArmorContainerValidation\@\@UEBAHHAEBVItemStackBase\@\@\@Z
     */
    virtual int getAvailableSetCount(int, class ItemStackBase const&) const; // NOLINT
    /**
     * @vftbl 4
     * @symbol ?isItemAllowedToAdd\@ArmorContainerValidation\@\@UEBA_NAEBVItemStack\@\@\@Z
     */
    virtual bool isItemAllowedToAdd(class ItemStack const&) const; // NOLINT
    /**
     * @vftbl 5
     * @symbol
     * ?isItemAllowedToRemove\@ArmorContainerValidation\@\@UEBA_NAEBVContainerScreenContext\@\@AEBVItemStackBase\@\@\@Z
     */
    virtual bool isItemAllowedToRemove(class ContainerScreenContext const&, class ItemStackBase const&) const; // NOLINT
    /**
     * @vftbl 6
     * @symbol ?canItemMoveToContainer\@ArmorContainerValidation\@\@UEBA_NAEBVItemStackBase\@\@\@Z
     */
    virtual bool canItemMoveToContainer(class ItemStackBase const&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol ?canDestroy\@ContainerValidationBase\@\@UEBA_NAEBVContainerScreenContext\@\@\@Z
     */
    virtual bool canDestroy(class ContainerScreenContext const&) const; // NOLINT
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8(); // NOLINT
    /**
     * @vftbl 9
     * @symbol ?getContainerSize\@ArmorContainerValidation\@\@UEBAHAEBVContainerScreenContext\@\@AEBVContainer\@\@\@Z
     */
    virtual int getContainerSize(class ContainerScreenContext const&, class Container const&) const; // NOLINT
};
