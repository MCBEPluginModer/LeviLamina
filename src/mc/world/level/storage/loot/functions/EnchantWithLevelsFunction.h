#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class EnchantWithLevelsFunction : public ::LootItemFunction {
public:
    // prevent constructor by default
    EnchantWithLevelsFunction& operator=(EnchantWithLevelsFunction const&);
    EnchantWithLevelsFunction(EnchantWithLevelsFunction const&);
    EnchantWithLevelsFunction();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1EnchantWithLevelsFunction@@UEAA@XZ
    virtual ~EnchantWithLevelsFunction() = default;

    // vIndex: 1, symbol: ?apply@EnchantWithLevelsFunction@@UEAAXAEAVItemStack@@AEAVRandom@@AEAVLootTableContext@@@Z
    virtual void apply(class ItemStack& item, class Random& random, class LootTableContext& context);

    // vIndex: 2, symbol:
    // ?apply@EnchantWithLevelsFunction@@UEAAHAEAVItemStack@@AEAVRandom@@AEBUTrade@@AEAVLootTableContext@@@Z
    virtual int
    apply(class ItemStack& item, class Random& random, struct Trade const& trade, class LootTableContext& context);

    // vIndex: 3, symbol: ?apply@EnchantWithLevelsFunction@@UEAAXAEAVItemInstance@@AEAVRandom@@AEAVLootTableContext@@@Z
    virtual void apply(class ItemInstance& item, class Random& random, class LootTableContext& context);

    // vIndex: 4, symbol:
    // ?apply@EnchantWithLevelsFunction@@UEAAHAEAVItemInstance@@AEAVRandom@@AEBUTrade@@AEAVLootTableContext@@@Z
    virtual int
    apply(class ItemInstance& item, class Random& random, struct Trade const& trade, class LootTableContext& context);

    // symbol:
    // ?deserialize@EnchantWithLevelsFunction@@SA?AV?$unique_ptr@VLootItemFunction@@U?$default_delete@VLootItemFunction@@@std@@@std@@VValue@Json@@AEAV?$vector@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@V?$allocator@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@@2@@3@@Z
    MCAPI static std::unique_ptr<class LootItemFunction>
    deserialize(class Json::Value object, std::vector<std::unique_ptr<class LootItemCondition>>& predicates);

    // NOLINTEND
};
