#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class CommandOutput;
class ItemDescriptor;
class ItemStack;
class ItemStackBase;
class Player;
namespace Json { class Value; }
// clang-format on

namespace Util::CodeBuilder {
// NOLINTBEGIN
// symbol: ?createObject@CodeBuilder@Util@@YA?AVValue@Json@@AEBVActor@@@Z
MCAPI class Json::Value createObject(class Actor const& actor);

// symbol: ?createObject@CodeBuilder@Util@@YA?AVValue@Json@@AEBVBlock@@@Z
MCAPI class Json::Value createObject(class Block const& val);

// symbol: ?createObject@CodeBuilder@Util@@YA?AVValue@Json@@AEBVCommandOutput@@@Z
MCAPI class Json::Value createObject(class CommandOutput const& commandOutput);

// symbol: ?createObject@CodeBuilder@Util@@YA?AVValue@Json@@AEBVItemDescriptor@@@Z
MCAPI class Json::Value createObject(class ItemDescriptor const& item);

// symbol: ?createObject@CodeBuilder@Util@@YA?AVValue@Json@@AEBVItemStack@@@Z
MCAPI class Json::Value createObject(class ItemStack const& item);

// symbol: ?createObject@CodeBuilder@Util@@YA?AVValue@Json@@AEBVItemStackBase@@@Z
MCAPI class Json::Value createObject(class ItemStackBase const& item);

// symbol: ?createObject@CodeBuilder@Util@@YA?AVValue@Json@@AEBVPlayer@@@Z
MCAPI class Json::Value createObject(class Player const& player);

// symbol: ?createObject@CodeBuilder@Util@@YA?AVValue@Json@@AEBVBlock@@H@Z
MCAPI class Json::Value createObject(class Block const& val, int aux);

// symbol: ?createTraderObject@CodeBuilder@Util@@YA?AVValue@Json@@AEBVActor@@@Z
MCAPI class Json::Value createTraderObject(class Actor const& trader);
// NOLINTEND

}; // namespace Util::CodeBuilder
