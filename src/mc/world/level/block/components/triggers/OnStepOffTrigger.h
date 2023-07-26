#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OnStepOffTrigger {

public:
    // prevent constructor by default
    OnStepOffTrigger& operator=(OnStepOffTrigger const&) = delete;
    OnStepOffTrigger(OnStepOffTrigger const&)            = delete;
    OnStepOffTrigger()                                   = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ONSTEPOFFTRIGGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~OnStepOffTrigger(); // NOLINT
#endif
    /**
     * @symbol ??0OnStepOffTrigger\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI OnStepOffTrigger(class OnStepOffTrigger&&); // NOLINT
};
