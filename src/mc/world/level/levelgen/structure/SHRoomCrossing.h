#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructurePiece.h"

class SHRoomCrossing : public ::StructurePiece {

public:
    // prevent constructor by default
    SHRoomCrossing& operator=(SHRoomCrossing const&) = delete;
    SHRoomCrossing(SHRoomCrossing const&)            = delete;
    SHRoomCrossing()                                 = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?getType\@SHRoomCrossing\@\@UEBA?AW4StructurePieceType\@\@XZ
     */
    virtual enum class StructurePieceType getType() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol
     * ?addChildren\@SHRoomCrossing\@\@UEAAXAEAVStructurePiece\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEAVRandom\@\@\@Z
     */
    virtual void
    addChildren(class StructurePiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?postProcess\@SHRoomCrossing\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&); // NOLINT
    /**
     * @symbol
     * ?createPiece\@SHRoomCrossing\@\@SA?AV?$unique_ptr\@VStrongholdPiece\@\@U?$default_delete\@VStrongholdPiece\@\@\@std\@\@\@std\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@3\@AEAVRandom\@\@HHHHH\@Z
     */
    MCAPI static std::unique_ptr<class StrongholdPiece>
    createPiece(std::vector<std::unique_ptr<class StructurePiece>>&, class Random&, int, int, int, int, int); // NOLINT
};
