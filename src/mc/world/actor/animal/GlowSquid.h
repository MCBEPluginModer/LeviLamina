#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorInitializationMethod.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/ArmorTextureType.h"
#include "mc/enums/HandSlot.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/animal/Squid.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class GlowSquid : public ::Squid {
public:
    // prevent constructor by default
    GlowSquid& operator=(GlowSquid const&);
    GlowSquid(GlowSquid const&);
    GlowSquid();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: __gen_??1GlowSquid@@UEAA@XZ
    virtual ~GlowSquid() = default;

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 29, symbol: ?normalTick@GlowSquid@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 42, symbol: __unk_vfn_42
    virtual void __unk_vfn_42();

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 60, symbol: __unk_vfn_60
    virtual void __unk_vfn_60();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 83, symbol: ?handleEntityEvent@GlowSquid@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent id, int data);

    // vIndex: 107, symbol: __unk_vfn_107
    virtual void __unk_vfn_107();

    // vIndex: 144, symbol: __unk_vfn_144
    virtual void __unk_vfn_144();

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 163, symbol: ?_hurt@GlowSquid@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 167, symbol: __unk_vfn_167
    virtual void __unk_vfn_167();

    // vIndex: 168, symbol: __unk_vfn_168
    virtual void __unk_vfn_168();

    // vIndex: 204, symbol: ?_getWalkTargetValue@GlowSquid@@UEAAMAEBVBlockPos@@@Z
    virtual float _getWalkTargetValue(class BlockPos const& pos);

    // vIndex: 210, symbol: ?_getInkSquirtSoundEvent@GlowSquid@@MEBA?AW4LevelSoundEvent@Legacy@Puv@@XZ
    virtual ::Puv::Legacy::LevelSoundEvent _getInkSquirtSoundEvent() const;

    // symbol: ??0GlowSquid@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI GlowSquid(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_startGoingDark@GlowSquid@@AEAAXXZ
    MCAPI void _startGoingDark();

    // NOLINTEND
};
