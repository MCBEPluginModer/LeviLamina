#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerGameTypeUtility {
/**
 * @symbol ?isAdventure\@PlayerGameTypeUtility\@\@YA_NW4GameType\@\@0\@Z
 */
MCAPI bool isAdventure(enum class GameType, enum class GameType); // NOLINT
/**
 * @symbol ?isCreative\@PlayerGameTypeUtility\@\@YA_NW4GameType\@\@0\@Z
 */
MCAPI bool isCreative(enum class GameType, enum class GameType); // NOLINT
/**
 * @symbol ?isSpectator\@PlayerGameTypeUtility\@\@YA_NW4GameType\@\@0\@Z
 */
MCAPI bool isSpectator(enum class GameType, enum class GameType); // NOLINT
/**
 * @symbol ?isSurvival\@PlayerGameTypeUtility\@\@YA_NW4GameType\@\@0\@Z
 */
MCAPI bool isSurvival(enum class GameType, enum class GameType); // NOLINT
/**
 * @symbol ?isWorldBuilderBedrock\@PlayerGameTypeUtility\@\@YA_NAEBUAbilitiesComponent\@\@W4GameType\@\@1\@Z
 */
MCAPI bool isWorldBuilderBedrock(struct AbilitiesComponent const&, enum class GameType, enum class GameType); // NOLINT

}; // namespace PlayerGameTypeUtility
