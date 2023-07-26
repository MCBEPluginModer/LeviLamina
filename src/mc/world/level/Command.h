#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Command {

public:
    // prevent constructor by default
    Command& operator=(Command const&) = delete;
    Command(Command const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?collectOptionalArguments\@Command\@\@MEAA_NXZ
     */
    virtual bool collectOptionalArguments(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?execute\@TakePictureCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const = 0; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMMAND
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Command(); // NOLINT
#endif
    /**
     * @symbol ??0Command\@\@QEAA\@XZ
     */
    MCAPI Command(); // NOLINT
    /**
     * @symbol
     * ?getCommandName\@Command\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getCommandName() const; // NOLINT
    /**
     * @symbol ?getVersion\@Command\@\@QEBAHXZ
     */
    MCAPI int getVersion() const; // NOLINT
    /**
     * @symbol ?hasFlag\@Command\@\@QEBA_NUCommandFlag\@\@\@Z
     */
    MCAPI bool hasFlag(struct CommandFlag) const; // NOLINT
    /**
     * @symbol ?run\@Command\@\@QEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void run(class CommandOrigin const&, class CommandOutput&) const; // NOLINT
    /**
     * @symbol ?shouldUseCommandOriginRotation\@Command\@\@SA_NAEBVCommandOrigin\@\@H\@Z
     */
    MCAPI static bool shouldUseCommandOriginRotation(class CommandOrigin const&, int); // NOLINT
    /**
     * @symbol ?validRange\@Command\@\@SA_NHHHAEAVCommandOutput\@\@\@Z
     */
    MCAPI static bool validRange(int, int, int, class CommandOutput&); // NOLINT
    /**
     * @symbol ?validRange\@Command\@\@SA_NMMMAEAVCommandOutput\@\@\@Z
     */
    MCAPI static bool validRange(float, float, float, class CommandOutput&); // NOLINT
    /**
     * @symbol ?WILDCARD_TOKEN\@Command\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const WILDCARD_TOKEN; // NOLINT

    // protected:
    /**
     * @symbol ?getRegistry\@Command\@\@IEBAAEBVCommandRegistry\@\@XZ
     */
    MCAPI class CommandRegistry const& getRegistry() const; // NOLINT
    /**
     * @symbol ?sendTelemetry\@Command\@\@IEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void sendTelemetry(class CommandOrigin const&, class CommandOutput&) const; // NOLINT
    /**
     * @symbol ?shouldSendTelemetry\@Command\@\@IEBA_NAEBVCommandOrigin\@\@\@Z
     */
    MCAPI bool shouldSendTelemetry(class CommandOrigin const&) const; // NOLINT
    /**
     * @symbol ?getPlayerFromOrigin\@Command\@\@KAPEAVPlayer\@\@AEBVCommandOrigin\@\@\@Z
     */
    MCAPI static class Player* getPlayerFromOrigin(class CommandOrigin const&); // NOLINT
    /**
     * @symbol ?isTemplateLockedAction\@Command\@\@KA_NAEBVCommandOrigin\@\@\@Z
     */
    MCAPI static bool isTemplateLockedAction(class CommandOrigin const&); // NOLINT
    /**
     * @symbol ?isWildcard\@Command\@\@KA_NAEBVCommandSelectorBase\@\@\@Z
     */
    MCAPI static bool isWildcard(class CommandSelectorBase const&); // NOLINT
    /**
     * @symbol ?validData\@Command\@\@KA_NHAEAGAEAVCommandOutput\@\@\@Z
     */
    MCAPI static bool validData(int, unsigned short&, class CommandOutput&); // NOLINT

protected:
};
