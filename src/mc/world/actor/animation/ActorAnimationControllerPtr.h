#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorAnimationControllerPtr {
public:
    // prevent constructor by default
    ActorAnimationControllerPtr& operator=(ActorAnimationControllerPtr const&);
    ActorAnimationControllerPtr(ActorAnimationControllerPtr const&);
    ActorAnimationControllerPtr();

public:
    // NOLINTBEGIN
    // symbol: ??0ActorAnimationControllerPtr@@QEAA@AEAVActorAnimationControllerGroup@@AEBVHashedString@@@Z
    MCAPI ActorAnimationControllerPtr(class ActorAnimationControllerGroup& group, class HashedString const& name);

    // symbol: ?getName@ActorAnimationControllerPtr@@QEBAAEBVHashedString@@XZ
    MCAPI class HashedString const& getName() const;

    // symbol: ?isNull@ActorAnimationControllerPtr@@QEBA_NXZ
    MCAPI bool isNull() const;

    // symbol: ??1ActorAnimationControllerPtr@@QEAA@XZ
    MCAPI ~ActorAnimationControllerPtr();

    // symbol: ?NONE@ActorAnimationControllerPtr@@2V1@B
    MCAPI static class ActorAnimationControllerPtr const NONE;

    // NOLINTEND
};
