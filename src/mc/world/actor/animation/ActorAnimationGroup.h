#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class ActorAnimationGroup {

public:
    // prevent constructor by default
    ActorAnimationGroup& operator=(ActorAnimationGroup const&) = delete;
    ActorAnimationGroup(ActorAnimationGroup const&)            = delete;

public:
    /**
     * @symbol ??0ActorAnimationGroup\@\@QEAA\@XZ
     */
    MCAPI ActorAnimationGroup(); // NOLINT
    /**
     * @symbol ?getActorAnimation\@ActorAnimationGroup\@\@QEAA?AVActorSkeletalAnimationPtr\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI class ActorSkeletalAnimationPtr getActorAnimation(class HashedString const&); // NOLINT
    /**
     * @symbol
     * ?getActorAnimationInfo\@ActorAnimationGroup\@\@QEAA?AV?$shared_ptr\@VActorAnimationInfo\@\@\@std\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI class std::shared_ptr<class ActorAnimationInfo> getActorAnimationInfo(class HashedString const&); // NOLINT
    /**
     * @symbol
     * ?loadActorAnimation\@ActorAnimationGroup\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVPath\@Core\@\@AEAVPackStats\@\@AEBVSemVersion\@\@W4CurrentCmdVersion\@\@_N\@Z
     */
    MCAPI void loadActorAnimation(
        std::string const&,
        class Core::Path const&,
        class PackStats&,
        class SemVersion const&,
        enum class CurrentCmdVersion,
        bool
    ); // NOLINT
    /**
     * @symbol ?loadActorAnimationsSync\@ActorAnimationGroup\@\@QEAAXAEAVResourcePackManager\@\@\@Z
     */
    MCAPI void loadActorAnimationsSync(class ResourcePackManager&); // NOLINT
};
