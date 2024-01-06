#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Exclude.h"
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class MoveSpeedCapSystem {
public:
    // prevent constructor by default
    MoveSpeedCapSystem& operator=(MoveSpeedCapSystem const&);
    MoveSpeedCapSystem(MoveSpeedCapSystem const&);
    MoveSpeedCapSystem();

public:
    // NOLINTBEGIN
    // symbol: ?create@MoveSpeedCapSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo create();

    // symbol:
    // ?tick@MoveSpeedCapSystem@@SAXV?$ViewT@VStrictEntityContext@@UMoveRequestComponent@@@@V?$ViewT@VStrictEntityContext@@$$CBUSynchedActorDataComponent@@V?$Optional@V?$FlagComponent@UActorIsImmobileFlag@@@@@@@@V?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UMobFlag@@@@@@$$CBUAttributesComponent@@V?$Optional@V?$FlagComponent@UActorIsKnockedBackOnDeathFlag@@@@@@@@V?$ViewT@VStrictEntityContext@@$$CBUSynchedActorDataComponent@@U?$Include@V?$FlagComponent@UOnGroundFlag@@@@V?$FlagComponent@UHorseFlag@@@@@@U?$Exclude@V?$FlagComponent@UMobAllowStandSlidingFlag@@@@V?$FlagComponent@UMobIsJumpingFlag@@@@@@@@V?$ViewT@VStrictEntityContext@@V?$FlagComponent@UHorseFlag@@@@@@V?$ViewT@VStrictEntityContext@@$$CBV?$FlagComponent@UPlayerIsSleepingFlag@@@@$$CBV?$FlagComponent@UPlayerComponentFlag@@@@@@@Z
    MCAPI static void tick(class ViewT<class StrictEntityContext, struct MoveRequestComponent> view, class ViewT<class StrictEntityContext, struct SynchedActorDataComponent const, class Optional<class FlagComponent<struct ActorIsImmobileFlag>>>, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct MobFlag>>, struct AttributesComponent const, class Optional<class FlagComponent<struct ActorIsKnockedBackOnDeathFlag>>>, class ViewT<class StrictEntityContext, struct SynchedActorDataComponent const, struct Include<class FlagComponent<struct OnGroundFlag>, class FlagComponent<struct HorseFlag>>, struct Exclude<class FlagComponent<struct MobAllowStandSlidingFlag>, class FlagComponent<struct MobIsJumpingFlag>>>, class ViewT<class StrictEntityContext, class FlagComponent<struct HorseFlag>>, class ViewT<class StrictEntityContext, class FlagComponent<struct PlayerIsSleepingFlag> const, class FlagComponent<struct PlayerComponentFlag> const>);

    // NOLINTEND
};
