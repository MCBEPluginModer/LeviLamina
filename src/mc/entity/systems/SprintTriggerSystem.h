#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

namespace SprintTriggerSystem {
// NOLINTBEGIN
// symbol: ?createActionSystem@SprintTriggerSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createActionSystem();

// symbol: ?createIntentSystem@SprintTriggerSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createIntentSystem();

// symbol: ?createSetRequestSystem@SprintTriggerSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createSetRequestSystem();

// symbol:
// ?doIntentTick@SprintTriggerSystem@@YAXV?$Optional@$$CBUItemUseSlowdownModifierComponent@@@@AEBV?$Optional@$$CBV?$FlagComponent@UOnGroundFlag@@@@@@AEBV?$Optional@$$CBV?$FlagComponent@UInWaterFlag@@@@@@AEBUAbilitiesComponent@@AEBUMobEffectsComponent@@AEBUMoveInputComponent@@AEBUPlayerInputModeComponent@@AEBUStateVectorComponent@@AEBUPlayerLastPosComponent@@AEBUSynchedActorDataComponent@@AEAUPlayerInputRequestComponent@@AEAUVanillaClientGameplayComponent@@AEAUPlayerActionComponent@@@Z
MCAPI void doIntentTick(class Optional<struct ItemUseSlowdownModifierComponent const>, class Optional<class FlagComponent<struct OnGroundFlag> const> const&, class Optional<class FlagComponent<struct InWaterFlag> const> const&, struct AbilitiesComponent const&, struct MobEffectsComponent const&, struct MoveInputComponent const&, struct PlayerInputModeComponent const&, struct StateVectorComponent const&, struct PlayerLastPosComponent const&, struct SynchedActorDataComponent const&, struct PlayerInputRequestComponent&, struct VanillaClientGameplayComponent&, struct PlayerActionComponent&);

// symbol:
// ?doSetRequestTick@SprintTriggerSystem@@YAXAEBVStrictEntityContext@@AEBV?$Optional@$$CBUPassengerComponent@@@@AEBUAttributesComponent@@AEAUPlayerInputRequestComponent@@AEBV?$ViewT@VStrictEntityContext@@UVehicleComponent@@USynchedActorDataComponent@@V?$Optional@V?$FlagComponent@UCanVehicleSprintFlag@@@@@@@@@Z
MCAPI void
doSetRequestTick(class StrictEntityContext const&, class Optional<struct PassengerComponent const> const&, struct AttributesComponent const&, struct PlayerInputRequestComponent&, class ViewT<class StrictEntityContext, struct VehicleComponent, struct SynchedActorDataComponent, class Optional<class FlagComponent<struct CanVehicleSprintFlag>>> const&);
// NOLINTEND

}; // namespace SprintTriggerSystem
