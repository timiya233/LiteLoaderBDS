// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class VanillaItemTiers {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLAITEMTIERS
public:
    class VanillaItemTiers& operator=(class VanillaItemTiers const &) = delete;
    VanillaItemTiers(class VanillaItemTiers const &) = delete;
    VanillaItemTiers() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VANILLAITEMTIERS
public:
#endif
    MCAPI static std::vector<class ItemStack> const getTierItems(class Item::Tier const &, class BaseGameVersion const &);

//private:

private:
    MCAPI static class Item::Tier const DIAMOND;
    MCAPI static class Item::Tier const GOLD;
    MCAPI static class Item::Tier const IRON;
    MCAPI static class Item::Tier const NETHERITE;
    MCAPI static class Item::Tier const STONE;
    MCAPI static class Item::Tier const WOOD;


};