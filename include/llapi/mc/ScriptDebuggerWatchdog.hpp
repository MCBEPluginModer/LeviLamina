/**
 * @file  ScriptDebuggerWatchdog.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptDebuggerWatchdog.
 *
 */
class ScriptDebuggerWatchdog {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTDEBUGGERWATCHDOG
public:
    class ScriptDebuggerWatchdog& operator=(class ScriptDebuggerWatchdog const &) = delete;
    ScriptDebuggerWatchdog(class ScriptDebuggerWatchdog const &) = delete;
    ScriptDebuggerWatchdog() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1946266755
     */
    virtual ~ScriptDebuggerWatchdog();
    /**
     * @vftbl  1
     * @symbol ?requireClose@ScriptDebuggerWatchdog@@UEBA_NXZ
     * @hash   1325254882
     */
    virtual bool requireClose() const;
    /**
     * @vftbl  2
     * @symbol ?startListenTimeout@ScriptDebuggerWatchdog@@UEAAXXZ
     * @hash   -1605407498
     */
    virtual void startListenTimeout();
    /**
     * @vftbl  3
     * @symbol ?listenTimeoutExpired@ScriptDebuggerWatchdog@@UEBA_NXZ
     * @hash   1313102682
     */
    virtual bool listenTimeoutExpired() const;
    /**
     * @symbol ??0ScriptDebuggerWatchdog@@QEAA@V?$duration@HU?$ratio@$0DM@$00@std@@@chrono@std@@@Z
     * @hash   -1935910505
     */
    MCAPI ScriptDebuggerWatchdog(class std::chrono::duration<int, struct std::ratio<60, 1>>);
    /**
     * @symbol ?startLeaveGame@ScriptDebuggerWatchdog@@QEAAXXZ
     * @hash   90492773
     */
    MCAPI void startLeaveGame();

};