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

class FaceDirectionalBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    FaceDirectionalBlock& operator=(FaceDirectionalBlock const&);
    FaceDirectionalBlock(FaceDirectionalBlock const&);
    FaceDirectionalBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1FaceDirectionalBlock@@UEAA@XZ
    virtual ~FaceDirectionalBlock();

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

    // vIndex: 48, symbol: __unk_vfn_48
    virtual void __unk_vfn_48();

    // vIndex: 49, symbol: ?isValidAuxValue@FaceDirectionalBlock@@UEBA_NH@Z
    virtual bool isValidAuxValue(int auxValue) const;

    // vIndex: 54, symbol: __unk_vfn_54
    virtual void __unk_vfn_54();

    // vIndex: 55, symbol: __unk_vfn_55
    virtual void __unk_vfn_55();

    // vIndex: 67, symbol: __unk_vfn_67
    virtual void __unk_vfn_67();

    // vIndex: 74, symbol: __unk_vfn_74
    virtual void __unk_vfn_74();

    // vIndex: 98, symbol:
    // ?getPlacementBlock@FaceDirectionalBlock@@UEBAAEBVBlock@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
    virtual class Block const& getPlacementBlock(
        class Actor const&    by,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

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

    // vIndex: 131, symbol: ?getRenderBlock@FaceDirectionalBlock@@UEBAAEBVBlock@@XZ
    virtual class Block const& getRenderBlock() const;

    // vIndex: 132, symbol: ?getMappedFace@FaceDirectionalBlock@@UEBAEEAEBVBlock@@@Z
    virtual uchar getMappedFace(uchar face, class Block const& block) const;

    // vIndex: 133, symbol: ?getFaceFlip@FaceDirectionalBlock@@UEBA?AW4Flip@@EAEBVBlock@@@Z
    virtual ::Flip getFaceFlip(uchar face, class Block const& block) const;

    // vIndex: 138, symbol: __unk_vfn_138
    virtual void __unk_vfn_138();

    // vIndex: 149, symbol: __unk_vfn_149
    virtual void __unk_vfn_149();

    // vIndex: 152, symbol: __unk_vfn_152
    virtual void __unk_vfn_152();

    // vIndex: 155, symbol: __unk_vfn_155
    virtual void __unk_vfn_155();

    // symbol:
    // ??0FaceDirectionalBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@_NM@Z
    MCAPI FaceDirectionalBlock(
        std::string const&    nameId,
        int                   id,
        class Material const& material,
        bool                  horizontalOnly,
        float                 yRotOffset
    );

    // symbol: ?getFaceFlipStatic@FaceDirectionalBlock@@SA?AW4Flip@@EAEBVBlock@@_N@Z
    MCAPI static ::Flip getFaceFlipStatic(uchar face, class Block const& block, bool horizontalOnly);

    // symbol: ?getFacingDirection@FaceDirectionalBlock@@SAEAEBVBlock@@_N@Z
    MCAPI static uchar getFacingDirection(class Block const& block, bool horizontalOnly);

    // symbol: ?getMappedFaceStatic@FaceDirectionalBlock@@SAEEAEBVBlock@@_N@Z
    MCAPI static uchar getMappedFaceStatic(uchar face, class Block const& block, bool horizontalOnly);

    // NOLINTEND
};
