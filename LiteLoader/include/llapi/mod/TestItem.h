#pragma once
#include <llapi/mc/Item.hpp>
#include <llapi/mod/CustomItem.h>
#include <llapi/mc/ArmorItem.hpp>

class TestItem : public CustomItem<Item> {
public:
    TestItem(std::string const& name, short id) : CustomItem(name,id) {
        setMaxDamage(100);
    }

    virtual int getAttackDamage() const {
        return 100;
    }

    virtual bool isDamageable() const {
        return true;
    }
};