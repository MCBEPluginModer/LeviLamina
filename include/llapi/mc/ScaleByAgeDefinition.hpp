/**
 * @file  ScaleByAgeDefinition.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ScaleByAgeDefinition.
 *
 */
class ScaleByAgeDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCALEBYAGEDEFINITION
public:
    class ScaleByAgeDefinition& operator=(class ScaleByAgeDefinition const &) = delete;
    ScaleByAgeDefinition(class ScaleByAgeDefinition const &) = delete;
#endif

public:
    /**
     * @symbol ??0ScaleByAgeDefinition@@QEAA@XZ
     * @hash   2030886301
     */
    MCAPI ScaleByAgeDefinition();
    /**
     * @symbol ?initialize@ScaleByAgeDefinition@@QEAAXAEAVEntityContext@@AEAVScaleByAgeComponent@@@Z
     * @hash   -330253257
     */
    MCAPI void initialize(class EntityContext &, class ScaleByAgeComponent &);
    /**
     * @symbol ?buildSchema@ScaleByAgeDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VScaleByAgeDefinition@@@JsonUtil@@@std@@@Z
     * @hash   171205702
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ScaleByAgeDefinition>> &);

};