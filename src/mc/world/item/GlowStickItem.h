#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ChemistryStickItem.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class GlowStickItem : public ::ChemistryStickItem {

public:
    // prevent constructor by default
    GlowStickItem& operator=(GlowStickItem const&) = delete;
    GlowStickItem(GlowStickItem const&)            = delete;
    GlowStickItem()                                = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11(); // NOLINT
    /**
     * @vftbl 14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14(); // NOLINT
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16(); // NOLINT
    /**
     * @vftbl 21
     * @symbol __unk_vfn_21
     */
    virtual void __unk_vfn_21(); // NOLINT
    /**
     * @vftbl 51
     * @symbol __unk_vfn_51
     */
    virtual void __unk_vfn_51(); // NOLINT
    /**
     * @vftbl 53
     * @symbol __unk_vfn_53
     */
    virtual void __unk_vfn_53(); // NOLINT
    /**
     * @vftbl 66
     * @symbol __unk_vfn_66
     */
    virtual void __unk_vfn_66(); // NOLINT
    /**
     * @vftbl 67
     * @symbol ?isValidAuxValue\@GlowStickItem\@\@UEBA_NH\@Z
     */
    virtual bool isValidAuxValue(int) const; // NOLINT
    /**
     * @vftbl 70
     * @symbol __unk_vfn_70
     */
    virtual void __unk_vfn_70(); // NOLINT
    /**
     * @vftbl 71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71(); // NOLINT
    /**
     * @vftbl 72
     * @symbol __unk_vfn_72
     */
    virtual void __unk_vfn_72(); // NOLINT
    /**
     * @vftbl 75
     * @symbol __unk_vfn_75
     */
    virtual void __unk_vfn_75(); // NOLINT
    /**
     * @vftbl 79
     * @symbol __unk_vfn_79
     */
    virtual void __unk_vfn_79(); // NOLINT
    /**
     * @vftbl 80
     * @symbol __unk_vfn_80
     */
    virtual void __unk_vfn_80(); // NOLINT
    /**
     * @vftbl 95
     * @symbol
     * ?buildDescriptionId\@GlowStickItem\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVItemDescriptor\@\@PEBVCompoundTag\@\@\@Z
     */
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const; // NOLINT
    /**
     * @vftbl 115
     * @symbol __unk_vfn_115
     */
    virtual void __unk_vfn_115(); // NOLINT
    /**
     * @vftbl 116
     * @symbol __unk_vfn_116
     */
    virtual void __unk_vfn_116(); // NOLINT
    /**
     * @vftbl 124
     * @symbol ?getLightEmission\@GlowStickItem\@\@UEBA?AUBrightness\@\@H\@Z
     */
    virtual struct Brightness getLightEmission(int) const; // NOLINT
    /**
     * @symbol
     * ??0GlowStickItem\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI GlowStickItem(std::string const&, int); // NOLINT
    /**
     * @symbol ?COLORS\@GlowStickItem\@\@2QBW4ItemColor\@\@B
     */
    MCAPI static enum class ItemColor const COLORS[]; // NOLINT
    /**
     * @symbol ?MAX_ACTIVE_TICKS\@GlowStickItem\@\@2HB
     */
    MCAPI static int const MAX_ACTIVE_TICKS; // NOLINT
};
