#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/LevelEvent.h"
#include "mc/world/level/LevelListener.h"

class Weather : public ::LevelListener {
public:
    // prevent constructor by default
    Weather& operator=(Weather const&);
    Weather(Weather const&);
    Weather();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1Weather@@UEAA@XZ
    virtual ~Weather() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 6, symbol: __unk_vfn_6
    virtual void __unk_vfn_6();

    // vIndex: 7, symbol: __unk_vfn_7
    virtual void __unk_vfn_7();

    // vIndex: 8, symbol: __unk_vfn_8
    virtual void __unk_vfn_8();

    // vIndex: 9, symbol: __unk_vfn_9
    virtual void __unk_vfn_9();

    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 13, symbol: __unk_vfn_13
    virtual void __unk_vfn_13();

    // vIndex: 14, symbol: __unk_vfn_14
    virtual void __unk_vfn_14();

    // vIndex: 15, symbol: __unk_vfn_15
    virtual void __unk_vfn_15();

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 17, symbol: __unk_vfn_17
    virtual void __unk_vfn_17();

    // vIndex: 18, symbol: __unk_vfn_18
    virtual void __unk_vfn_18();

    // vIndex: 20, symbol: __unk_vfn_20
    virtual void __unk_vfn_20();

    // vIndex: 21, symbol: __unk_vfn_21
    virtual void __unk_vfn_21();

    // vIndex: 24, symbol: __unk_vfn_24
    virtual void __unk_vfn_24();

    // vIndex: 25, symbol: ?levelEvent@Weather@@UEAAXW4LevelEvent@@AEBVVec3@@H@Z
    virtual void levelEvent(::LevelEvent type, class Vec3 const& pos, int data);

    // symbol: ??0Weather@@QEAA@AEAVDimension@@AEAVIRandom@@@Z
    MCAPI Weather(class Dimension& d, class IRandom& random);

    // symbol: ?calcSnowBlockDepth@Weather@@QEBAHAEAVBlockSource@@AEBVBlockPos@@H@Z
    MCAPI int calcSnowBlockDepth(class BlockSource& region, class BlockPos const& pos, int maxLayerDepth) const;

    // symbol: ?canPlaceTopSnow@Weather@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@_N2PEAH@Z
    MCAPI bool canPlaceTopSnow(
        class BlockSource&    region,
        class BlockPos const& pos,
        bool                  fromFallingSnow,
        bool                  checkSnowDepthLevel,
        int*                  newHeightAfterPlacement
    ) const;

    // symbol: ?getFogLevel@Weather@@QEBAMXZ
    MCAPI float getFogLevel() const;

    // symbol: ?getLightningLevel@Weather@@QEBAMM@Z
    MCAPI float getLightningLevel(float a) const;

    // symbol: ?getRainLevel@Weather@@QEBAMM@Z
    MCAPI float getRainLevel(float a) const;

    // symbol: ?isLightning@Weather@@QEBA_NXZ
    MCAPI bool isLightning() const;

    // symbol: ?isPrecipitatingAt@Weather@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool isPrecipitatingAt(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?isRaining@Weather@@QEBA_NXZ
    MCAPI bool isRaining() const;

    // symbol: ?isRainingAt@Weather@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool isRainingAt(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?isSnowingAt@Weather@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool isSnowingAt(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?serverTick@Weather@@QEAAXXZ
    MCAPI void serverTick();

    // symbol: ?setSkyFlashTime@Weather@@QEAAXH@Z
    MCAPI void setSkyFlashTime(int flash);

    // symbol: ?setTargetLightningLevel@Weather@@QEAAXM@Z
    MCAPI void setTargetLightningLevel(float lightningLevel);

    // symbol: ?setTargetRainLevel@Weather@@QEAAXM@Z
    MCAPI void setTargetRainLevel(float rainLevel);

    // symbol: ?stop@Weather@@QEAAXXZ
    MCAPI void stop();

    // symbol: ?tick@Weather@@QEAAXXZ
    MCAPI void tick();

    // symbol: ?tryToPlaceTopSnow@Weather@@QEAA_NAEAVBlockSource@@AEBVBlockPos@@_N2@Z
    MCAPI bool tryToPlaceTopSnow(
        class BlockSource&    region,
        class BlockPos const& pos,
        bool                  fromFallingSnow,
        bool                  fillLowerNeighborsFirst
    );

    // symbol: ?calcLightningCycleTime@Weather@@SAHAEAVIRandom@@@Z
    MCAPI static int calcLightningCycleTime(class IRandom& random);

    // symbol: ?calcRainCycleTime@Weather@@SAHAEAVIRandom@@@Z
    MCAPI static int calcRainCycleTime(class IRandom& random);

    // symbol: ?calcRainDuration@Weather@@SAHAEAVIRandom@@@Z
    MCAPI static int calcRainDuration(class IRandom& random);

    // symbol: ?rebuildTopSnowToDepth@Weather@@SAXAEAVBlockSource@@AEBVBlockPos@@H@Z
    MCAPI static void rebuildTopSnowToDepth(class BlockSource& region, class BlockPos const& testPos, int desiredDepth);

    // NOLINTEND
};
