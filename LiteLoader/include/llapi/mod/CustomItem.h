#pragma once
#include <type_traits>
#include "llapi/mc/Item.hpp"

template <class T>
requires std::is_base_of<Item, T>::value
class CustomItem : public T {
public:
    template <typename... Args>
    CustomItem(Args&&... args) : T(args...){};
    
    //TODO
};