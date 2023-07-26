#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SpawnGroupData {

public:
    // prevent constructor by default
    SpawnGroupData& operator=(SpawnGroupData const&) = delete;
    SpawnGroupData(SpawnGroupData const&)            = delete;
    SpawnGroupData()                                 = delete;

public:
    /**
     * @symbol
     * ??0SpawnGroupData\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVMobSpawnRules\@\@\@Z
     */
    MCAPI SpawnGroupData(std::string const&, class MobSpawnRules&); // NOLINT
    /**
     * @symbol ?addSpawnRules\@SpawnGroupData\@\@QEAAXAEAVMobSpawnRules\@\@\@Z
     */
    MCAPI void addSpawnRules(class MobSpawnRules&); // NOLINT
    /**
     * @symbol
     * ?getIdentifier\@SpawnGroupData\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getIdentifier() const; // NOLINT
    /**
     * @symbol
     * ?getSpawnRules\@SpawnGroupData\@\@QEBAAEBV?$vector\@VMobSpawnRules\@\@V?$allocator\@VMobSpawnRules\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class MobSpawnRules> const& getSpawnRules() const; // NOLINT
};
