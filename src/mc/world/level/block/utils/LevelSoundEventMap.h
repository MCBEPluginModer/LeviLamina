#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/data/BidirectionalUnorderedMap.h"

class LevelSoundEventMap {

public:
    // prevent constructor by default
    LevelSoundEventMap& operator=(LevelSoundEventMap const&) = delete;
    LevelSoundEventMap(LevelSoundEventMap const&)            = delete;
    LevelSoundEventMap()                                     = delete;

public:
    /**
     * @symbol
     * ?getId\@LevelSoundEventMap\@\@SA?AW4LevelSoundEvent\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static enum class LevelSoundEvent getId(std::string const&); // NOLINT
    /**
     * @symbol
     * ?getName\@LevelSoundEventMap\@\@SAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4LevelSoundEvent\@\@\@Z
     */
    MCAPI static std::string const& getName(enum class LevelSoundEvent); // NOLINT
    /**
     * @symbol
     * ?initializerData\@LevelSoundEventMap\@\@2V?$initializer_list\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4LevelSoundEvent\@\@\@std\@\@\@std\@\@B
     */
    MCAPI static class std::initializer_list<struct std::pair<std::string, enum class LevelSoundEvent>> const
        initializerData; // NOLINT

    // private:

private:
    /**
     * @symbol
     * ?map\@LevelSoundEventMap\@\@0V?$BidirectionalUnorderedMap\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4LevelSoundEvent\@\@\@\@B
     */
    MCAPI static class BidirectionalUnorderedMap<std::string, enum class LevelSoundEvent> const map; // NOLINT
};
