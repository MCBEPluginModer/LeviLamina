#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/world/components/FlagComponent.h"

namespace MobMovementFriction {
// NOLINTBEGIN
// symbol:
// ?applyFriction@MobMovementFriction@@YAXPEBUCurrentLocalMoveVelocityComponent@@PEBV?$FlagComponent@UVexFlag@@@@PEBUAbilitiesComponent@@PEBUPlayerInputModeComponent@@AEBUSynchedActorDataComponent@@AEAUStateVectorComponent@@M_N@Z
MCAPI void applyFriction(
    struct CurrentLocalMoveVelocityComponent const*,
    class FlagComponent<struct VexFlag> const*,
    struct AbilitiesComponent const*,
    struct PlayerInputModeComponent const*,
    struct SynchedActorDataComponent const&,
    struct StateVectorComponent&,
    float,
    bool
);

// symbol: ?forSystems@MobMovementFriction@@YAXAEBV?$function@$$A6AX$$QEAUTickingSystemWithInfo@@@Z@std@@@Z
MCAPI void forSystems(std::function<void(struct TickingSystemWithInfo&&)> const&);

// symbol:
// ?tickLavaWalkFriction@MobMovementFriction@@YAXAEBVStrictEntityContext@@AEBVNavigationComponent@@V?$Optional@$$CBUAbilitiesComponent@@@@V?$Optional@$$CBUCurrentLocalMoveVelocityComponent@@@@V?$Optional@$$CBUPlayerInputModeComponent@@@@V?$Optional@$$CBV?$FlagComponent@UVexFlag@@@@@@AEBUFrictionModifierComponent@@AEBUSynchedActorDataComponent@@AEAUStateVectorComponent@@@Z
MCAPI void tickLavaWalkFriction(class StrictEntityContext const&, class NavigationComponent const&, class Optional<struct AbilitiesComponent const>, class Optional<struct CurrentLocalMoveVelocityComponent const>, class Optional<struct PlayerInputModeComponent const>, class Optional<class FlagComponent<struct VexFlag> const>, struct FrictionModifierComponent const&, struct SynchedActorDataComponent const&, struct StateVectorComponent&);

// symbol:
// ?tickNormalFriction@MobMovementFriction@@YAXAEBVStrictEntityContext@@AEBUMobTravelComponent@@V?$Optional@$$CBUAbilitiesComponent@@@@V?$Optional@$$CBUCurrentLocalMoveVelocityComponent@@@@V?$Optional@$$CBUPlayerInputModeComponent@@@@V?$Optional@$$CBV?$FlagComponent@UVexFlag@@@@@@AEBUFrictionModifierComponent@@AEBUSynchedActorDataComponent@@AEAUStateVectorComponent@@@Z
MCAPI void
tickNormalFriction(class StrictEntityContext const&, struct MobTravelComponent const&, class Optional<struct AbilitiesComponent const>, class Optional<struct CurrentLocalMoveVelocityComponent const>, class Optional<struct PlayerInputModeComponent const>, class Optional<class FlagComponent<struct VexFlag> const>, struct FrictionModifierComponent const&, struct SynchedActorDataComponent const&, struct StateVectorComponent&);
// NOLINTEND

}; // namespace MobMovementFriction
