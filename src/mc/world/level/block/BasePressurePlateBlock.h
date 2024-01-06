#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class BasePressurePlateBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    BasePressurePlateBlock& operator=(BasePressurePlateBlock const&);
    BasePressurePlateBlock(BasePressurePlateBlock const&);
    BasePressurePlateBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BasePressurePlateBlock@@UEAA@XZ
    virtual ~BasePressurePlateBlock();

    // vIndex: 5, symbol:
    // ?getCollisionShape@BasePressurePlateBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 11, symbol: ?getVisualShape@BasePressurePlateBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@@Z
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const;

    // vIndex: 20, symbol: __unk_vfn_20
    virtual void __unk_vfn_20();

    // vIndex: 27, symbol: __unk_vfn_27
    virtual void __unk_vfn_27();

    // vIndex: 28, symbol: __unk_vfn_28
    virtual void __unk_vfn_28();

    // vIndex: 29, symbol: __unk_vfn_29
    virtual void __unk_vfn_29();

    // vIndex: 30, symbol: __unk_vfn_30
    virtual void __unk_vfn_30();

    // vIndex: 31, symbol: __unk_vfn_31
    virtual void __unk_vfn_31();

    // vIndex: 33, symbol: __unk_vfn_33
    virtual void __unk_vfn_33();

    // vIndex: 34, symbol: __unk_vfn_34
    virtual void __unk_vfn_34();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 36, symbol: __unk_vfn_36
    virtual void __unk_vfn_36();

    // vIndex: 37, symbol: __unk_vfn_37
    virtual void __unk_vfn_37();

    // vIndex: 38, symbol: __unk_vfn_38
    virtual void __unk_vfn_38();

    // vIndex: 40, symbol: __unk_vfn_40
    virtual void __unk_vfn_40();

    // vIndex: 41, symbol: __unk_vfn_41
    virtual void __unk_vfn_41();

    // vIndex: 42, symbol: __unk_vfn_42
    virtual void __unk_vfn_42();

    // vIndex: 43, symbol: __unk_vfn_43
    virtual void __unk_vfn_43();

    // vIndex: 44, symbol: __unk_vfn_44
    virtual void __unk_vfn_44();

    // vIndex: 45, symbol: __unk_vfn_45
    virtual void __unk_vfn_45();

    // vIndex: 46, symbol: ?isSignalSource@BasePressurePlateBlock@@UEBA_NXZ
    virtual bool isSignalSource() const;

    // vIndex: 48, symbol: __unk_vfn_48
    virtual void __unk_vfn_48();

    // vIndex: 54, symbol: __unk_vfn_54
    virtual void __unk_vfn_54();

    // vIndex: 55, symbol: __unk_vfn_55
    virtual void __unk_vfn_55();

    // vIndex: 58, symbol:
    // ?shouldConnectToRedstone@BasePressurePlateBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@W4Type@Direction@@@Z
    virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, ::Direction::Type) const;

    // vIndex: 61, symbol: ?checkIsPathable@BasePressurePlateBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
    virtual bool
    checkIsPathable(class Actor& entity, class BlockPos const& lastPathPos, class BlockPos const& pathPos) const;

    // vIndex: 67, symbol: __unk_vfn_67
    virtual void __unk_vfn_67();

    // vIndex: 71, symbol: ?setupRedstoneComponent@BasePressurePlateBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 74, symbol: __unk_vfn_74
    virtual void __unk_vfn_74();

    // vIndex: 85, symbol: ?mayPlace@BasePressurePlateBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 92, symbol: ?neighborChanged@BasePressurePlateBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 100, symbol: ?isAttachedTo@BasePressurePlateBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAV3@@Z
    virtual bool
    isAttachedTo(class BlockSource& region, class BlockPos const& pos, class BlockPos& outAttachedTo) const;

    // vIndex: 102, symbol:
    // ?shouldTriggerEntityInside@BasePressurePlateBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z
    virtual bool
    shouldTriggerEntityInside(class BlockSource& region, class BlockPos const& pos, class Actor& entity) const;

    // vIndex: 109, symbol: __unk_vfn_109
    virtual void __unk_vfn_109();

    // vIndex: 110, symbol: __unk_vfn_110
    virtual void __unk_vfn_110();

    // vIndex: 111, symbol: __unk_vfn_111
    virtual void __unk_vfn_111();

    // vIndex: 114, symbol: __unk_vfn_114
    virtual void __unk_vfn_114();

    // vIndex: 117, symbol: __unk_vfn_117
    virtual void __unk_vfn_117();

    // vIndex: 129, symbol: ?getVariant@BasePressurePlateBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const& block) const;

    // vIndex: 130, symbol: ?canSpawnOn@BasePressurePlateBlock@@UEBA_NPEAVActor@@@Z
    virtual bool canSpawnOn(class Actor*) const;

    // vIndex: 138, symbol: __unk_vfn_138
    virtual void __unk_vfn_138();

    // vIndex: 147, symbol: ?onPlace@BasePressurePlateBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 149, symbol: __unk_vfn_149
    virtual void __unk_vfn_149();

    // vIndex: 150, symbol: ?tick@BasePressurePlateBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 152, symbol: __unk_vfn_152
    virtual void __unk_vfn_152();

    // vIndex: 155, symbol: __unk_vfn_155
    virtual void __unk_vfn_155();

    // vIndex: 156, symbol: ?canSurvive@BasePressurePlateBlock@@MEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 166, symbol: ?getSilkTouchItemInstance@BasePressurePlateBlock@@UEBA?AVItemInstance@@AEBVBlock@@@Z
    virtual class ItemInstance getSilkTouchItemInstance(class Block const&) const;

    // vIndex: 167, symbol: ?entityInside@BasePressurePlateBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z
    virtual void entityInside(class BlockSource& region, class BlockPos const& pos, class Actor& entity) const;

    // vIndex: 168, symbol: ?getTickDelay@BasePressurePlateBlock@@UEBAHXZ
    virtual int getTickDelay() const;

    // vIndex: 169, symbol: ?getSignalStrength@PressurePlateBlock@@MEBAHAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual int getSignalStrength(class BlockSource& region, class BlockPos const& pos) const = 0;

    // vIndex: 170, symbol: ?getSignalForData@PressurePlateBlock@@MEBAHH@Z
    virtual int getSignalForData(int data) const = 0;

    // vIndex: 171, symbol: ?getRedstoneSignal@PressurePlateBlock@@MEBAHH@Z
    virtual int getRedstoneSignal(int signal) const = 0;

    // vIndex: 172, symbol: ?getSensitiveAABB@BasePressurePlateBlock@@MEBA?BVAABB@@AEBVBlockPos@@@Z
    virtual class AABB const getSensitiveAABB(class BlockPos const& pos) const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ??0BasePressurePlateBlock@@IEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
    MCAPI BasePressurePlateBlock(std::string const& nameId, int id, class Material const& material);

    // symbol: ?checkPressed@BasePressurePlateBlock@@IEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@HH@Z
    MCAPI void checkPressed(
        class BlockSource&    region,
        class BlockPos const& pos,
        class Actor*          sourceEntity,
        int                   oldSignal,
        int                   newSignal
    ) const;

    // NOLINTEND
};
