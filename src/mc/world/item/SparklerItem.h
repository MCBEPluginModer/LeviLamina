#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/ChemistryStickItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class SparklerItem : public ::ChemistryStickItem {
public:
    // SparklerItem inner types declare
    // clang-format off
    struct ColorInfo;
    // clang-format on

    // SparklerItem inner types define
    struct ColorInfo {
    public:
        // prevent constructor by default
        ColorInfo& operator=(ColorInfo const&);
        ColorInfo(ColorInfo const&);
        ColorInfo();
    };

public:
    // prevent constructor by default
    SparklerItem& operator=(SparklerItem const&);
    SparklerItem(SparklerItem const&);
    SparklerItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SparklerItem@@UEAA@XZ
    virtual ~SparklerItem() = default;

    // vIndex: 8, symbol: __unk_vfn_8
    virtual void __unk_vfn_8();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 17, symbol: __unk_vfn_17
    virtual void __unk_vfn_17();

    // vIndex: 35, symbol: ?isHandEquipped@SparklerItem@@UEBA_NXZ
    virtual bool isHandEquipped() const;

    // vIndex: 37, symbol: __unk_vfn_37
    virtual void __unk_vfn_37();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

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

    // vIndex: 81, symbol:
    // ?buildDescriptionId@SparklerItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 86, symbol: ?inventoryTick@SparklerItem@@UEBA_NAEAVItemStack@@AEAVLevel@@AEAVActor@@H_N@Z
    virtual bool
    inventoryTick(class ItemStack& itemStack, class Level& level, class Actor& owner, int slot, bool selected) const;

    // vIndex: 98, symbol: __unk_vfn_98
    virtual void __unk_vfn_98();

    // vIndex: 99, symbol: __unk_vfn_99
    virtual void __unk_vfn_99();

    // vIndex: 102, symbol:
    // ?setIconInfo@SparklerItem@@UEAAAEAVItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    virtual class Item& setIconInfo(std::string const& name, int id);

    // vIndex: 103, symbol: ?getIconInfo@SparklerItem@@UEBA?AUResolvedItemIconInfo@@AEBVItemStackBase@@H_N@Z
    virtual struct ResolvedItemIconInfo
    getIconInfo(class ItemStackBase const& itemStack, int, bool inInventoryPane) const;

    // vIndex: 107, symbol: ?getLightEmission@SparklerItem@@UEBA?AUBrightness@@H@Z
    virtual struct Brightness getLightEmission(int auxValue) const;

    // symbol: ?COLORS@SparklerItem@@2QBUColorInfo@1@B
    MCAPI static struct SparklerItem::ColorInfo const COLORS[];

    // symbol: ?MAX_ACTIVE_TICKS@SparklerItem@@2HB
    MCAPI static int const MAX_ACTIVE_TICKS;

    // NOLINTEND
};
