#pragma once

#include "mc/_HeaderOutputPredefine.h"

class JigsawBlockInfo {
public:
    // prevent constructor by default
    JigsawBlockInfo& operator=(JigsawBlockInfo const&);
    JigsawBlockInfo(JigsawBlockInfo const&);
    JigsawBlockInfo();

public:
    // NOLINTBEGIN
    // symbol: ??0JigsawBlockInfo@@QEAA@AEBVBlockPos@@PEBVBlock@@1VJigsawEditorData@@@Z
    MCAPI JigsawBlockInfo(
        class BlockPos const& pos,
        class Block const*    block,
        class Block const*    finalBlock,
        class JigsawEditorData
    );

    // symbol: ??4JigsawBlockInfo@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class JigsawBlockInfo& operator=(class JigsawBlockInfo&&);

    // NOLINTEND
};
