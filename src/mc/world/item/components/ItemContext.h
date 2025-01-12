#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/world/item/components/ItemLockMode.h"

class ItemContext {
public:
    // prevent constructor by default
    ItemContext& operator=(ItemContext const&);
    ItemContext(ItemContext const&);
    ItemContext();

public:
    // NOLINTBEGIN
    // symbol: ??0ItemContext@@QEAA@AEBVWeakEntityRef@@W4EquipmentSlot@Legacy@Puv@@@Z
    MCAPI ItemContext(class WeakEntityRef const&, ::Puv::Legacy::EquipmentSlot);

    // symbol: ??0ItemContext@@QEAA@AEBVWeakEntityRef@@H@Z
    MCAPI ItemContext(class WeakEntityRef const&, int slot);

    // symbol: ??0ItemContext@@QEAA@AEAVBlockSource@@AEBVBlockPos@@H@Z
    MCAPI ItemContext(class BlockSource& region, class BlockPos const&, int slot);

    // symbol: ?getAmount@ItemContext@@QEBA?AV?$optional@H@std@@XZ
    MCAPI std::optional<int> getAmount() const;

    // symbol:
    // ?getId@ItemContext@@QEBA?AV?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@XZ
    MCAPI std::optional<std::string> getId() const;

    // symbol: ?getItem@ItemContext@@QEBA?AV?$optional@VItemStack@@@std@@XZ
    MCAPI std::optional<class ItemStack> getItem() const;

    // symbol: ?getKeepOnDeath@ItemContext@@QEBA?AV?$optional@_N@std@@XZ
    MCAPI std::optional<bool> getKeepOnDeath() const;

    // symbol: ?getLockMode@ItemContext@@QEBA?AV?$optional@W4ItemLockMode@@@std@@XZ
    MCAPI std::optional<::ItemLockMode> getLockMode() const;

    // symbol:
    // ?getLore@ItemContext@@QEBA?AV?$optional@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@std@@XZ
    MCAPI std::optional<std::vector<std::string>> getLore() const;

    // symbol: ?getMaxAmount@ItemContext@@QEBA?AV?$optional@H@std@@XZ
    MCAPI std::optional<int> getMaxAmount() const;

    // symbol:
    // ?getNameTag@ItemContext@@QEBA?AV?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@XZ
    MCAPI std::optional<std::string> getNameTag() const;

    // symbol: ?getTags@ItemContext@@QEBA?AV?$optional@V?$vector@UItemTag@@V?$allocator@UItemTag@@@std@@@std@@@std@@XZ
    MCAPI std::optional<std::vector<struct ItemTag>> getTags() const;

    // symbol: ?hasTag@ItemContext@@QEBA?AV?$optional@_N@std@@AEBUItemTag@@@Z
    MCAPI std::optional<bool> hasTag(struct ItemTag const& tag) const;

    // symbol: ?isStackable@ItemContext@@QEBA?AV?$optional@_N@std@@XZ
    MCAPI std::optional<bool> isStackable() const;

    // symbol: ?isStackableWith@ItemContext@@QEBA?AV?$optional@_N@std@@AEBVItemStackBase@@@Z
    MCAPI std::optional<bool> isStackableWith(class ItemStackBase const& other) const;

    // symbol: ?isValid@ItemContext@@QEBA_NXZ
    MCAPI bool isValid() const;

    // symbol: ?setAmount@ItemContext@@QEAA_NH@Z
    MCAPI bool setAmount(int amount);

    // symbol:
    // ?setCanDestroy@ItemContext@@QEAA?AV?$optional@_N@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
    MCAPI std::optional<bool> setCanDestroy(std::vector<std::string> const&);

    // symbol:
    // ?setCanPlaceOn@ItemContext@@QEAA?AV?$optional@_N@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
    MCAPI std::optional<bool> setCanPlaceOn(std::vector<std::string> const&);

    // symbol: ?setItem@ItemContext@@QEAA_NAEBVItemStack@@@Z
    MCAPI bool setItem(class ItemStack const& stack);

    // symbol: ?setKeepOnDeath@ItemContext@@QEAA_N_N@Z
    MCAPI bool setKeepOnDeath(bool value);

    // symbol: ?setLockMode@ItemContext@@QEAA_NW4ItemLockMode@@@Z
    MCAPI bool setLockMode(::ItemLockMode);

    // symbol:
    // ?setLore@ItemContext@@QEAA_NAEBV?$optional@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@std@@@Z
    MCAPI bool setLore(std::optional<std::vector<std::string>> const&);

    // symbol:
    // ?setNameTag@ItemContext@@QEAA_NV?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@Z
    MCAPI bool setNameTag(std::optional<std::string>);

    // symbol: ??1ItemContext@@QEAA@XZ
    MCAPI ~ItemContext();

    // symbol: ?setEquipment@ItemContext@@SA_NAEBVItemStack@@W4EquipmentSlot@Legacy@Puv@@AEAVMob@@@Z
    MCAPI static bool setEquipment(class ItemStack const& itemStack, ::Puv::Legacy::EquipmentSlot, class Mob& mob);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getItem@ItemContext@@AEBAAEBVItemStack@@XZ
    MCAPI class ItemStack const& _getItem() const;

    // symbol: ?_setItem@ItemContext@@AEAAXAEBVItemStack@@@Z
    MCAPI void _setItem(class ItemStack const& itemStack);

    // symbol: ?_tryGetChestContainer@ItemContext@@AEBAPEAVContainer@@XZ
    MCAPI class Container* _tryGetChestContainer() const;

    // symbol: ?_tryGetContainerFromEntity@ItemContext@@AEBAPEAVContainer@@XZ
    MCAPI class Container* _tryGetContainerFromEntity() const;

    // NOLINTEND
};
