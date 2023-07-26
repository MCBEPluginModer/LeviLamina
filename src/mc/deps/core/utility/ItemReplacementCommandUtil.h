#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemStack;
enum class EquipmentSlot;
namespace Util { struct ActorReplacementParams; }
namespace Util { struct ContainerReplacementParams; }
namespace Util { struct ReplacementResults; }
// clang-format on

namespace Util {

class ItemReplacementCommandUtil {

public:
    // prevent constructor by default
    ItemReplacementCommandUtil& operator=(ItemReplacementCommandUtil const&) = delete;
    ItemReplacementCommandUtil(ItemReplacementCommandUtil const&)            = delete;
    ItemReplacementCommandUtil()                                             = delete;

public:
    /**
     * @symbol
     * ?replaceActorSlotsOrError\@ItemReplacementCommandUtil\@Util\@\@SA?AUReplacementResults\@2\@AEAUActorReplacementParams\@2\@\@Z
     */
    MCAPI static struct Util::ReplacementResults
    replaceActorSlotsOrError(struct Util::ActorReplacementParams&); // NOLINT
    /**
     * @symbol
     * ?replaceContainerSlotsOrError\@ItemReplacementCommandUtil\@Util\@\@SA?AUReplacementResults\@2\@AEAUContainerReplacementParams\@2\@\@Z
     */
    MCAPI static struct Util::ReplacementResults
    replaceContainerSlotsOrError(struct Util::ContainerReplacementParams&); // NOLINT

    // private:
    /**
     * @symbol
     * ?_replaceArmorSlots\@ItemReplacementCommandUtil\@Util\@\@CAXAEAUReplacementResults\@2\@AEAVActor\@\@V?$span\@$$CBVItemStack\@\@$0?0\@gsl\@\@W4EquipmentSlot\@\@H\@Z
     */
    MCAPI static void _replaceArmorSlots(
        struct Util::ReplacementResults&,
        class Actor&,
        class gsl::span<class ItemStack const, -1>,
        enum class EquipmentSlot,
        int
    ); // NOLINT
    /**
     * @symbol
     * ?_slotBoundsValid\@ItemReplacementCommandUtil\@Util\@\@CA_NAEAUReplacementResults\@2\@HHV?$optional\@H\@std\@\@1\@Z
     */
    MCAPI static bool
    _slotBoundsValid(struct Util::ReplacementResults&, int, int, class std::optional<int>, class std::optional<int>); // NOLINT

private:
};

}; // namespace Util
