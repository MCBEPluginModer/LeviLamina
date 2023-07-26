#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/List.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class BitStream; }
// clang-format on

namespace RakNet {

class RakString {
public:
    // RakString inner types declare
    // clang-format off
    struct SharedString;
    // clang-format on

    // RakString inner types define
    struct SharedString {

    public:
        // prevent constructor by default
        SharedString& operator=(SharedString const&) = delete;
        SharedString(SharedString const&)            = delete;
        SharedString()                               = delete;
    };

public:
    // prevent constructor by default
    RakString& operator=(RakString const&) = delete;

public:
    /**
     * @symbol ?Deserialize\@RakString\@RakNet\@\@QEAA_NPEAVBitStream\@2\@\@Z
     */
    MCAPI bool Deserialize(class RakNet::BitStream*); // NOLINT
    /**
     * @symbol ?GetLength\@RakString\@RakNet\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 GetLength() const; // NOLINT
    /**
     * @symbol ?IsEmpty\@RakString\@RakNet\@\@QEBA_NXZ
     */
    MCAPI bool IsEmpty() const; // NOLINT
    /**
     * @symbol ??0RakString\@RakNet\@\@QEAA\@AEBV01\@\@Z
     */
    MCAPI RakString(class RakNet::RakString const&); // NOLINT
    /**
     * @symbol ??0RakString\@RakNet\@\@QEAA\@PEBDZZ
     */
    MCAPI RakString(char const*, ...); // NOLINT
    /**
     * @symbol ??0RakString\@RakNet\@\@QEAA\@XZ
     */
    MCAPI RakString(); // NOLINT
    /**
     * @symbol ??4RakString\@RakNet\@\@QEAAAEAV01\@PEBD\@Z
     */
    MCAPI class RakNet::RakString& operator=(char const*); // NOLINT
    /**
     * @symbol ??4RakString\@RakNet\@\@QEAAAEAV01\@PEAD\@Z
     */
    MCAPI class RakNet::RakString& operator=(char*); // NOLINT
    /**
     * @symbol ??8RakString\@RakNet\@\@QEBA_NAEBV01\@\@Z
     */
    MCAPI bool operator==(class RakNet::RakString const&) const; // NOLINT
    /**
     * @symbol ??1RakString\@RakNet\@\@QEAA\@XZ
     */
    MCAPI ~RakString(); // NOLINT
    /**
     * @symbol ?FreeMemoryNoMutex\@RakString\@RakNet\@\@SAXXZ
     */
    MCAPI static void FreeMemoryNoMutex(); // NOLINT
    /**
     * @symbol ?emptyString\@RakString\@RakNet\@\@2USharedString\@12\@A
     */
    MCAPI static struct RakNet::RakString::SharedString emptyString; // NOLINT
    /**
     * @symbol ?freeList\@RakString\@RakNet\@\@2V?$List\@PEAUSharedString\@RakString\@RakNet\@\@\@DataStructures\@\@A
     */
    MCAPI static class DataStructures::List<struct RakNet::RakString::SharedString*> freeList; // NOLINT

    // protected:
    /**
     * @symbol ?Allocate\@RakString\@RakNet\@\@IEAAX_K\@Z
     */
    MCAPI void Allocate(unsigned __int64); // NOLINT
    /**
     * @symbol ?Assign\@RakString\@RakNet\@\@IEAAXPEBDPEAD\@Z
     */
    MCAPI void Assign(char const*, char*); // NOLINT
    /**
     * @symbol ?Assign\@RakString\@RakNet\@\@IEAAXPEBD\@Z
     */
    MCAPI void Assign(char const*); // NOLINT
    /**
     * @symbol ?Free\@RakString\@RakNet\@\@IEAAXXZ
     */
    MCAPI void Free(); // NOLINT

protected:
};

}; // namespace RakNet
