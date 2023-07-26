#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class DwellerComponent {
public:
    // DwellerComponent inner types declare
    // clang-format off

    // clang-format on

    // DwellerComponent inner types define
    enum class DwellingType {};

public:
    // prevent constructor by default
    DwellerComponent& operator=(DwellerComponent const&) = delete;
    DwellerComponent(DwellerComponent const&)            = delete;

public:
    /**
     * @symbol ?DecrementDwellingUpdateInterval\@DwellerComponent\@\@QEAAXXZ
     */
    MCAPI void DecrementDwellingUpdateInterval(); // NOLINT
    /**
     * @symbol ??0DwellerComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI DwellerComponent(class DwellerComponent&&); // NOLINT
    /**
     * @symbol ??0DwellerComponent\@\@QEAA\@XZ
     */
    MCAPI DwellerComponent(); // NOLINT
    /**
     * @symbol ?addAdditionalSaveData\@DwellerComponent\@\@QEBAXAEAVCompoundTag\@\@AEBVActor\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&, class Actor const&) const; // NOLINT
    /**
     * @symbol ?checkandUpdateDwellingStatus\@DwellerComponent\@\@QEAAXAEBVActor\@\@PEAVVillage\@\@\@Z
     */
    MCAPI void checkandUpdateDwellingStatus(class Actor const&, class Village*); // NOLINT
    /**
     * @symbol ?clearPreferredProfession\@DwellerComponent\@\@QEAAXXZ
     */
    MCAPI void clearPreferredProfession(); // NOLINT
    /**
     * @symbol ?fixupProfession\@DwellerComponent\@\@QEAAXAEBVActor\@\@PEAVVillage\@\@\@Z
     */
    MCAPI void fixupProfession(class Actor const&, class Village*); // NOLINT
    /**
     * @symbol ?getCanFindPOI\@DwellerComponent\@\@QEBA_NXZ
     */
    MCAPI bool getCanFindPOI() const; // NOLINT
    /**
     * @symbol ?getDwellerRole\@DwellerComponent\@\@QEBA?AW4DwellerRole\@\@XZ
     */
    MCAPI enum class DwellerRole getDwellerRole() const; // NOLINT
    /**
     * @symbol ?getDwellingUniqueID\@DwellerComponent\@\@QEBA?AVUUID\@mce\@\@XZ
     */
    MCAPI class mce::UUID getDwellingUniqueID() const; // NOLINT
    /**
     * @symbol ?getDwellingUpdateInterval\@DwellerComponent\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getDwellingUpdateInterval() const; // NOLINT
    /**
     * @symbol ?getFixUpRole\@DwellerComponent\@\@QEBA_NXZ
     */
    MCAPI bool getFixUpRole() const; // NOLINT
    /**
     * @symbol ?getPreferredProfession\@DwellerComponent\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const& getPreferredProfession() const; // NOLINT
    /**
     * @symbol ?getUpdateIntervalBase\@DwellerComponent\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getUpdateIntervalBase() const; // NOLINT
    /**
     * @symbol ?getUpdateIntervalVariant\@DwellerComponent\@\@QEBAHXZ
     */
    MCAPI int getUpdateIntervalVariant() const; // NOLINT
    /**
     * @symbol ?getVillage\@DwellerComponent\@\@QEBA?BV?$weak_ptr\@VVillage\@\@\@std\@\@AEBVActor\@\@\@Z
     */
    MCAPI class std::weak_ptr<class Village> const getVillage(class Actor const&) const; // NOLINT
    /**
     * @symbol ?getVillageCenter\@DwellerComponent\@\@QEBA?AVBlockPos\@\@AEBVActor\@\@\@Z
     */
    MCAPI class BlockPos getVillageCenter(class Actor const&) const; // NOLINT
    /**
     * @symbol ?hasDwelling\@DwellerComponent\@\@QEBA_NXZ
     */
    MCAPI bool hasDwelling() const; // NOLINT
    /**
     * @symbol ?hasPreferredProfession\@DwellerComponent\@\@QEBA_NAEBVActor\@\@\@Z
     */
    MCAPI bool hasPreferredProfession(class Actor const&) const; // NOLINT
    /**
     * @symbol ?initFromDefinition\@DwellerComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor&); // NOLINT
    /**
     * @symbol ?isWithinRestriction\@DwellerComponent\@\@QEBA_NAEBVActor\@\@\@Z
     */
    MCAPI bool isWithinRestriction(class Actor const&) const; // NOLINT
    /**
     * @symbol ?needsToFixupProfession\@DwellerComponent\@\@QEBA_NAEBVActor\@\@\@Z
     */
    MCAPI bool needsToFixupProfession(class Actor const&) const; // NOLINT
    /**
     * @symbol ?needsToFixupVillageRole\@DwellerComponent\@\@QEBA_NAEBVActor\@\@PEAVVillage\@\@\@Z
     */
    MCAPI bool needsToFixupVillageRole(class Actor const&, class Village*) const; // NOLINT
    /**
     * @symbol ?onDeath\@DwellerComponent\@\@QEAAXAEAVActor\@\@AEBVActorDamageSource\@\@\@Z
     */
    MCAPI void onDeath(class Actor&, class ActorDamageSource const&); // NOLINT
    /**
     * @symbol ?onDimensionChange\@DwellerComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void onDimensionChange(class Actor&); // NOLINT
    /**
     * @symbol ?onRemove\@DwellerComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void onRemove(class Actor&); // NOLINT
    /**
     * @symbol ??4DwellerComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class DwellerComponent& operator=(class DwellerComponent&&); // NOLINT
    /**
     * @symbol
     * ?readAdditionalSaveData\@DwellerComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @symbol ?setDwellingUniqueID\@DwellerComponent\@\@QEAAXAEAVActor\@\@VUUID\@mce\@\@\@Z
     */
    MCAPI void setDwellingUniqueID(class Actor&, class mce::UUID); // NOLINT
    /**
     * @symbol ?setDwellingUpdateInterval\@DwellerComponent\@\@QEAAX_K\@Z
     */
    MCAPI void setDwellingUpdateInterval(unsigned __int64); // NOLINT
    /**
     * @symbol ?setFixUpRole\@DwellerComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setFixUpRole(bool); // NOLINT
    /**
     * @symbol ?setLastHurtByMob\@DwellerComponent\@\@QEAAXAEAVActor\@\@PEAVMob\@\@\@Z
     */
    MCAPI void setLastHurtByMob(class Actor&, class Mob*); // NOLINT
    /**
     * @symbol ?trySetPreferredProfession\@DwellerComponent\@\@QEAA_NAEBVActor\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI bool trySetPreferredProfession(class Actor const&, class HashedString const&); // NOLINT
    /**
     * @symbol ?tryToFixupRole\@DwellerComponent\@\@QEAA_NAEBVActor\@\@PEAVVillage\@\@\@Z
     */
    MCAPI bool tryToFixupRole(class Actor const&, class Village*); // NOLINT
    /**
     * @symbol ?tryToMigrate\@DwellerComponent\@\@QEAA_NAEAVActor\@\@PEAVVillage\@\@1\@Z
     */
    MCAPI bool tryToMigrate(class Actor&, class Village*, class Village*); // NOLINT
    /**
     * @symbol ?wantsToMigrate\@DwellerComponent\@\@QEBA_NAEBVActor\@\@PEAVVillage\@\@\@Z
     */
    MCAPI bool wantsToMigrate(class Actor const&, class Village*) const; // NOLINT
    /**
     * @symbol ??1DwellerComponent\@\@QEAA\@XZ
     */
    MCAPI ~DwellerComponent(); // NOLINT

    // private:
    /**
     * @symbol ?_isLockedInToProfession\@DwellerComponent\@\@AEBA_NAEBVActor\@\@\@Z
     */
    MCAPI bool _isLockedInToProfession(class Actor const&) const; // NOLINT

private:
    /**
     * @symbol
     * ?DWELLING_ROLES\@DwellerComponent\@\@0V?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4DwellerRole\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4DwellerRole\@\@\@std\@\@\@2\@\@std\@\@B
     */
    MCAPI static class std::unordered_map<
        std::string,
        enum class DwellerRole,
        struct std::hash<std::string>,
        struct std::equal_to<std::string>,
        class std::allocator<struct std::pair<std::string const, enum class DwellerRole>>> const
        DWELLING_ROLES; // NOLINT
    /**
     * @symbol
     * ?DWELLING_TYPES\@DwellerComponent\@\@0V?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4DwellingType\@DwellerComponent\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4DwellingType\@DwellerComponent\@\@\@std\@\@\@2\@\@std\@\@B
     */
    MCAPI static class std::unordered_map<
        std::string,
        enum class DwellerComponent::DwellingType,
        struct std::hash<std::string>,
        struct std::equal_to<std::string>,
        class std::allocator<struct std::pair<std::string const, enum class DwellerComponent::DwellingType>>> const
        DWELLING_TYPES; // NOLINT
};
