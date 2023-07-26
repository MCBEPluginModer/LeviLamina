#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VegetationPatchFeature {

public:
    // prevent constructor by default
    VegetationPatchFeature& operator=(VegetationPatchFeature const&) = delete;
    VegetationPatchFeature(VegetationPatchFeature const&)            = delete;
    VegetationPatchFeature()                                         = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?place\@VegetationPatchFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual class std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const; // NOLINT

    // private:
    /**
     * @symbol ?_isExposedDirection\@VegetationPatchFeature\@\@AEBA_NAEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@E\@Z
     */
    MCAPI bool _isExposedDirection(class IBlockWorldGenAPI&, class BlockPos const&, unsigned char) const; // NOLINT
    /**
     * @symbol
     * ?_placeGroundPatch\@VegetationPatchFeature\@\@AEBA?AV?$vector\@VBlockPos\@\@V?$allocator\@VBlockPos\@\@\@std\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEAVRandom\@\@AEBVBlockPos\@\@HH\@Z
     */
    MCAPI std::vector<class BlockPos>
          _placeGroundPatch(class IBlockWorldGenAPI&, class Random&, class BlockPos const&, int, int) const; // NOLINT

private:
};
