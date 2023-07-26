#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SlimeMoveControlDescription {

public:
    // prevent constructor by default
    SlimeMoveControlDescription& operator=(SlimeMoveControlDescription const&) = delete;
    SlimeMoveControlDescription(SlimeMoveControlDescription const&)            = delete;
    SlimeMoveControlDescription()                                              = delete;

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@SlimeMoveControlDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const; // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@SlimeMoveControlDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SLIMEMOVECONTROLDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SlimeMoveControlDescription(); // NOLINT
#endif
};
