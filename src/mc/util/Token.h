#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Token {

public:
    // prevent constructor by default
    Token& operator=(Token const&) = delete;
    Token(Token const&)            = delete;
    Token()                        = delete;

public:
    /**
     * @symbol ??0Token\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI Token(std::string const&); // NOLINT
    /**
     * @symbol
     * ?getText\@Token\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
     */
    MCAPI std::string const& getText(std::string const&) const; // NOLINT
    /**
     * @symbol ??1Token\@\@QEAA\@XZ
     */
    MCAPI ~Token(); // NOLINT
    /**
     * @symbol
     * ?tokenize\@Token\@\@SA?AV?$vector\@UToken\@\@V?$allocator\@UToken\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI static std::vector<struct Token> tokenize(std::string const&); // NOLINT

    // protected:
    /**
     * @symbol ?_parseRandom\@Token\@\@IEAA_NXZ
     */
    MCAPI bool _parseRandom(); // NOLINT
};
