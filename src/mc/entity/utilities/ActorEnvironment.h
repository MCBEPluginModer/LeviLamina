#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorEnvironment {
/**
 * @symbol ?getHeadInWater\@ActorEnvironment\@\@YA_NAEBVEntityContext\@\@\@Z
 */
MCAPI bool getHeadInWater(class EntityContext const&); // NOLINT
/**
 * @symbol ?getIsInWater\@ActorEnvironment\@\@YA_NAEBVEntityContext\@\@\@Z
 */
MCAPI bool getIsInWater(class EntityContext const&); // NOLINT
/**
 * @symbol ?setHeadInWater\@ActorEnvironment\@\@YAXAEAVEntityContext\@\@_N\@Z
 */
MCAPI void setHeadInWater(class EntityContext&, bool); // NOLINT
/**
 * @symbol ?setIsInWater\@ActorEnvironment\@\@YAXAEAVEntityContext\@\@_N\@Z
 */
MCAPI void setIsInWater(class EntityContext&, bool); // NOLINT

}; // namespace ActorEnvironment
