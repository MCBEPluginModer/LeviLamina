/**
 * @file  OceanMonumentSimpleRoom.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "OceanMonumentPiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OceanMonumentSimpleRoom.
 *
 */
class OceanMonumentSimpleRoom : public OceanMonumentPiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCEANMONUMENTSIMPLEROOM
public:
    class OceanMonumentSimpleRoom& operator=(class OceanMonumentSimpleRoom const &) = delete;
    OceanMonumentSimpleRoom(class OceanMonumentSimpleRoom const &) = delete;
    OceanMonumentSimpleRoom() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1440831552
     */
    virtual ~OceanMonumentSimpleRoom();
    /**
     * @vftbl  2
     * @symbol ?getType@OceanMonumentSimpleRoom@@UEBA?AW4StructurePieceType@@XZ
     * @hash   1773869561
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @vftbl  4
     * @symbol ?postProcess@OceanMonumentSimpleRoom@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     * @hash   -1694184289
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);

};