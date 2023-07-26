#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CaveFeatureUtils {

struct CarverConfiguration {

public:
    // prevent constructor by default
    CarverConfiguration& operator=(CarverConfiguration const&) = delete;
    CarverConfiguration(CarverConfiguration const&)            = delete;
    CarverConfiguration()                                      = delete;

public:
    /**
     * @symbol ??1CarverConfiguration\@CaveFeatureUtils\@\@QEAA\@XZ
     */
    MCAPI ~CarverConfiguration(); // NOLINT
};

}; // namespace CaveFeatureUtils
