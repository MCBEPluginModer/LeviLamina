#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PartiallyExposedBlobFeature {

public:
    // prevent constructor by default
    PartiallyExposedBlobFeature& operator=(PartiallyExposedBlobFeature const&) = delete;
    PartiallyExposedBlobFeature(PartiallyExposedBlobFeature const&)            = delete;
    PartiallyExposedBlobFeature()                                              = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?place\@PartiallyExposedBlobFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual class std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const; // NOLINT

    // private:
    /**
     * @symbol ?isWaterOrAir\@PartiallyExposedBlobFeature\@\@CA_NAEBVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static bool isWaterOrAir(class IBlockWorldGenAPI const&, class BlockPos const&); // NOLINT

private:
};
