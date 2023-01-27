/**
 * @file  ActorAnimationController.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorAnimationController.
 *
 */
class ActorAnimationController {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORANIMATIONCONTROLLER
public:
    class ActorAnimationController& operator=(class ActorAnimationController const &) = delete;
    ActorAnimationController(class ActorAnimationController const &) = delete;
    ActorAnimationController() = delete;
#endif

public:
    /**
     * @symbol ??0ActorAnimationController@@QEAA@AEBVHashedString@@AEBVSemVersion@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1752458836
     */
    MCAPI ActorAnimationController(class HashedString const &, class SemVersion const &, std::string const &);
    /**
     * @symbol ?addState@ActorAnimationController@@QEAAAEAV?$shared_ptr@VActorAnimationControllerState@@@std@@AEBVHashedString@@@Z
     * @hash   -263485138
     */
    MCAPI class std::shared_ptr<class ActorAnimationControllerState> & addState(class HashedString const &);
    /**
     * @symbol ?findStateIndex@ActorAnimationController@@QEBA_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N_K@Z
     * @hash   1549575589
     */
    MCAPI unsigned __int64 findStateIndex(std::string const &, bool, unsigned __int64) const;
    /**
     * @symbol ?resolveTransitionStateIndices@ActorAnimationController@@QEAAXXZ
     * @hash   1480733587
     */
    MCAPI void resolveTransitionStateIndices();

};