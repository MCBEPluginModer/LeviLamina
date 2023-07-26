#pragma once

#include "mc/_HeaderOutputPredefine.h"

class JigsawStructureActorRulesRegistry {

public:
    // prevent constructor by default
    JigsawStructureActorRulesRegistry& operator=(JigsawStructureActorRulesRegistry const&) = delete;
    JigsawStructureActorRulesRegistry(JigsawStructureActorRulesRegistry const&)            = delete;

public:
    /**
     * @symbol ??0JigsawStructureActorRulesRegistry\@\@QEAA\@XZ
     */
    MCAPI JigsawStructureActorRulesRegistry(); // NOLINT
    /**
     * @symbol
     * ?lookupByName\@JigsawStructureActorRulesRegistry\@\@QEBAPEBV?$vector\@V?$unique_ptr\@VStructurePoolActorRule\@\@U?$default_delete\@VStructurePoolActorRule\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePoolActorRule\@\@U?$default_delete\@VStructurePoolActorRule\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI std::vector<std::unique_ptr<class StructurePoolActorRule>> const* lookupByName(std::string) const; // NOLINT
    /**
     * @symbol
     * ?registerActorRules\@JigsawStructureActorRulesRegistry\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$QEAV?$unique_ptr\@V?$vector\@V?$unique_ptr\@VStructurePoolActorRule\@\@U?$default_delete\@VStructurePoolActorRule\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePoolActorRule\@\@U?$default_delete\@VStructurePoolActorRule\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@U?$default_delete\@V?$vector\@V?$unique_ptr\@VStructurePoolActorRule\@\@U?$default_delete\@VStructurePoolActorRule\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePoolActorRule\@\@U?$default_delete\@VStructurePoolActorRule\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI void
    registerActorRules(std::string, std::unique_ptr<std::vector<class std::unique_ptr<class StructurePoolActorRule, struct std::default_delete<class StructurePoolActorRule>>>>&&); // NOLINT
    /**
     * @symbol ??1JigsawStructureActorRulesRegistry\@\@QEAA\@XZ
     */
    MCAPI ~JigsawStructureActorRulesRegistry(); // NOLINT
};
