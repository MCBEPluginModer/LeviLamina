#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class ActivationArguments {

public:
    // prevent constructor by default
    ActivationArguments& operator=(ActivationArguments const&) = delete;
    ActivationArguments(ActivationArguments const&)            = delete;
    ActivationArguments()                                      = delete;

public:
    /**
     * @symbol ?preParseArguments\@ActivationArguments\@Bedrock\@\@QEAAXXZ
     */
    MCAPI void preParseArguments(); // NOLINT
    /**
     * @symbol ??1ActivationArguments\@Bedrock\@\@QEAA\@XZ
     */
    MCAPI ~ActivationArguments(); // NOLINT
};

}; // namespace Bedrock
