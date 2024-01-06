#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/ReplayStateMode.h"

struct ReplayStateConfig {
public:
    // prevent constructor by default
    ReplayStateConfig& operator=(ReplayStateConfig const&);
    ReplayStateConfig(ReplayStateConfig const&);
    ReplayStateConfig();

public:
    // NOLINTBEGIN
    // symbol: ??0ReplayStateConfig@@QEAA@W4ReplayStateMode@@@Z
    MCAPI explicit ReplayStateConfig(::ReplayStateMode mode);

    // NOLINTEND
};
