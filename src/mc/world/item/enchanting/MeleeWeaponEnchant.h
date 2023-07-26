#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class MeleeWeaponEnchant : public ::Enchant {

public:
    // prevent constructor by default
    MeleeWeaponEnchant& operator=(MeleeWeaponEnchant const&) = delete;
    MeleeWeaponEnchant(MeleeWeaponEnchant const&)            = delete;
    MeleeWeaponEnchant()                                     = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?getMinCost\@MeleeWeaponEnchant\@\@UEBAHH\@Z
     */
    virtual int getMinCost(int) const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?getMaxCost\@MeleeWeaponEnchant\@\@UEBAHH\@Z
     */
    virtual int getMaxCost(int) const; // NOLINT
    /**
     * @vftbl 5
     * @symbol ?getMaxLevel\@MeleeWeaponEnchant\@\@UEBAHXZ
     */
    virtual int getMaxLevel() const; // NOLINT
    /**
     * @vftbl 7
     * @symbol ?getDamageBonus\@MeleeWeaponEnchant\@\@UEBAMHAEBVActor\@\@\@Z
     */
    virtual float getDamageBonus(int, class Actor const&) const; // NOLINT
    /**
     * @vftbl 8
     * @symbol ?doPostAttack\@MeleeWeaponEnchant\@\@UEBAXAEAVActor\@\@0H\@Z
     */
    virtual void doPostAttack(class Actor&, class Actor&, int) const; // NOLINT
    /**
     * @vftbl 10
     * @symbol __unk_vfn_10
     */
    virtual void __unk_vfn_10(); // NOLINT
    /**
     * @vftbl 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11(); // NOLINT
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12(); // NOLINT
    /**
     * @vftbl 13
     * @symbol __unk_vfn_13
     */
    virtual void __unk_vfn_13(); // NOLINT
    /**
     * @vftbl 14
     * @symbol ?_isValidEnchantmentTypeForCategory\@MeleeWeaponEnchant\@\@EEBA_NW4Type\@Enchant\@\@\@Z
     */
    virtual bool _isValidEnchantmentTypeForCategory(enum class Enchant::Type) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MELEEWEAPONENCHANT
    /**
     * @symbol ?isMeleeDamageEnchant\@MeleeWeaponEnchant\@\@UEBA_NXZ
     */
    MCVAPI bool isMeleeDamageEnchant() const; // NOLINT
#endif
    /**
     * @symbol
     * ??0MeleeWeaponEnchant\@\@QEAA\@W4Type\@Enchant\@\@W4Frequency\@2\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@2HH\@Z
     */
    MCAPI MeleeWeaponEnchant(
        enum class Enchant::Type,
        enum class Enchant::Frequency,
        class std::basic_string_view<char, struct std::char_traits<char>>,
        class std::basic_string_view<char, struct std::char_traits<char>>,
        int,
        int
    ); // NOLINT

    // private:

private:
    /**
     * @symbol
     * ?VALID_ENCHANTMENTS\@MeleeWeaponEnchant\@\@0V?$vector\@W4Type\@Enchant\@\@V?$allocator\@W4Type\@Enchant\@\@\@std\@\@\@std\@\@B
     */
    MCAPI static std::vector<enum class Enchant::Type> const VALID_ENCHANTMENTS; // NOLINT
};
