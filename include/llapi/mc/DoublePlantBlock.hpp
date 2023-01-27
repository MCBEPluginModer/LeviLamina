/**
 * @file  DoublePlantBlock.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BushBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DoublePlantBlock.
 *
 */
class DoublePlantBlock : public BushBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DOUBLEPLANTBLOCK
public:
    class DoublePlantBlock& operator=(class DoublePlantBlock const &) = delete;
    DoublePlantBlock(class DoublePlantBlock const &) = delete;
    DoublePlantBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1275578717
     */
    virtual ~DoublePlantBlock();
    /**
     * @vftbl  3
     * @symbol ?getNextBlockPermutation@DoublePlantBlock@@UEBAPEBVBlock@@AEBV2@@Z
     * @hash   623441567
     */
    virtual class Block const * getNextBlockPermutation(class Block const &) const;
    /**
     * @vftbl  7
     * @symbol ?randomlyModifyPosition@DoublePlantBlock@@UEBA?AVVec3@@AEBVBlockPos@@AEAH@Z
     * @hash   1713364627
     */
    virtual class Vec3 randomlyModifyPosition(class BlockPos const &, int &) const;
    /**
     * @vftbl  8
     * @symbol ?randomlyModifyPosition@DoublePlantBlock@@UEBA?AVVec3@@AEBVBlockPos@@@Z
     * @hash   304620072
     */
    virtual class Vec3 randomlyModifyPosition(class BlockPos const &) const;
    /**
     * @vftbl  10
     * @symbol ?getAABB@DoublePlantBlock@@UEBAAEBVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z
     * @hash   209049283
     */
    virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /**
     * @vftbl  19
     * @hash   -227039124
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  29
     * @hash   -198409973
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @hash   -178092511
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @hash   -176245469
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @hash   -175321948
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @hash   -174398427
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  36
     * @hash   -172551385
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @hash   -171627864
     */
    virtual void __unk_vfn_37();
    /**
     * @vftbl  38
     * @hash   -170704343
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl  39
     * @hash   -169780822
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl  40
     * @hash   -149463360
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  41
     * @hash   -148539839
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  42
     * @hash   -147616318
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  44
     * @hash   -145769276
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl  45
     * @hash   -144845755
     */
    virtual void __unk_vfn_45();
    /**
     * @vftbl  46
     * @hash   -143922234
     */
    virtual void __unk_vfn_46();
    /**
     * @vftbl  47
     * @hash   -142998713
     */
    virtual void __unk_vfn_47();
    /**
     * @vftbl  48
     * @hash   -142075192
     */
    virtual void __unk_vfn_48();
    /**
     * @vftbl  49
     * @hash   -141151671
     */
    virtual void __unk_vfn_49();
    /**
     * @vftbl  54
     * @hash   -117140125
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl  60
     * @hash   -99662418
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  61
     * @hash   -91281537
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl  62
     * @symbol ?canContainLiquid@DoublePlantBlock@@UEBA_NXZ
     * @hash   -1450424507
     */
    virtual bool canContainLiquid() const;
    /**
     * @vftbl  75
     * @hash   -58958302
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  79
     * @symbol ?setupRedstoneComponent@DoublePlantBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1055259461
     */
    virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  82
     * @hash   -33099714
     */
    virtual void __unk_vfn_82();
    /**
     * @vftbl  86
     * @symbol ?onFertilized@DoublePlantBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@W4FertilizerType@@@Z
     * @hash   -1471120269
     */
    virtual bool onFertilized(class BlockSource &, class BlockPos const &, class Actor *, enum class FertilizerType) const;
    /**
     * @vftbl  88
     * @symbol ?canBeFertilized@DoublePlantBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   130974568
     */
    virtual bool canBeFertilized(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  91
     * @symbol ?mayPlace@DoublePlantBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
     * @hash   -508743298
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &, unsigned char) const;
    /**
     * @vftbl  92
     * @symbol ?mayPlace@DoublePlantBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   594194205
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  98
     * @symbol ?playerWillDestroy@DoublePlantBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   -834717193
     */
    virtual bool playerWillDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  101
     * @symbol ?getSecondPart@DoublePlantBlock@@UEBA_NAEBVBlockSource@@AEBVBlockPos@@AEAV3@@Z
     * @hash   -1281378320
     */
    virtual bool getSecondPart(class BlockSource const &, class BlockPos const &, class BlockPos &) const;
    /**
     * @vftbl  102
     * @symbol ?asItemInstance@DoublePlantBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
     * @hash   -1364671129
     */
    virtual class ItemInstance asItemInstance(class Block const &, class BlockActor const *) const;
    /**
     * @vftbl  103
     * @symbol ?spawnResources@DoublePlantBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@PEAV?$vector@PEBVItem@@V?$allocator@PEBVItem@@@std@@@std@@@Z
     * @hash   -545815909
     */
    virtual void spawnResources(class BlockSource &, class BlockPos const &, class Block const &, class Randomize &, struct ResourceDropsContext const &, std::vector<class Item const *> *) const;
    /**
     * @vftbl  105
     * @hash   1432640646
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  115
     * @symbol ?canBeBuiltOver@DoublePlantBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -46585814
     */
    virtual bool canBeBuiltOver(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  123
     * @hash   1488051906
     */
    virtual void __unk_vfn_123();
    /**
     * @vftbl  125
     * @hash   1489898948
     */
    virtual void __unk_vfn_125();
    /**
     * @vftbl  126
     * @hash   1490822469
     */
    virtual void __unk_vfn_126();
    /**
     * @vftbl  131
     * @hash   1514834015
     */
    virtual void __unk_vfn_131();
    /**
     * @vftbl  133
     * @symbol ?buildDescriptionId@DoublePlantBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
     * @hash   326626810
     */
    virtual std::string buildDescriptionId(class Block const &) const;
    /**
     * @vftbl  134
     * @symbol ?isAuxValueRelevantForPicking@DoublePlantBlock@@UEBA_NXZ
     * @hash   1454768769
     */
    virtual bool isAuxValueRelevantForPicking() const;
    /**
     * @vftbl  136
     * @symbol ?getColor@DoublePlantBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   -1042854129
     */
    virtual int getColor(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  138
     * @symbol ?getColorForParticle@DoublePlantBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   -841589814
     */
    virtual int getColorForParticle(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  143
     * @symbol ?getVisualShape@DoublePlantBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@_N@Z
     * @hash   1371919293
     */
    virtual class AABB const & getVisualShape(class Block const &, class AABB &, bool) const;
    /**
     * @vftbl  146
     * @symbol ?getVariant@DoublePlantBlock@@UEBAHAEBVBlock@@@Z
     * @hash   145246595
     */
    virtual int getVariant(class Block const &) const;
    /**
     * @vftbl  156
     * @hash   1576709922
     */
    virtual void __unk_vfn_156();
    /**
     * @vftbl  166
     * @hash   1547586817
     */
    virtual void __unk_vfn_166();
    /**
     * @vftbl  167
     * @hash   1548510338
     */
    virtual void __unk_vfn_167();
    /**
     * @vftbl  168
     * @hash   1549433859
     */
    virtual void __unk_vfn_168();
    /**
     * @vftbl  169
     * @symbol ?onPlace@DoublePlantBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1775734241
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  171
     * @symbol ?playerDestroy@DoublePlantBlock@@UEBAXAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   -2102019417
     */
    virtual void playerDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  172
     * @hash   1630274140
     */
    virtual void __unk_vfn_172();
    /**
     * @vftbl  173
     * @symbol ?tick@DoublePlantBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   -2094088135
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  176
     * @hash   1633968224
     */
    virtual void __unk_vfn_176();
    /**
     * @vftbl  179
     * @symbol ?canSurvive@DoublePlantBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   713757341
     */
    virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  180
     * @symbol ?getRenderLayer@DoublePlantBlock@@UEBA?AW4BlockRenderLayer@@XZ
     * @hash   -1432916268
     */
    virtual enum class BlockRenderLayer getRenderLayer() const;
    /**
     * @vftbl  181
     * @symbol ?getRenderLayer@DoublePlantBlock@@UEBA?AW4BlockRenderLayer@@AEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1570885156
     */
    virtual enum class BlockRenderLayer getRenderLayer(class Block const &, class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  186
     * @hash   1662597375
     */
    virtual void __unk_vfn_186();
    /**
     * @vftbl  187
     * @symbol ?getResourceCount@DoublePlantBlock@@UEBAHAEAVRandomize@@AEBVBlock@@H@Z
     * @hash   -13376487
     */
    virtual int getResourceCount(class Randomize &, class Block const &, int) const;
    /**
     * @vftbl  188
     * @symbol ?getResourceItem@DoublePlantBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
     * @hash   1830496673
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /**
     * @vftbl  192
     * @symbol ?checkAlive@DoublePlantBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -2070570194
     */
    virtual void checkAlive(class BlockSource &, class BlockPos const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DOUBLEPLANTBLOCK
    /**
     * @symbol ?canBeSilkTouched@DoublePlantBlock@@MEBA_NXZ
     * @hash   880953620
     */
    MCVAPI bool canBeSilkTouched() const;
#endif
    /**
     * @symbol ??0DoublePlantBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   1311786513
     */
    MCAPI DoublePlantBlock(std::string const &, int);
    /**
     * @symbol ?getType@DoublePlantBlock@@QEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   1465582045
     */
    MCAPI int getType(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @symbol ?placeAt@DoublePlantBlock@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@W4DoublePlantType@@HPEAVActor@@@Z
     * @hash   2049374528
     */
    MCAPI bool placeAt(class BlockSource &, class BlockPos const &, enum class DoublePlantType, int, class Actor *) const;

};