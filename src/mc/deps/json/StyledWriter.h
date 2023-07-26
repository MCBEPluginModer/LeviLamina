#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Json {

class StyledWriter {

public:
    // prevent constructor by default
    StyledWriter& operator=(StyledWriter const&) = delete;
    StyledWriter(StyledWriter const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?write\@StyledWriter\@Json\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVValue\@2\@\@Z
     */
    virtual std::string write(class Json::Value const&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_JSON_STYLEDWRITER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~StyledWriter(); // NOLINT
#endif
    /**
     * @symbol ??0StyledWriter\@Json\@\@QEAA\@XZ
     */
    MCAPI StyledWriter(); // NOLINT

    // private:
    /**
     * @symbol ?indent\@StyledWriter\@Json\@\@AEAAXXZ
     */
    MCAPI void indent(); // NOLINT
    /**
     * @symbol
     * ?pushValue\@StyledWriter\@Json\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void pushValue(std::string const&); // NOLINT
    /**
     * @symbol ?unindent\@StyledWriter\@Json\@\@AEAAXXZ
     */
    MCAPI void unindent(); // NOLINT
    /**
     * @symbol ?writeArrayValue\@StyledWriter\@Json\@\@AEAAXAEBVValue\@2\@\@Z
     */
    MCAPI void writeArrayValue(class Json::Value const&); // NOLINT
    /**
     * @symbol ?writeCommentAfterValueOnSameLine\@StyledWriter\@Json\@\@AEAAXAEBVValue\@2\@\@Z
     */
    MCAPI void writeCommentAfterValueOnSameLine(class Json::Value const&); // NOLINT
    /**
     * @symbol ?writeCommentBeforeValue\@StyledWriter\@Json\@\@AEAAXAEBVValue\@2\@\@Z
     */
    MCAPI void writeCommentBeforeValue(class Json::Value const&); // NOLINT
    /**
     * @symbol ?writeValue\@StyledWriter\@Json\@\@AEAAXAEBVValue\@2\@\@Z
     */
    MCAPI void writeValue(class Json::Value const&); // NOLINT
    /**
     * @symbol
     * ?writeWithIndent\@StyledWriter\@Json\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void writeWithIndent(std::string const&); // NOLINT
    /**
     * @symbol
     * ?normalizeEOL\@StyledWriter\@Json\@\@CA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV34\@\@Z
     */
    MCAPI static std::string normalizeEOL(std::string const&); // NOLINT

private:
};

}; // namespace Json
