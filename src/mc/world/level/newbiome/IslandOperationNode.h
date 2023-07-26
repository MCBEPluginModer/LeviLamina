#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/newbiome/OperationNodeBase.h"
#include "mc/world/level/newbiome/WorkingData.h"

// auto generated forward declare list
// clang-format off
namespace OperationNodeValues { enum class Terrain; }
// clang-format on

class IslandOperationNode : public ::OperationNodeDetails::OperationNodeBase {

public:
    // prevent constructor by default
    IslandOperationNode& operator=(IslandOperationNode const&) = delete;
    IslandOperationNode(IslandOperationNode const&)            = delete;
    IslandOperationNode()                                      = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2(); // NOLINT
    /**
     * @vftbl 3
     * @symbol
     * ?_fillArea\@IslandOperationNode\@\@EEBAXAEAV?$WorkingData\@W4Terrain\@OperationNodeValues\@\@D\@OperationNodeDetails\@\@AEBVPos2d\@\@1\@Z
     */
    virtual void
    _fillArea(class OperationNodeDetails::WorkingData<enum class OperationNodeValues::Terrain, char>&, class Pos2d const&, class Pos2d const&)
        const; // NOLINT
};
