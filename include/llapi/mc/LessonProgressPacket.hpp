/**
 * @file  LessonProgressPacket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class LessonProgressPacket.
 *
 */
class LessonProgressPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LESSONPROGRESSPACKET
public:
    class LessonProgressPacket& operator=(class LessonProgressPacket const &) = delete;
    LessonProgressPacket(class LessonProgressPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   2046713399
     */
    virtual ~LessonProgressPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@LessonProgressPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   -422805439
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@LessonProgressPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1331703534
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@LessonProgressPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   1508180313
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@LessonProgressPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   48440105
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0LessonProgressPacket@@QEAA@XZ
     * @hash   -1980361815
     */
    MCAPI LessonProgressPacket();
    /**
     * @symbol ??0LessonProgressPacket@@QEAA@W4LessonAction@@HAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1886156406
     */
    MCAPI LessonProgressPacket(enum class LessonAction, int, std::string const &);

};