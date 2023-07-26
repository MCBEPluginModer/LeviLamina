#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContainerScreenValidatorBase {

public:
    // prevent constructor by default
    ContainerScreenValidatorBase& operator=(ContainerScreenValidatorBase const&) = delete;
    ContainerScreenValidatorBase(ContainerScreenValidatorBase const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?postCommitItemRemoved\@ContainerScreenValidatorBase\@\@UEAA?AV?$shared_ptr\@VContainerValidationCommitObject\@\@\@std\@\@W4ContainerEnumName\@\@HAEBVItemStack\@\@\@Z
     */
    virtual class std::shared_ptr<class ContainerValidationCommitObject>
    postCommitItemRemoved(enum class ContainerEnumName, int, class ItemStack const&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?isCraftingImplemented\@ContainerScreenValidatorBase\@\@UEAA_NXZ
     */
    virtual bool isCraftingImplemented(); // NOLINT
    /**
     * @vftbl 3
     * @symbol
     * ?getCraftResult\@ContainerScreenValidatorBase\@\@UEAA?AUContainerValidationCraftResult\@\@AEBVContainerScreenContext\@\@AEAVContainerScreenValidation\@\@V?$unique_ptr\@UContainerValidationCraftInputs\@\@U?$default_delete\@UContainerValidationCraftInputs\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual struct ContainerValidationCraftResult
    getCraftResult(class ContainerScreenContext const&, class ContainerScreenValidation&, std::unique_ptr<struct ContainerValidationCraftInputs>); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTAINERSCREENVALIDATORBASE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ContainerScreenValidatorBase(); // NOLINT
#endif
    /**
     * @symbol ??0ContainerScreenValidatorBase\@\@QEAA\@XZ
     */
    MCAPI ContainerScreenValidatorBase(); // NOLINT
    /**
     * @symbol ?isValidContainerForScreen\@ContainerScreenValidatorBase\@\@QEBA_NW4ContainerEnumName\@\@\@Z
     */
    MCAPI bool isValidContainerForScreen(enum class ContainerEnumName) const; // NOLINT
};
