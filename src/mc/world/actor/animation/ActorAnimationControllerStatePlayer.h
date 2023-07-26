#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorAnimationControllerStatePlayer {

public:
    // prevent constructor by default
    ActorAnimationControllerStatePlayer& operator=(ActorAnimationControllerStatePlayer const&) = delete;
    ActorAnimationControllerStatePlayer(ActorAnimationControllerStatePlayer const&)            = delete;
    ActorAnimationControllerStatePlayer()                                                      = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?applyToPose\@ActorAnimationControllerStatePlayer\@\@UEAAXAEAVRenderParams\@\@AEAV?$unordered_map\@W4SkeletalHierarchyIndex\@\@V?$vector\@VBoneOrientation\@\@V?$allocator\@VBoneOrientation\@\@\@std\@\@\@std\@\@U?$hash\@W4SkeletalHierarchyIndex\@\@\@3\@U?$equal_to\@W4SkeletalHierarchyIndex\@\@\@3\@V?$allocator\@U?$pair\@$$CBW4SkeletalHierarchyIndex\@\@V?$vector\@VBoneOrientation\@\@V?$allocator\@VBoneOrientation\@\@\@std\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@M\@Z
     */
    virtual void applyToPose(
        class RenderParams&,
        class std::unordered_map<
            enum class SkeletalHierarchyIndex,
            std::vector<class BoneOrientation>,
            struct std::hash<enum class SkeletalHierarchyIndex>,
            struct std::equal_to<enum class SkeletalHierarchyIndex>,
            class std::allocator<
                struct std::pair<enum class SkeletalHierarchyIndex const, std::vector<class BoneOrientation>>>>&,
        float
    ); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?resetAnimation\@ActorAnimationControllerStatePlayer\@\@UEAAXXZ
     */
    virtual void resetAnimation(); // NOLINT
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
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?hasAnimationFinished\@ActorAnimationControllerStatePlayer\@\@UEBA_NXZ
     */
    virtual bool hasAnimationFinished() const; // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?findAnimation\@ActorAnimationControllerStatePlayer\@\@UEAA?AV?$shared_ptr\@VActorAnimationPlayer\@\@\@std\@\@AEBVHashedString\@\@\@Z
     */
    virtual class std::shared_ptr<class ActorAnimationPlayer> findAnimation(class HashedString const&); // NOLINT
    /**
     * @vftbl 8
     * @symbol ?getAnimationType\@ActorAnimationControllerStatePlayer\@\@UEBA?AW4ActorAnimationType\@\@XZ
     */
    virtual enum class ActorAnimationType getAnimationType() const; // NOLINT
    /**
     * @vftbl 9
     * @symbol ?getRawName\@ActorAnimationControllerStatePlayer\@\@UEBAAEBVHashedString\@\@XZ
     */
    virtual class HashedString const& getRawName() const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORANIMATIONCONTROLLERSTATEPLAYER
    /**
     * @symbol
     * ?bindParticleEffects\@ActorAnimationControllerStatePlayer\@\@UEAAXAEBV?$unordered_map\@VHashedString\@\@V1\@U?$hash\@VHashedString\@\@\@std\@\@U?$equal_to\@VHashedString\@\@\@3\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@V1\@\@std\@\@\@3\@\@std\@\@\@Z
     */
    MCVAPI void
    bindParticleEffects(class std::unordered_map<
                        class HashedString,
                        class HashedString,
                        struct std::hash<class HashedString>,
                        struct std::equal_to<class HashedString>,
                        class std::allocator<
                            struct std::pair<class HashedString const, class HashedString>>> const&); // NOLINT
    /**
     * @symbol
     * ?bindSoundEffects\@ActorAnimationControllerStatePlayer\@\@UEAAXAEBV?$unordered_map\@VHashedString\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$hash\@VHashedString\@\@\@3\@U?$equal_to\@VHashedString\@\@\@3\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@3\@\@std\@\@\@Z
     */
    MCVAPI void
    bindSoundEffects(class std::unordered_map<
                     class HashedString,
                     std::string,
                     struct std::hash<class HashedString>,
                     struct std::equal_to<class HashedString>,
                     class std::allocator<struct std::pair<class HashedString const, std::string>>> const&); // NOLINT
#endif
    /**
     * @symbol
     * ??0ActorAnimationControllerStatePlayer\@\@QEAA\@AEBVHashedString\@\@AEAVActorAnimationControllerPlayer\@\@V?$shared_ptr\@VActorAnimationControllerState\@\@\@std\@\@AEAVAnimationComponent\@\@AEBVExpressionNode\@\@AEAV?$set\@VHashedString\@\@U?$hash\@VHashedString\@\@\@std\@\@V?$allocator\@VHashedString\@\@\@3\@\@4\@\@Z
     */
    MCAPI
    ActorAnimationControllerStatePlayer(class HashedString const&, class ActorAnimationControllerPlayer&, class std::shared_ptr<class ActorAnimationControllerState>, class AnimationComponent&, class ExpressionNode const&, class std::set<class HashedString, struct std::hash<class HashedString>, class std::allocator<class HashedString>>&); // NOLINT
    /**
     * @symbol ?allAnimationsFinished\@ActorAnimationControllerStatePlayer\@\@QEBA_NXZ
     */
    MCAPI bool allAnimationsFinished() const; // NOLINT
    /**
     * @symbol ?anyAnimationsFinished\@ActorAnimationControllerStatePlayer\@\@QEBA_NXZ
     */
    MCAPI bool anyAnimationsFinished() const; // NOLINT
};
