#include "FormHandler.h"
#include "ll/api/form/CustomForm.h"
#include "ll/api/form/SimpleForm.h"
#include "ll/api/memory/Hook.h"
#include "ll/core/LeviLamina.h"
#include "mc/deps/json/Value.h"
#include "mc/network/PacketHandlerDispatcherInstance.h"
#include "mc/network/ServerNetworkHandler.h"
#include "mc/network/packet/ModalFormResponsePacket.h"

namespace ll::form::handler {

void SimpleFormHandler::handle(Player& player, std::string const& data) const {
    int selected = data != "null" ? stoi(data) : -1;
    if (selected >= 0 && selected < (int)mButtonCallbacks.size()) {
        if (mButtonCallbacks[selected]) {
            mButtonCallbacks[selected](player);
        }
    }
    if (mCallback) {
        mCallback(player, selected);
    }
}

void CustomFormHandler::handle(Player& player, std::string const& data) const {
    if (data == "null") {
        if (mCallback) {
            mCallback(player, {});
        }
        return;
    }

    try {
        nlohmann::ordered_json dataJson = nlohmann::ordered_json::parse(data);

        if (!dataJson.is_array()) {
            ll::logger.error("Failed to parse CustomForm result: not an array");
            return;
        }
        if (dataJson.size() != mFormElements.size()) {
            ll::logger.error("Failed to parse CustomForm result: size mismatch");
            return;
        }

        CustomFormResult result;

        for (size_t i = 0; i < mFormElements.size(); ++i) {
            auto& element = mFormElements[i];
            auto& value   = dataJson[i];
            if (element->getType() == CustomFormElement::Type::Label) {
                continue;
            }

            result.emplace(element->mName, element->parseResult(value));
        }

        if (mCallback) {
            mCallback(player, result);
        }
    } catch (...) {
        ll::logger.error("Failed to parse CustomForm result");
        return;
    }
}

void ModalFormHandler::handle(Player& player, std::string const& data) const {
    bool selected = data == "true";
    if (mCallback) {
        mCallback(player, selected);
    }
}

std::unordered_map<uint, std::unique_ptr<FormHandler>> formHandlers = {};
uint                                                   currentId    = 0;

bool handleFormPacket(Player& player, uint formId, std::string const& data) {
    auto it = formHandlers.find(formId);
    if (it == formHandlers.end()) {
        return false;
    }
    it->second->handle(player, data);
    formHandlers.erase(it);
    return true;
}

LL_TYPE_INSTANCE_HOOK(
    FormResponseHandler,
    HookPriority::Highest,
    PacketHandlerDispatcherInstance<ModalFormResponsePacket>,
    &PacketHandlerDispatcherInstance<ModalFormResponsePacket>::handle,
    void,
    NetworkIdentifier const& source,
    NetEventCallback&        callback,
    std::shared_ptr<Packet>& packet
) {
    if (auto player = ((ServerNetworkHandler&)callback).getServerPlayer(source, SubClientId::PrimaryClient); player) {
        auto& modalPacket = (ModalFormResponsePacket&)*packet;

        auto data = std::string{"null"};

        if (!modalPacket.mFormCancelReason && modalPacket.mJSONResponse) {
            data = modalPacket.mJSONResponse->toStyledString();
            if (data.ends_with('\n')) {
                data.pop_back();
                if (data.ends_with('\r')) {
                    data.pop_back();
                }
            }
        }

        if (ll::form::handler::handleFormPacket(player, modalPacket.mFormId, data)) {
            return;
        }
    }
    origin(source, callback, packet);
}

uint addFormHandler(std::unique_ptr<FormHandler>&& data) {
    static ll::memory::HookRegistrar<FormResponseHandler> hook;

    formHandlers.emplace(++currentId, std::move(data));
    return currentId;
}

} // namespace ll::form::handler
