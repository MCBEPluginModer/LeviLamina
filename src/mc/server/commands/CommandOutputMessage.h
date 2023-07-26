#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandOutputMessage {

public:
    // prevent constructor by default
    CommandOutputMessage& operator=(CommandOutputMessage const&) = delete;
    CommandOutputMessage()                                       = delete;

public:
    /**
     * @symbol ??0CommandOutputMessage\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI CommandOutputMessage(class CommandOutputMessage&&); // NOLINT
    /**
     * @symbol
     * ??0CommandOutputMessage\@\@QEAA\@W4CommandOutputMessageType\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$QEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI
    CommandOutputMessage(enum class CommandOutputMessageType, std::string const&, std::vector<std::string>&&); // NOLINT
    /**
     * @symbol ??0CommandOutputMessage\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI CommandOutputMessage(class CommandOutputMessage const&); // NOLINT
    /**
     * @symbol
     * ?getMessageId\@CommandOutputMessage\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getMessageId() const; // NOLINT
    /**
     * @symbol
     * ?getParams\@CommandOutputMessage\@\@QEBAAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> const& getParams() const; // NOLINT
    /**
     * @symbol ?getType\@CommandOutputMessage\@\@QEBA?AW4CommandOutputMessageType\@\@XZ
     */
    MCAPI enum class CommandOutputMessageType getType() const; // NOLINT
    /**
     * @symbol ??1CommandOutputMessage\@\@QEAA\@XZ
     */
    MCAPI ~CommandOutputMessage(); // NOLINT
};
