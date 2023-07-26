#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class DouseFireSubcomponent {

public:
    // prevent constructor by default
    DouseFireSubcomponent& operator=(DouseFireSubcomponent const&) = delete;
    DouseFireSubcomponent(DouseFireSubcomponent const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?doOnHitEffect\@DouseFireSubcomponent\@\@UEAAXAEAVActor\@\@AEAVProjectileComponent\@\@\@Z
     */
    virtual void doOnHitEffect(class Actor&, class ProjectileComponent&); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?getName\@DouseFireSubcomponent\@\@UEAAPEBDXZ
     */
    virtual char const* getName(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DOUSEFIRESUBCOMPONENT
    /**
     * @symbol ?readfromJSON\@DouseFireSubcomponent\@\@UEAAXAEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    MCVAPI void readfromJSON(class Json::Value&, class SemVersion const&); // NOLINT
    /**
     * @symbol ?writetoJSON\@DouseFireSubcomponent\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    MCVAPI void writetoJSON(class Json::Value&) const; // NOLINT
#endif
    /**
     * @symbol ??0DouseFireSubcomponent\@\@QEAA\@XZ
     */
    MCAPI DouseFireSubcomponent(); // NOLINT
    /**
     * @symbol ?douseFire\@DouseFireSubcomponent\@\@QEAAXAEAVActor\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void douseFire(class Actor&, class BlockSource&, class BlockPos const&); // NOLINT
};
