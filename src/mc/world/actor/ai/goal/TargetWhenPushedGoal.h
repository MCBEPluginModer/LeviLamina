#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TargetWhenPushedGoal {

public:
    // prevent constructor by default
    TargetWhenPushedGoal& operator=(TargetWhenPushedGoal const&) = delete;
    TargetWhenPushedGoal(TargetWhenPushedGoal const&)            = delete;
    TargetWhenPushedGoal()                                       = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@TargetWhenPushedGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@TargetWhenPushedGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@TargetWhenPushedGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol
     * ?appendDebugInfo\@TargetWhenPushedGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TARGETWHENPUSHEDGOAL
    /**
     * @symbol ?canBeInterrupted\@TargetWhenPushedGoal\@\@UEAA_NXZ
     */
    MCVAPI bool canBeInterrupted(); // NOLINT
    /**
     * @symbol ?canContinueToUse\@TargetWhenPushedGoal\@\@UEAA_NXZ
     */
    MCVAPI bool canContinueToUse(); // NOLINT
#endif
};
