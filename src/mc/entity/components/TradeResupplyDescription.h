#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/Description.h"

class TradeResupplyDescription : public ::Description {

public:
    // prevent constructor by default
    TradeResupplyDescription& operator=(TradeResupplyDescription const&) = delete;
    TradeResupplyDescription(TradeResupplyDescription const&)            = delete;
    TradeResupplyDescription()                                           = delete;

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@TradeResupplyDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const; // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TRADERESUPPLYDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~TradeResupplyDescription(); // NOLINT
#endif
};
