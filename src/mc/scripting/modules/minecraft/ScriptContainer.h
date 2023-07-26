#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Container;
class ItemContext;
namespace ScriptModuleMinecraft { class ScriptContainerSlot; }
namespace ScriptModuleMinecraft { class ScriptContainerWrapper; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptContainer {

public:
    // prevent constructor by default
    ScriptContainer& operator=(ScriptContainer const&) = delete;
    ScriptContainer(ScriptContainer const&)            = delete;
    ScriptContainer()                                  = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getSize\@ScriptContainer\@ScriptModuleMinecraft\@\@UEBA?AV?$Result\@H\@Scripting\@\@XZ
     */
    virtual class Scripting::Result<int> getSize() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol ?getEmptySlotsCount\@ScriptContainer\@ScriptModuleMinecraft\@\@UEBA?AV?$Result\@H\@Scripting\@\@XZ
     */
    virtual class Scripting::Result<int> getEmptySlotsCount() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol
     * ?setItemV010\@ScriptContainer\@ScriptModuleMinecraft\@\@UEBA?AV?$Result\@X\@Scripting\@\@HAEBVScriptItemStack\@2\@\@Z
     */
    virtual class Scripting::Result<void>
    setItemV010(int, class ScriptModuleMinecraft::ScriptItemStack const&) const; // NOLINT
    /**
     * @vftbl 4
     * @symbol
     * ?setItem\@ScriptContainer\@ScriptModuleMinecraft\@\@UEBA?AV?$Result\@X\@Scripting\@\@HAEBV?$optional\@VScriptItemStack\@ScriptModuleMinecraft\@\@\@std\@\@\@Z
     */
    virtual class Scripting::Result<void>
    setItem(int, class std::optional<class ScriptModuleMinecraft::ScriptItemStack> const&) const; // NOLINT
    /**
     * @vftbl 5
     * @symbol
     * ?getItem\@ScriptContainer\@ScriptModuleMinecraft\@\@UEBA?AV?$Result\@V?$optional\@V?$StrongTypedObjectHandle\@VScriptItemStack\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@std\@\@\@Scripting\@\@H\@Z
     */
    virtual class Scripting::Result<
        class std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>>>
    getItem(int) const; // NOLINT
    /**
     * @vftbl 6
     * @symbol
     * ?addItemV010\@ScriptContainer\@ScriptModuleMinecraft\@\@UEBA?AV?$Result\@X\@Scripting\@\@AEBVScriptItemStack\@2\@\@Z
     */
    virtual class Scripting::Result<void>
    addItemV010(class ScriptModuleMinecraft::ScriptItemStack const&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?transferItemV010\@ScriptContainer\@ScriptModuleMinecraft\@\@UEBA?AV?$Result\@_N\@Scripting\@\@HHAEAV12\@\@Z
     */
    virtual class Scripting::Result<bool>
    transferItemV010(int, int, class ScriptModuleMinecraft::ScriptContainer&) const; // NOLINT
    /**
     * @vftbl 8
     * @symbol
     * ?moveItem\@ScriptContainer\@ScriptModuleMinecraft\@\@UEBA?AV?$Result\@X\@Scripting\@\@HHAEAVScriptContainerWrapper\@2\@\@Z
     */
    virtual class Scripting::Result<void>
    moveItem(int, int, class ScriptModuleMinecraft::ScriptContainerWrapper&) const; // NOLINT
    /**
     * @vftbl 9
     * @symbol ?swapItemsV010\@ScriptContainer\@ScriptModuleMinecraft\@\@UEBA?AV?$Result\@_N\@Scripting\@\@HHAEAV12\@\@Z
     */
    virtual class Scripting::Result<bool>
    swapItemsV010(int, int, class ScriptModuleMinecraft::ScriptContainer&) const; // NOLINT
    /**
     * @vftbl 10
     * @symbol
     * ?swapItems\@ScriptContainer\@ScriptModuleMinecraft\@\@UEBA?AV?$Result\@X\@Scripting\@\@HHAEAVScriptContainerWrapper\@2\@\@Z
     */
    virtual class Scripting::Result<void>
    swapItems(int, int, class ScriptModuleMinecraft::ScriptContainerWrapper&) const; // NOLINT
    /**
     * @vftbl 11
     * @symbol
     * ?getSlot\@ScriptContainer\@ScriptModuleMinecraft\@\@UEBA?AV?$Result\@V?$StrongTypedObjectHandle\@VScriptContainerSlot\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Scripting\@\@H\@Z
     */
    virtual class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptContainerSlot>>
    getSlot(int) const; // NOLINT
    /**
     * @vftbl 12
     * @symbol ?clearAll\@ScriptContainer\@ScriptModuleMinecraft\@\@UEBA?AV?$Result\@X\@Scripting\@\@XZ
     */
    virtual class Scripting::Result<void> clearAll() const; // NOLINT
    /**
     * @vftbl 13
     * @symbol
     * ?_tryGetContainer\@ScriptPlayerInventoryComponentContainer\@ScriptModuleMinecraft\@\@MEBAPEAVContainer\@\@XZ
     */
    virtual class Container* _tryGetContainer() const = 0; // NOLINT
    /**
     * @vftbl 14
     * @symbol
     * ?_getItemContext\@ScriptPlayerInventoryComponentContainer\@ScriptModuleMinecraft\@\@MEBA?AVItemContext\@\@H\@Z
     */
    virtual class ItemContext _getItemContext(int) const = 0; // NOLINT
    /**
     * @symbol ??0ScriptContainer\@ScriptModuleMinecraft\@\@QEAA\@AEBVWeakLifetimeScope\@Scripting\@\@\@Z
     */
    MCAPI ScriptContainer(class Scripting::WeakLifetimeScope const&); // NOLINT
    /**
     * @symbol
     * ?addItem\@ScriptContainer\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$StrongTypedObjectHandle\@VScriptItemStack\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Scripting\@\@AEBVScriptItemStack\@2\@\@Z
     */
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>>
    addItem(class ScriptModuleMinecraft::ScriptItemStack const&) const; // NOLINT
    /**
     * @symbol ?isValid\@ScriptContainer\@ScriptModuleMinecraft\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const; // NOLINT
    /**
     * @symbol
     * ?transferItem\@ScriptContainer\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$StrongTypedObjectHandle\@VScriptItemStack\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Scripting\@\@HAEAVScriptContainerWrapper\@2\@\@Z
     */
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>>
    transferItem(int, class ScriptModuleMinecraft::ScriptContainerWrapper&) const; // NOLINT
    /**
     * @symbol
     * ?bind\@ScriptContainer\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptContainer\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptContainer> bind(); // NOLINT

    // protected:
    /**
     * @symbol
     * ?_isSlotInvalid\@ScriptContainer\@ScriptModuleMinecraft\@\@KA?AV?$optional\@UError\@Scripting\@\@\@std\@\@AEAVContainer\@\@H\@Z
     */
    MCAPI static class std::optional<struct Scripting::Error> _isSlotInvalid(class Container&, int); // NOLINT

protected:
};

}; // namespace ScriptModuleMinecraft
