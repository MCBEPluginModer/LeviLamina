#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class NetherSpringFeature : public ::Feature {

public:
    // prevent constructor by default
    NetherSpringFeature& operator=(NetherSpringFeature const&) = delete;
    NetherSpringFeature(NetherSpringFeature const&)            = delete;
    NetherSpringFeature()                                      = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?place\@NetherSpringFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NETHERSPRINGFEATURE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NetherSpringFeature(); // NOLINT
#endif
    /**
     * @symbol ??0NetherSpringFeature\@\@QEAA\@AEBVBlock\@\@_N\@Z
     */
    MCAPI NetherSpringFeature(class Block const&, bool); // NOLINT
};
