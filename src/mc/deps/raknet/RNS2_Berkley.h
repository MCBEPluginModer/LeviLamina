#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { enum class RNS2BindResult; }
namespace RakNet { struct RNS2_BerkleyBindParameters; }
namespace RakNet { struct RNS2_SendParameters; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class RNS2_Berkley {

public:
    // prevent constructor by default
    RNS2_Berkley& operator=(RNS2_Berkley const&) = delete;
    RNS2_Berkley(RNS2_Berkley const&)            = delete;
    RNS2_Berkley()                               = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?Send\@RNS2_Windows\@RakNet\@\@UEAAHPEAURNS2_SendParameters\@2\@PEBDI\@Z
     */
    virtual int Send(struct RakNet::RNS2_SendParameters*, char const*, unsigned int) = 0; // NOLINT
    /**
     * @vftbl 2
     * @symbol ?SetMulticastInterface\@RNS2_Berkley\@RakNet\@\@UEAAXH\@Z
     */
    virtual void SetMulticastInterface(int); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?Bind\@RNS2_Windows\@RakNet\@\@UEAA?AW4RNS2BindResult\@2\@PEAURNS2_BerkleyBindParameters\@2\@PEBDI\@Z
     */
    virtual enum class RakNet::RNS2BindResult
    Bind(struct RakNet::RNS2_BerkleyBindParameters*, char const*, unsigned int) = 0; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RAKNET_RNS2_BERKLEY
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~RNS2_Berkley(); // NOLINT
#endif

    // protected:
    /**
     * @symbol
     * ?BindShared\@RNS2_Berkley\@RakNet\@\@IEAA?AW4RNS2BindResult\@2\@PEAURNS2_BerkleyBindParameters\@2\@PEBDI\@Z
     */
    MCAPI enum class RakNet::RNS2BindResult
    BindShared(struct RakNet::RNS2_BerkleyBindParameters*, char const*, unsigned int); // NOLINT
    /**
     * @symbol
     * ?BindSharedIPV4And6\@RNS2_Berkley\@RakNet\@\@IEAA?AW4RNS2BindResult\@2\@PEAURNS2_BerkleyBindParameters\@2\@PEBDI\@Z
     */
    MCAPI enum class RakNet::RNS2BindResult
    BindSharedIPV4And6(struct RakNet::RNS2_BerkleyBindParameters*, char const*, unsigned int); // NOLINT
    /**
     * @symbol ?RecvFromLoopInt\@RNS2_Berkley\@RakNet\@\@IEAAIXZ
     */
    MCAPI unsigned int RecvFromLoopInt(); // NOLINT
    /**
     * @symbol ?SetBroadcastSocket\@RNS2_Berkley\@RakNet\@\@IEAAXH\@Z
     */
    MCAPI void SetBroadcastSocket(int); // NOLINT
    /**
     * @symbol ?SetSocketOptions\@RNS2_Berkley\@RakNet\@\@IEAAXXZ
     */
    MCAPI void SetSocketOptions(); // NOLINT
    /**
     * @symbol ?GetSystemAddressIPV4And6\@RNS2_Berkley\@RakNet\@\@KAXHPEAUSystemAddress\@2\@\@Z
     */
    MCAPI static void GetSystemAddressIPV4And6(int, struct RakNet::SystemAddress*); // NOLINT
    /**
     * @symbol ?RecvFromLoop\@RNS2_Berkley\@RakNet\@\@KAIPEAX\@Z
     */
    MCAPI static unsigned int RecvFromLoop(void*); // NOLINT

protected:
};

}; // namespace RakNet
