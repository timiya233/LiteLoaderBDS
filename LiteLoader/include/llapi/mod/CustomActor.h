#pragma once
#include <type_traits>
#include "llapi/mc/Actor.hpp"

template <class T>
    requires std::is_base_of<Actor, T>::value
class CustomActor : public T {
public:
    template <typename... Args>
    CustomActor(Args&&... args) : T(args...){};

    // TODO
};