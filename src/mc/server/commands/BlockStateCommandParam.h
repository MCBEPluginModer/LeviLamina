#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockStateCommandParam {

public:
    // prevent constructor by default
    BlockStateCommandParam& operator=(BlockStateCommandParam const&) = delete;
    BlockStateCommandParam(BlockStateCommandParam const&)            = delete;
    BlockStateCommandParam()                                         = delete;

public:
    /**
     * @symbol
     * ?getNameAndValue\@BlockStateCommandParam\@\@QEBA?AV?$optional\@U?$pair\@VHashedString\@\@H\@std\@\@\@std\@\@AEAVCommandOutput\@\@AEBVBlock\@\@\@Z
     */
    MCAPI class std::optional<struct std::pair<class HashedString, int>>
    getNameAndValue(class CommandOutput&, class Block const&) const; // NOLINT
    /**
     * @symbol ?setBlockState\@BlockStateCommandParam\@\@QEBA_NPEAPEBVBlock\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI bool setBlockState(class Block const**, class CommandOutput&) const; // NOLINT
    /**
     * @symbol ??1BlockStateCommandParam\@\@QEAA\@XZ
     */
    MCAPI ~BlockStateCommandParam(); // NOLINT

    // private:
    /**
     * @symbol ?_createCompoundTag\@BlockStateCommandParam\@\@AEBA_NAEAVCompoundTag\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI bool _createCompoundTag(class CompoundTag&, class CommandOutput&) const; // NOLINT
    /**
     * @symbol ?_getBlockState\@BlockStateCommandParam\@\@AEBAPEBVBlockState\@\@AEBVBlock\@\@\@Z
     */
    MCAPI class BlockState const* _getBlockState(class Block const&) const; // NOLINT

private:
};
