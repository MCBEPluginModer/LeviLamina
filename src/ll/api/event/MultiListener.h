#pragma once

#include <typeindex>
#include <unordered_map>

#include "ll/api/event/Listener.h"

namespace ll::event {
template <class... Ts>
    requires(sizeof...(Ts) > 1 && (std::derived_from<Ts, Event> && ...))
class MultiListener : public ListenerBase {
public:
    using event_list  = meta::TypeList<Ts...>;
    using callback_fn = std::function<void(Event&)>;

    template <class Callable>
    explicit MultiListener(
        Callable&&                    fn,
        EventPriority                 priority = EventPriority::Normal,
        std::weak_ptr<plugin::Plugin> plugin   = plugin::NativePlugin::current()
    )
    : ListenerBase(priority, std::move(plugin)) {
        event_list::forEach([fn = std::forward<Callable>(fn), this]<class E>() {
            callback.emplace(typeid(E), [fn](Event& ev) { static_cast<void>(fn(static_cast<E&>(ev))); });
        });
    }

    ~MultiListener() override = default;

    void call(Event& event) override { callback.at(typeid(event))(event); }

    template <class Callable>
    static std::shared_ptr<MultiListener> create(Callable&& fn, EventPriority priority = EventPriority::Normal) {
        return std::make_shared<MultiListener>(std::forward<Callable>(fn), priority);
    }

private:
    std::unordered_map<std::type_index, callback_fn> callback;
};
} // namespace ll::event
