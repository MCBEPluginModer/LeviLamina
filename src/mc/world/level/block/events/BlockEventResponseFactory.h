#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockEventResponseFactory {

public:
    // prevent constructor by default
    BlockEventResponseFactory& operator=(BlockEventResponseFactory const&) = delete;
    BlockEventResponseFactory(BlockEventResponseFactory const&)            = delete;
    BlockEventResponseFactory()                                            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?initializeFactory\@BlockEventResponseFactory\@\@UEAAXAEBVExperiments\@\@\@Z
     */
    virtual void initializeFactory(class Experiments const&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?initSchema\@BlockEventResponseFactory\@\@UEAAXXZ
     */
    virtual void initSchema(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKEVENTRESPONSEFACTORY
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BlockEventResponseFactory(); // NOLINT
#endif
};
