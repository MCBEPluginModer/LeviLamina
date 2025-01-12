#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AdjustmentEffect.h"
#include "mc/world/level/biome/VanillaBiomeTypes.h"
#include "mc/world/level/levelgen/structure/PoolElementStructurePiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class BastionPiece : public ::PoolElementStructurePiece {
public:
    // prevent constructor by default
    BastionPiece& operator=(BastionPiece const&);
    BastionPiece(BastionPiece const&);
    BastionPiece();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BastionPiece@@UEAA@XZ
    virtual ~BastionPiece() = default;

    // vIndex: 13, symbol:
    // ?generateHeightAtPosition@BastionPiece@@UEBAHAEBVBlockPos@@AEAVDimension@@AEAVBlockVolume@@AEAV?$unordered_map@VChunkPos@@V?$unique_ptr@V?$vector@FV?$allocator@F@std@@@std@@U?$default_delete@V?$vector@FV?$allocator@F@std@@@std@@@2@@std@@U?$hash@VChunkPos@@@3@U?$equal_to@VChunkPos@@@3@V?$allocator@U?$pair@$$CBVChunkPos@@V?$unique_ptr@V?$vector@FV?$allocator@F@std@@@std@@U?$default_delete@V?$vector@FV?$allocator@F@std@@@std@@@2@@std@@@std@@@3@@std@@@Z
    virtual int generateHeightAtPosition(
        class BlockPos const&                                                    pos,
        class Dimension&                                                         dim,
        class BlockVolume&                                                       box,
        std::unordered_map<class ChunkPos, std::unique_ptr<std::vector<short>>>& chunkHeightCache
    ) const;

    // vIndex: 14, symbol: ?getSupportBlock@BastionPiece@@UEBAPEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@AEBV2@@Z
    virtual class Block const*
    getSupportBlock(class BlockSource& region, class BlockPos const& pos, class Block const&) const;

    // vIndex: 15, symbol: ?getBeardStabilizeBlock@BastionPiece@@UEBAAEBVBlock@@AEBV2@@Z
    virtual class Block const& getBeardStabilizeBlock(class Block const&) const;

    // vIndex: 16, symbol: ?getTerrainAdjustmentEffect@BastionPiece@@UEBA?AW4AdjustmentEffect@@XZ
    virtual ::AdjustmentEffect getTerrainAdjustmentEffect() const;

    // symbol:
    // ?addPieces@BastionPiece@@SAXVBlockPos@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@AEAVJigsawStructureRegistry@@W4VanillaBiomeTypes@@AEAVDimension@@@Z
    MCAPI static void addPieces(
        class BlockPos                                      position,
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class Random&                                       random,
        class JigsawStructureRegistry&                      pools,
        ::VanillaBiomeTypes                                 biomeType,
        class Dimension&                                    dimension
    );

    // NOLINTEND
};
