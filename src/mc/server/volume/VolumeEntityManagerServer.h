#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtrT.h"
#include "mc/common/wrapper/StackRefResultT.h"
#include "mc/common/wrapper/WeakRefT.h"
#include "mc/volume/VolumeEntityManager.h"
#include "mc/world/AutomaticID.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class VolumeEntityManagerServer : public ::VolumeEntityManager {
public:
    // VolumeEntityManagerServer inner types define
    enum class CreateVolumeResult {};

public:
    // prevent constructor by default
    VolumeEntityManagerServer& operator=(VolumeEntityManagerServer const&);
    VolumeEntityManagerServer(VolumeEntityManagerServer const&);
    VolumeEntityManagerServer();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1VolumeEntityManagerServer@@UEAA@XZ
    virtual ~VolumeEntityManagerServer() = default;

    // symbol:
    // ??0VolumeEntityManagerServer@@QEAA@V?$StackRefResultT@UEntityRegistryRefTraits@@@@AEAUReflectionCtx@cereal@@@Z
    MCAPI
    VolumeEntityManagerServer(class StackRefResultT<struct EntityRegistryRefTraits>, struct cereal::ReflectionCtx&);

    // symbol:
    // ?createVolume@VolumeEntityManagerServer@@QEAA?AU?$pair@W4CreateVolumeResult@VolumeEntityManagerServer@@V?$StackRefResultT@UEntityRefTraits@@@@@std@@AEAVLevelStorage@@AEAVPacketSender@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEBVBlockPos@@3V?$AutomaticID@VDimension@@H@@2@Z
    MCAPI std::pair<::VolumeEntityManagerServer::CreateVolumeResult, class StackRefResultT<struct EntityRefTraits>>
    createVolume(class LevelStorage& levelStorage, class PacketSender& packetSender, std::string const&, class BlockPos const&, class BlockPos const&, DimensionType dimensionType, std::string const&);

    // symbol:
    // ?getAllVolumesOverlappingChunkPosition@VolumeEntityManagerServer@@QEBA?AV?$vector@V?$WeakRefT@UEntityRefTraits@@@@V?$allocator@V?$WeakRefT@UEntityRefTraits@@@@@std@@@std@@AEBVChunkPos@@V?$AutomaticID@VDimension@@H@@@Z
    MCAPI std::vector<class WeakRefT<struct EntityRefTraits>>
          getAllVolumesOverlappingChunkPosition(class ChunkPos const& pos, DimensionType) const;

    // symbol: ?loadVolumeFiles@VolumeEntityManagerServer@@QEAAXAEBVResourcePackManager@@_N@Z
    MCAPI void loadVolumeFiles(class ResourcePackManager const& resourcePackManager, bool isExperimentalEnabled);

    // symbol: ?loadVolumeInstances@VolumeEntityManagerServer@@QEAAXAEBVLevelStorage@@_N@Z
    MCAPI void loadVolumeInstances(class LevelStorage const& levelStorage, bool isExperimentalEnabled);

    // symbol:
    // ?removeAllVolumes@VolumeEntityManagerServer@@QEAA?AV?$vector@V?$OwnerPtrT@UEntityRefTraits@@@@V?$allocator@V?$OwnerPtrT@UEntityRefTraits@@@@@std@@@std@@AEAVLevelStorage@@V?$AutomaticID@VDimension@@H@@AEAVPacketSender@@@Z
    MCAPI std::vector<class OwnerPtrT<struct EntityRefTraits>>
    removeAllVolumes(class LevelStorage& levelStorage, DimensionType dimensionId, class PacketSender& packetSender);

    // symbol:
    // ?removeVolumes@VolumeEntityManagerServer@@QEAA?AV?$vector@V?$OwnerPtrT@UEntityRefTraits@@@@V?$allocator@V?$OwnerPtrT@UEntityRefTraits@@@@@std@@@std@@AEAVLevelStorage@@AEBVBlockPos@@V?$AutomaticID@VDimension@@H@@AEAVPacketSender@@@Z
    MCAPI std::vector<class OwnerPtrT<struct EntityRefTraits>> removeVolumes(
        class LevelStorage&   levelStorage,
        class BlockPos const& pos,
        DimensionType         dimensionId,
        class PacketSender&   packetSender
    );

    // symbol:
    // ?removeVolumes@VolumeEntityManagerServer@@QEAA?AV?$vector@V?$OwnerPtrT@UEntityRefTraits@@@@V?$allocator@V?$OwnerPtrT@UEntityRefTraits@@@@@std@@@std@@AEAVLevelStorage@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@V?$AutomaticID@VDimension@@H@@AEAVPacketSender@@@Z
    MCAPI std::vector<class OwnerPtrT<struct EntityRefTraits>> removeVolumes(
        class LevelStorage& levelStorage,
        std::string const&  name,
        DimensionType       dimensionId,
        class PacketSender& packetSender
    );

    // symbol:
    // ?sendAllVolumesToClient@VolumeEntityManagerServer@@QEBAXAEBVUserEntityIdentifierComponent@@AEBVNetworkIdentifier@@AEAVPacketSender@@@Z
    MCAPI void sendAllVolumesToClient(
        class UserEntityIdentifierComponent const&,
        class NetworkIdentifier const& source,
        class PacketSender&            packetSender
    ) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_findUsableName@VolumeEntityManagerServer@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$AutomaticID@VDimension@@H@@@Z
    MCAPI std::string _findUsableName(DimensionType) const;

    // NOLINTEND
};
