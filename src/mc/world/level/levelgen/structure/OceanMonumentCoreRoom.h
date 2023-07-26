#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/OceanMonumentPiece.h"

class OceanMonumentCoreRoom : public ::OceanMonumentPiece {

public:
    // prevent constructor by default
    OceanMonumentCoreRoom& operator=(OceanMonumentCoreRoom const&) = delete;
    OceanMonumentCoreRoom(OceanMonumentCoreRoom const&)            = delete;
    OceanMonumentCoreRoom()                                        = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?getType\@OceanMonumentCoreRoom\@\@UEBA?AW4StructurePieceType\@\@XZ
     */
    virtual enum class StructurePieceType getType() const; // NOLINT
    /**
     * @vftbl 4
     * @symbol ?postProcess\@OceanMonumentCoreRoom\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&); // NOLINT
};
