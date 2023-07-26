#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TargetNearbySystem {

public:
    // prevent constructor by default
    TargetNearbySystem& operator=(TargetNearbySystem const&) = delete;
    TargetNearbySystem(TargetNearbySystem const&)            = delete;
    TargetNearbySystem()                                     = delete;

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
     * @symbol ?tick\@TargetNearbySystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT
};
