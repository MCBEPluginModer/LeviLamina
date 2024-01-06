#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct PropertyBinding; }
// clang-format on

namespace Scripting {

struct InterfaceBinding {
public:
    // prevent constructor by default
    InterfaceBinding& operator=(InterfaceBinding const&);
    InterfaceBinding(InterfaceBinding const&);
    InterfaceBinding();

public:
    // NOLINTBEGIN
    // symbol: ??0InterfaceBinding@Scripting@@QEAA@$$QEAU01@@Z
    MCAPI InterfaceBinding(struct Scripting::InterfaceBinding&&);

    // symbol:
    // ??0InterfaceBinding@Scripting@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Vmeta_type@entt@@V?$vector@UPropertyBinding@Scripting@@V?$allocator@UPropertyBinding@Scripting@@@std@@@3@@Z
    MCAPI InterfaceBinding(std::string name_, entt::meta_type type_, std::vector<struct Scripting::PropertyBinding>);

    // symbol: ??1InterfaceBinding@Scripting@@QEAA@XZ
    MCAPI ~InterfaceBinding();

    // NOLINTEND
};

}; // namespace Scripting
