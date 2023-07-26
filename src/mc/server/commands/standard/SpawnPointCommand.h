#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class SpawnPointCommand : public ::Command {

public:
    // prevent constructor by default
    SpawnPointCommand& operator=(SpawnPointCommand const&) = delete;
    SpawnPointCommand(SpawnPointCommand const&)            = delete;
    SpawnPointCommand()                                    = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?execute\@SpawnPointCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const; // NOLINT
    /**
     * @symbol ?setup\@SpawnPointCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&); // NOLINT
};
