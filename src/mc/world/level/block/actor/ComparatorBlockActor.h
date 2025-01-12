#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"

class ComparatorBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    ComparatorBlockActor& operator=(ComparatorBlockActor const&);
    ComparatorBlockActor(ComparatorBlockActor const&);
    ComparatorBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ComparatorBlockActor@@UEAA@XZ
    virtual ~ComparatorBlockActor() = default;

    // vIndex: 1, symbol: ?load@ComparatorBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2, symbol: ?save@ComparatorBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 7, symbol: ?tick@ComparatorBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void tick(class BlockSource& region);

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 18, symbol: __unk_vfn_18
    virtual void __unk_vfn_18();

    // vIndex: 30, symbol: __unk_vfn_30
    virtual void __unk_vfn_30();

    // vIndex: 31, symbol: __unk_vfn_31
    virtual void __unk_vfn_31();

    // vIndex: 32, symbol: __unk_vfn_32
    virtual void __unk_vfn_32();

    // vIndex: 33, symbol: __unk_vfn_33
    virtual void __unk_vfn_33();

    // vIndex: 34, symbol: __unk_vfn_34
    virtual void __unk_vfn_34();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 36, symbol: __unk_vfn_36
    virtual void __unk_vfn_36();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 43, symbol: ?getOutputSignal@ComparatorBlockActor@@UEAAHXZ
    virtual int getOutputSignal();

    // vIndex: 44, symbol: ?setOutputSignal@ComparatorBlockActor@@UEAAXH@Z
    virtual void setOutputSignal(int value);

    // symbol: ??0ComparatorBlockActor@@QEAA@AEBVBlockPos@@@Z
    MCAPI explicit ComparatorBlockActor(class BlockPos const& pos);

    // NOLINTEND
};
