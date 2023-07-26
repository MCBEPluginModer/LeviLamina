#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class FilterTestHourlyClock : public ::FilterTest {

public:
    // prevent constructor by default
    FilterTestHourlyClock& operator=(FilterTestHourlyClock const&) = delete;
    FilterTestHourlyClock(FilterTestHourlyClock const&)            = delete;
    FilterTestHourlyClock()                                        = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?setup\@FilterTestHourlyClock\@\@UEAA_NAEBUDefinition\@FilterTest\@\@AEBUFilterInputs\@\@\@Z
     */
    virtual bool setup(struct FilterTest::Definition const&, struct FilterInputs const&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?evaluate\@FilterTestHourlyClock\@\@UEBA_NAEBUFilterContext\@\@\@Z
     */
    virtual bool evaluate(struct FilterContext const&) const; // NOLINT
    /**
     * @vftbl 4
     * @symbol ?getName\@FilterTestHourlyClock\@\@UEBA?AV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@XZ
     */
    virtual class std::basic_string_view<char, struct std::char_traits<char>> getName() const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FILTERTESTHOURLYCLOCK
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~FilterTestHourlyClock(); // NOLINT
#endif
};
