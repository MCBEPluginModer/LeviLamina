#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SmoothStoneSelector {

public:
    // prevent constructor by default
    SmoothStoneSelector& operator=(SmoothStoneSelector const&) = delete;
    SmoothStoneSelector(SmoothStoneSelector const&)            = delete;
    SmoothStoneSelector()                                      = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?next\@SmoothStoneSelector\@\@UEBAAEBVBlock\@\@AEAVRandom\@\@HHH_N\@Z
     */
    virtual class Block const& next(class Random&, int, int, int, bool) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SMOOTHSTONESELECTOR
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SmoothStoneSelector(); // NOLINT
#endif
};
