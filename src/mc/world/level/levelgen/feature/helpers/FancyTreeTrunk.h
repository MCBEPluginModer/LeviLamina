#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace TreeHelper { struct TreeParams; }
// clang-format on

class FancyTreeTrunk {

public:
    // prevent constructor by default
    FancyTreeTrunk& operator=(FancyTreeTrunk const&) = delete;
    FancyTreeTrunk(FancyTreeTrunk const&)            = delete;
    FancyTreeTrunk()                                 = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?placeTrunk\@FancyTreeTrunk\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@HAEAVRenderParams\@\@AEBUTreeParams\@TreeHelper\@\@PEBVITreeCanopy\@\@\@Z
     */
    virtual class std::optional<class BlockPos>
    placeTrunk(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, int, class RenderParams&, struct TreeHelper::TreeParams const&, class ITreeCanopy const*)
        const; // NOLINT
    /**
     * @vftbl 2
     * @symbol ?getTreeHeight\@FancyTreeTrunk\@\@UEBAHAEAVRandom\@\@\@Z
     */
    virtual int getTreeHeight(class Random&) const; // NOLINT

    // private:
    /**
     * @symbol
     * ?_checkLine\@FancyTreeTrunk\@\@AEBAHAEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@1AEBUTreeParams\@TreeHelper\@\@\@Z
     */
    MCAPI int
    _checkLine(class IBlockWorldGenAPI&, class BlockPos const&, class BlockPos const&, struct TreeHelper::TreeParams const&)
        const; // NOLINT
    /**
     * @symbol ?_placeLimb\@FancyTreeTrunk\@\@AEBAXAEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@1\@Z
     */
    MCAPI void _placeLimb(class IBlockWorldGenAPI&, class BlockPos const&, class BlockPos const&) const; // NOLINT

private:
};
