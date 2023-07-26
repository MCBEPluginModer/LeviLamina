#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakRefT.h"

class EntityContext {

public:
    // prevent constructor by default
    EntityContext& operator=(EntityContext const&) = delete;
    EntityContext(EntityContext const&)            = delete;
    EntityContext()                                = delete;

public:
    /**
     * @symbol ??0EntityContext\@\@QEAA\@AEAVEntityRegistry\@\@VEntityId\@\@\@Z
     */
    MCAPI EntityContext(class EntityRegistry&, class EntityId); // NOLINT
    /**
     * @symbol ?_registry\@EntityContext\@\@QEBAAEAVEntityRegistry\@\@XZ
     */
    MCAPI class EntityRegistry& _registry() const; // NOLINT
    /**
     * @symbol ?getWeakRef\@EntityContext\@\@QEBA?AV?$WeakRefT\@UEntityRefTraits\@\@\@\@XZ
     */
    MCAPI class WeakRefT<struct EntityRefTraits> getWeakRef() const; // NOLINT
};
