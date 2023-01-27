/**
 * @file  PlayerFogPacket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PlayerFogPacket.
 *
 */
class PlayerFogPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERFOGPACKET
public:
    class PlayerFogPacket& operator=(class PlayerFogPacket const &) = delete;
    PlayerFogPacket(class PlayerFogPacket const &) = delete;
    PlayerFogPacket() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -80238893
     */
    virtual ~PlayerFogPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@PlayerFogPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   -1667799623
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@PlayerFogPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1947779174
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@PlayerFogPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   1285014529
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@PlayerFogPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   1168465281
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0PlayerFogPacket@@QEAA@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
     * @hash   1481678723
     */
    MCAPI PlayerFogPacket(std::vector<std::string>);

};