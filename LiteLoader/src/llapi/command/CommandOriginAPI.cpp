#include "llapi/mc/CommandOrigin.hpp"
#include "llapi/mc/Actor.hpp"

ServerPlayer* CommandOrigin::getPlayer() const {
    Actor* origin = getEntity();
    return origin->isPlayer(true) ? (ServerPlayer*)origin : nullptr;
}