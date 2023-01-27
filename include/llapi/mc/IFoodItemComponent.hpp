/**
 * @file  IFoodItemComponent.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class IFoodItemComponent.
 *
 */
class IFoodItemComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IFOODITEMCOMPONENT
public:
    class IFoodItemComponent& operator=(class IFoodItemComponent const &) = delete;
    IFoodItemComponent(class IFoodItemComponent const &) = delete;
    IFoodItemComponent() = delete;
#endif

public:
    /**
     * @symbol ?CAN_ALWAYS_EAT@IFoodItemComponent@@2QBDB
     * @hash   -434094821
     */
    MCAPI static char const CAN_ALWAYS_EAT[];
    /**
     * @symbol ?NUTRITION@IFoodItemComponent@@2QBDB
     * @hash   781536713
     */
    MCAPI static char const NUTRITION[];
    /**
     * @symbol ?SATURATION_MODIFIER@IFoodItemComponent@@2QBDB
     * @hash   1120646825
     */
    MCAPI static char const SATURATION_MODIFIER[];

};