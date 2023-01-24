#pragma once
#include <llapi/mc/Item.hpp>
#include <llapi/mod/CustomItem.h>

class TestItem : public CustomItem<Item> {
public:
    TestItem(std::string const& name, short id) : CustomItem(name,id) {
    }

};