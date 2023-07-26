#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class BehaviorFactory {

public:
    // prevent constructor by default
    BehaviorFactory& operator=(BehaviorFactory const&) = delete;
    BehaviorFactory(BehaviorFactory const&)            = delete;

public:
    /**
     * @symbol ??0BehaviorFactory\@\@QEAA\@XZ
     */
    MCAPI BehaviorFactory(); // NOLINT
    /**
     * @symbol
     * ?loadNodeDefinition\@BehaviorFactory\@\@QEBA?AV?$unique_ptr\@VBehaviorDefinition\@\@U?$default_delete\@VBehaviorDefinition\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@VValue\@Json\@\@AEAVBehaviorTreeDefinitionPtr\@\@\@Z
     */
    MCAPI std::unique_ptr<class BehaviorDefinition>
          loadNodeDefinition(std::string const&, class Json::Value, class BehaviorTreeDefinitionPtr&) const; // NOLINT
    /**
     * @symbol
     * ?registerNodePair\@BehaviorFactory\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$function\@$$A6A?AV?$unique_ptr\@VBehaviorDefinition\@\@U?$default_delete\@VBehaviorDefinition\@\@\@std\@\@\@std\@\@XZ\@3\@V?$function\@$$A6A?AV?$unique_ptr\@VBehaviorNode\@\@U?$default_delete\@VBehaviorNode\@\@\@std\@\@\@std\@\@XZ\@3\@\@Z
     */
    MCAPI void
    registerNodePair(std::string const&, class std::function<std::unique_ptr<class BehaviorDefinition>(void)>, class std::function<std::unique_ptr<class BehaviorNode>(void)>); // NOLINT

    // private:
    /**
     * @symbol ?_initNodes\@BehaviorFactory\@\@AEAAXXZ
     */
    MCAPI void _initNodes(); // NOLINT

private:
};
