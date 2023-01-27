/**
 * @file  MingleComponent.hpp
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
 * @brief MC class MingleComponent.
 *
 */
class MingleComponent {

#define AFTER_EXTRA
// Add Member There
public:
enum class MingleState;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINGLECOMPONENT
public:
    class MingleComponent& operator=(class MingleComponent const &) = delete;
    MingleComponent(class MingleComponent const &) = delete;
#endif

public:
    /**
     * @symbol ??0MingleComponent@@QEAA@XZ
     * @hash   1889706827
     */
    MCAPI MingleComponent();
    /**
     * @symbol ?clearPreviousPartnerId@MingleComponent@@QEAAAEAV1@XZ
     * @hash   -615553006
     */
    MCAPI class MingleComponent & clearPreviousPartnerId();
    /**
     * @symbol ?fetchCurrentPartner@MingleComponent@@QEBAPEAVActor@@AEBV2@@Z
     * @hash   -600647353
     */
    MCAPI class Actor * fetchCurrentPartner(class Actor const &) const;
    /**
     * @symbol ?resetState@MingleComponent@@QEAAXXZ
     * @hash   -1909002937
     */
    MCAPI void resetState();
    /**
     * @symbol ?setMingleState@MingleComponent@@QEAAAEAV1@W4MingleState@1@@Z
     * @hash   1267046315
     */
    MCAPI class MingleComponent & setMingleState(enum class MingleComponent::MingleState);
    /**
     * @symbol ?setPartnerId@MingleComponent@@QEAAAEAV1@UActorUniqueID@@@Z
     * @hash   778778549
     */
    MCAPI class MingleComponent & setPartnerId(struct ActorUniqueID);

};