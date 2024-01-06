#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class EnchantmentInstance;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemEnchantmentInstance {
public:
    // prevent constructor by default
    ScriptItemEnchantmentInstance(ScriptItemEnchantmentInstance const&);
    ScriptItemEnchantmentInstance();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptItemEnchantmentInstance@ScriptModuleMinecraft@@QEAA@AEBVEnchantmentInstance@@@Z
    MCAPI explicit ScriptItemEnchantmentInstance(class EnchantmentInstance const& instance);

    // symbol: ??4ScriptItemEnchantmentInstance@ScriptModuleMinecraft@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptItemEnchantmentInstance&
    operator=(struct ScriptModuleMinecraft::ScriptItemEnchantmentInstance const&);

    // symbol: ??1ScriptItemEnchantmentInstance@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptItemEnchantmentInstance();

    // symbol:
    // ?bind@ScriptItemEnchantmentInstance@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptItemEnchantmentInstance@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemEnchantmentInstance>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
