#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/Closure.h"
#include "mc/external/scripting/WeakTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
namespace gametest { class GameTestSequence; }
// clang-format on

namespace ScriptModuleGameTest {

class ScriptGameTestSequence {
public:
    // prevent constructor by default
    ScriptGameTestSequence& operator=(ScriptGameTestSequence const&);
    ScriptGameTestSequence(ScriptGameTestSequence const&);
    ScriptGameTestSequence();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0ScriptGameTestSequence@ScriptModuleGameTest@@QEAA@AEAVGameTestSequence@gametest@@VWeakLifetimeScope@Scripting@@@Z
    MCAPI ScriptGameTestSequence(class gametest::GameTestSequence& sequence, class Scripting::WeakLifetimeScope scope);

    // symbol:
    // ?getScriptObjectHandle@ScriptGameTestSequence@ScriptModuleGameTest@@QEBA?AV?$WeakTypedObjectHandle@VScriptGameTestSequence@ScriptModuleGameTest@@@Scripting@@XZ
    MCAPI class Scripting::WeakTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestSequence>
    getScriptObjectHandle() const;

    // symbol:
    // ?thenExecute@ScriptGameTestSequence@ScriptModuleGameTest@@QEAA?AV?$WeakTypedObjectHandle@VScriptGameTestSequence@ScriptModuleGameTest@@@Scripting@@V?$Closure@$$A6AXXZ$$V@4@@Z
    MCAPI class Scripting::WeakTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestSequence>
    thenExecute(class Scripting::Closure<void(void)> fn);

    // symbol:
    // ?thenExecuteAfter@ScriptGameTestSequence@ScriptModuleGameTest@@QEAA?AV?$WeakTypedObjectHandle@VScriptGameTestSequence@ScriptModuleGameTest@@@Scripting@@HV?$Closure@$$A6AXXZ$$V@4@@Z
    MCAPI class Scripting::WeakTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestSequence>
    thenExecuteAfter(int tickDelay, class Scripting::Closure<void(void)> fn);

    // symbol:
    // ?thenExecuteFor@ScriptGameTestSequence@ScriptModuleGameTest@@QEAA?AV?$WeakTypedObjectHandle@VScriptGameTestSequence@ScriptModuleGameTest@@@Scripting@@HV?$Closure@$$A6AXXZ$$V@4@@Z
    MCAPI class Scripting::WeakTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestSequence>
    thenExecuteFor(int, class Scripting::Closure<void(void)> fn);

    // symbol:
    // ?thenFail@ScriptGameTestSequence@ScriptModuleGameTest@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void thenFail(std::string error);

    // symbol:
    // ?thenIdle@ScriptGameTestSequence@ScriptModuleGameTest@@QEAA?AV?$WeakTypedObjectHandle@VScriptGameTestSequence@ScriptModuleGameTest@@@Scripting@@H@Z
    MCAPI class Scripting::WeakTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestSequence>
    thenIdle(int tickDelay);

    // symbol:
    // ?thenWait@ScriptGameTestSequence@ScriptModuleGameTest@@QEAA?AV?$WeakTypedObjectHandle@VScriptGameTestSequence@ScriptModuleGameTest@@@Scripting@@V?$Closure@$$A6AXXZ$$V@4@@Z
    MCAPI class Scripting::WeakTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestSequence>
    thenWait(class Scripting::Closure<void(void)> fn);

    // symbol:
    // ?thenWaitAfter@ScriptGameTestSequence@ScriptModuleGameTest@@QEAA?AV?$WeakTypedObjectHandle@VScriptGameTestSequence@ScriptModuleGameTest@@@Scripting@@HV?$Closure@$$A6AXXZ$$V@4@@Z
    MCAPI class Scripting::WeakTypedObjectHandle<class ScriptModuleGameTest::ScriptGameTestSequence>
    thenWaitAfter(int tickDelay, class Scripting::Closure<void(void)> fn);

    // NOLINTEND
};

}; // namespace ScriptModuleGameTest
