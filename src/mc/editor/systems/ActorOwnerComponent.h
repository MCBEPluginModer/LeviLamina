#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorOwnerComponent {

public:
    // prevent constructor by default
    ActorOwnerComponent& operator=(ActorOwnerComponent const&) = delete;
    ActorOwnerComponent(ActorOwnerComponent const&)            = delete;
    ActorOwnerComponent()                                      = delete;

public:
    /**
     * @symbol
     * ??0ActorOwnerComponent\@\@QEAA\@V?$unique_ptr\@VActor\@\@U?$default_delete\@VActor\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI ActorOwnerComponent(std::unique_ptr<class Actor>); // NOLINT
    /**
     * @symbol ??0ActorOwnerComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI ActorOwnerComponent(class ActorOwnerComponent&&); // NOLINT
    /**
     * @symbol ?getActor\@ActorOwnerComponent\@\@QEBAAEAVActor\@\@XZ
     */
    MCAPI class Actor& getActor() const; // NOLINT
    /**
     * @symbol ?getActor\@ActorOwnerComponent\@\@QEAAAEAVActor\@\@XZ
     */
    MCAPI class Actor& getActor(); // NOLINT
    /**
     * @symbol ??4ActorOwnerComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class ActorOwnerComponent& operator=(class ActorOwnerComponent&&); // NOLINT
    /**
     * @symbol ??1ActorOwnerComponent\@\@QEAA\@XZ
     */
    MCAPI ~ActorOwnerComponent(); // NOLINT
};
