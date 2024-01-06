#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PositionPassengerUtility {
public:
    // prevent constructor by default
    PositionPassengerUtility& operator=(PositionPassengerUtility const&);
    PositionPassengerUtility(PositionPassengerUtility const&);
    PositionPassengerUtility();

public:
    // NOLINTBEGIN
    // symbol: ?getNewPassengerPosition@PositionPassengerUtility@@SA?AVVec3@@VSynchedActorDataReader@@AEBV2@AEBVVec2@@@Z
    MCAPI static class Vec3
    getNewPassengerPosition(class SynchedActorDataReader data, class Vec3 const& origin, class Vec2 const&);

    // NOLINTEND
};
