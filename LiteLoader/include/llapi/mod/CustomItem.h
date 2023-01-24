#pragma once

template <class T>
requires std::is_base_of<Item, T>::value
class CustomItem : public T {
public:
    CustomItem(std::string const& name , short id) : T(name, id){};


};