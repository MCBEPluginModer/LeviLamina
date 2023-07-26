#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"

class SkullBlockActor : public ::BlockActor {
public:
    // SkullBlockActor inner types declare
    // clang-format off

    // clang-format on

    // SkullBlockActor inner types define
    enum class SkullType {};

public:
    // prevent constructor by default
    SkullBlockActor& operator=(SkullBlockActor const&) = delete;
    SkullBlockActor(SkullBlockActor const&)            = delete;
    SkullBlockActor()                                  = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?load\@SkullBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?save\@SkullBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol ?tick\@SkullBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void tick(class BlockSource&); // NOLINT
    /**
     * @vftbl 8
     * @symbol ?onChanged\@SkullBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onChanged(class BlockSource&); // NOLINT
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12(); // NOLINT
    /**
     * @vftbl 18
     * @symbol __unk_vfn_18
     */
    virtual void __unk_vfn_18(); // NOLINT
    /**
     * @vftbl 30
     * @symbol __unk_vfn_30
     */
    virtual void __unk_vfn_30(); // NOLINT
    /**
     * @vftbl 31
     * @symbol __unk_vfn_31
     */
    virtual void __unk_vfn_31(); // NOLINT
    /**
     * @vftbl 32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32(); // NOLINT
    /**
     * @vftbl 33
     * @symbol __unk_vfn_33
     */
    virtual void __unk_vfn_33(); // NOLINT
    /**
     * @vftbl 34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34(); // NOLINT
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35(); // NOLINT
    /**
     * @vftbl 36
     * @symbol __unk_vfn_36
     */
    virtual void __unk_vfn_36(); // NOLINT
    /**
     * @vftbl 39
     * @symbol __unk_vfn_39
     */
    virtual void __unk_vfn_39(); // NOLINT
    /**
     * @vftbl 40
     * @symbol
     * ?_getUpdatePacket\@SkullBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&); // NOLINT
    /**
     * @vftbl 41
     * @symbol ?_onUpdatePacket\@SkullBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const&, class BlockSource&); // NOLINT
    /**
     * @symbol ??0SkullBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI SkullBlockActor(class BlockPos const&); // NOLINT
    /**
     * @symbol ?getSkullType\@SkullBlockActor\@\@QEBA?AW4SkullType\@1\@XZ
     */
    MCAPI enum class SkullBlockActor::SkullType getSkullType() const; // NOLINT
    /**
     * @symbol ?setRotation\@SkullBlockActor\@\@QEAAXM\@Z
     */
    MCAPI void setRotation(float); // NOLINT
    /**
     * @symbol ?setSkullType\@SkullBlockActor\@\@QEAAXH\@Z
     */
    MCAPI void setSkullType(int); // NOLINT
    /**
     * @symbol
     * ?getSkullType\@SkullBlockActor\@\@SA?AV?$optional\@W4SkullType\@SkullBlockActor\@\@\@std\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static class std::optional<enum class SkullBlockActor::SkullType>
    getSkullType(class BlockSource&, class BlockPos const&); // NOLINT
};
