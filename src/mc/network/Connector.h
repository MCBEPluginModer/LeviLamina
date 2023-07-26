#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct SystemAddress; }
namespace Social { class GameConnectionInfo; }
// clang-format on

class Connector {
public:
    // Connector inner types declare
    // clang-format off
    struct ConnectionCallbacks;
    class ConnectionStateListener;
    struct NatPunchInfo;
    // clang-format on

    // Connector inner types define
    struct ConnectionCallbacks {

    public:
        // prevent constructor by default
        ConnectionCallbacks& operator=(ConnectionCallbacks const&) = delete;
        ConnectionCallbacks(ConnectionCallbacks const&)            = delete;
        ConnectionCallbacks()                                      = delete;
    };

    class ConnectionStateListener {

    public:
        // prevent constructor by default
        ConnectionStateListener& operator=(ConnectionStateListener const&) = delete;
        ConnectionStateListener(ConnectionStateListener const&)            = delete;
        ConnectionStateListener()                                          = delete;
    };

    struct NatPunchInfo {

    public:
        // prevent constructor by default
        NatPunchInfo& operator=(NatPunchInfo const&) = delete;
        NatPunchInfo(NatPunchInfo const&)            = delete;
        NatPunchInfo()                               = delete;
    };

public:
    // prevent constructor by default
    Connector& operator=(Connector const&) = delete;
    Connector(Connector const&)            = delete;
    Connector()                            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?getLocalIp\@Connector\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getLocalIp(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?getConnectedGameInfo\@Connector\@\@UEBAAEBVGameConnectionInfo\@Social\@\@XZ
     */
    virtual class Social::GameConnectionInfo const& getConnectedGameInfo() const; // NOLINT
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6(); // NOLINT
    /**
     * @vftbl 7
     * @symbol ?getNatPunchInfo\@Connector\@\@UEBA?AUNatPunchInfo\@1\@XZ
     */
    virtual struct Connector::NatPunchInfo getNatPunchInfo() const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONNECTOR
    /**
     * @symbol ?addConnectionStateListener\@Connector\@\@UEAAXPEAVConnectionStateListener\@1\@\@Z
     */
    MCVAPI void addConnectionStateListener(class Connector::ConnectionStateListener*); // NOLINT
    /**
     * @symbol ?getIPv4Port\@Connector\@\@UEBAGXZ
     */
    MCVAPI unsigned short getIPv4Port() const; // NOLINT
    /**
     * @symbol ?getIPv6Port\@Connector\@\@UEBAGXZ
     */
    MCVAPI unsigned short getIPv6Port() const; // NOLINT
    /**
     * @symbol
     * ?getLocalIps\@Connector\@\@UEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCVAPI std::vector<std::string> getLocalIps() const; // NOLINT
    /**
     * @symbol ?getPort\@Connector\@\@UEBAGXZ
     */
    MCVAPI unsigned short getPort() const; // NOLINT
    /**
     * @symbol
     * ?getRefinedLocalIps\@Connector\@\@UEBA?AV?$vector\@USystemAddress\@RakNet\@\@V?$allocator\@USystemAddress\@RakNet\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::vector<struct RakNet::SystemAddress> getRefinedLocalIps() const; // NOLINT
    /**
     * @symbol ?isIPv4Supported\@Connector\@\@UEBA_NXZ
     */
    MCVAPI bool isIPv4Supported() const; // NOLINT
    /**
     * @symbol ?isIPv6Supported\@Connector\@\@UEBA_NXZ
     */
    MCVAPI bool isIPv6Supported() const; // NOLINT
    /**
     * @symbol ?removeConnectionStateListener\@Connector\@\@UEAAXPEAVConnectionStateListener\@1\@\@Z
     */
    MCVAPI void removeConnectionStateListener(class Connector::ConnectionStateListener*); // NOLINT
    /**
     * @symbol ?setupNatPunch\@Connector\@\@UEAAX_N\@Z
     */
    MCVAPI void setupNatPunch(bool); // NOLINT
    /**
     * @symbol
     * ?startNatPunchingClient\@Connector\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@G\@Z
     */
    MCVAPI void startNatPunchingClient(std::string const&, unsigned short); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Connector(); // NOLINT
#endif
    /**
     * @symbol ??0Connector\@\@QEAA\@AEAUConnectionCallbacks\@0\@\@Z
     */
    MCAPI Connector(struct Connector::ConnectionCallbacks&); // NOLINT
};
