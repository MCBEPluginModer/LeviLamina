#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class AbstractCompassItem : public ::Item {
public:
    // prevent constructor by default
    AbstractCompassItem& operator=(AbstractCompassItem const&);
    AbstractCompassItem(AbstractCompassItem const&);
    AbstractCompassItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AbstractCompassItem@@UEAA@XZ
    virtual ~AbstractCompassItem() = default;

    // vIndex: 8, symbol: __unk_vfn_8
    virtual void __unk_vfn_8();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 17, symbol: __unk_vfn_17
    virtual void __unk_vfn_17();

    // vIndex: 37, symbol: __unk_vfn_37
    virtual void __unk_vfn_37();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 48, symbol: ?getEnchantSlot@AbstractCompassItem@@UEBAHXZ
    virtual int getEnchantSlot() const;

    // vIndex: 52, symbol: __unk_vfn_52
    virtual void __unk_vfn_52();

    // vIndex: 56, symbol: __unk_vfn_56
    virtual void __unk_vfn_56();

    // vIndex: 57, symbol: __unk_vfn_57
    virtual void __unk_vfn_57();

    // vIndex: 58, symbol: __unk_vfn_58
    virtual void __unk_vfn_58();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 65, symbol: __unk_vfn_65
    virtual void __unk_vfn_65();

    // vIndex: 66, symbol: __unk_vfn_66
    virtual void __unk_vfn_66();

    // vIndex: 98, symbol: __unk_vfn_98
    virtual void __unk_vfn_98();

    // vIndex: 99, symbol: __unk_vfn_99
    virtual void __unk_vfn_99();

    // vIndex: 103, symbol: ?getIconInfo@AbstractCompassItem@@UEBA?AUResolvedItemIconInfo@@AEBVItemStackBase@@H_N@Z
    virtual struct ResolvedItemIconInfo
    getIconInfo(class ItemStackBase const& itemStack, int, bool inInventoryPane) const;

    // vIndex: 105, symbol: ?getAnimationFrameFor@AbstractCompassItem@@UEBAHPEAVMob@@_NPEBVItemStack@@_N@Z
    virtual int
    getAnimationFrameFor(class Mob* holder, bool asItemEntity, class ItemStack const* item, bool shouldAnimate) const;

    // symbol:
    // ??0AbstractCompassItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HV?$function@$$A6A?AVCompassSpriteCalculator@@PEAVMob@@@Z@2@@Z
    MCAPI AbstractCompassItem(std::string const& name, int, std::function<class CompassSpriteCalculator(class Mob*)>);

    // NOLINTEND
};
