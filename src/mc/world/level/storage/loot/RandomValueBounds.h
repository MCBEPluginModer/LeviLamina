#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class RandomValueBounds {

public:
    // prevent constructor by default
    RandomValueBounds& operator=(RandomValueBounds const&) = delete;
    RandomValueBounds(RandomValueBounds const&)            = delete;
    RandomValueBounds()                                    = delete;

public:
    /**
     * @symbol ?deserialize\@RandomValueBounds\@\@QEAAXAEBVValue\@Json\@\@\@Z
     */
    MCAPI void deserialize(class Json::Value const&); // NOLINT
    /**
     * @symbol ?getFloat\@RandomValueBounds\@\@QEBAMAEAVRandom\@\@\@Z
     */
    MCAPI float getFloat(class Random&) const; // NOLINT
    /**
     * @symbol ?getInt\@RandomValueBounds\@\@QEBAHAEAVRandom\@\@\@Z
     */
    MCAPI int getInt(class Random&) const; // NOLINT
    /**
     * @symbol ?getMax\@RandomValueBounds\@\@QEBAMXZ
     */
    MCAPI float getMax() const; // NOLINT
    /**
     * @symbol ?getMin\@RandomValueBounds\@\@QEBAMXZ
     */
    MCAPI float getMin() const; // NOLINT
};
