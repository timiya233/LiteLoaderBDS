#pragma once

#include <llapi/mc/Material.hpp>
#include <llapi/mod/CustomBlock.h>
#include <llapi/mc/BlockLegacy.hpp>
#include <llapi/mc/Player.hpp>
#include <llapi/mc/BlockSource.hpp>

class TestBlock : public CustomBlock<BlockLegacy> {
public:
    TestBlock(const std::string& name, int id) : CustomBlock(name, id, Material::getMaterial(MaterialType::Dirt)) {
        std::cout << "Reg " << name << std::endl;
        //build();
    }

    virtual float getDestroyTime() const {
        return 5.5;
    }

    virtual float getExplodeable() const {
        return 100.0;
    }

    //bool use(Player& player, const BlockPos& pos) const {
    //    BlockSource& blockSource = player.getRegion();
    //    TestBlockActor* blockEntity = (TestBlockActor*)blockSource.getBlockEntity(pos);
    //    if (blockEntity != nullptr) {
    //        blockEntity->startOpen(player);
    //        return true;
    //    } else {
    //        return false;
    //    }
    //}

  /*  virtual std::shared_ptr<BlockActor> newBlockEntity(class BlockPos const& pos, class Block const& bl) const {
        return std::make_shared<TestBlockActor>(BlockActorType::Furnace, pos, "furnace", LevelSoundEvent::Undefined,
                                                ContainerType::FURNACE, 10, bl, bl);
    }*/
};

#include <llapi/mc/Item.hpp>
#include <llapi/mod/CustomItem.h>
#include <llapi/mc/ArmorItem.hpp>

class TestItem : public CustomItem<Item> {
public:
    TestItem(std::string const& name, short id) : CustomItem(name, id) {
        std::cout << "Reg " << name << std::endl;
    }

    virtual int getAttackDamage() const {
        return 100;
    }

    virtual bool isDamageable() const {
        return true;
    }
};

#include <llapi/mod/CustomRecipe.h>
#include <llapi/mc/ItemStack.hpp>
#include <llapi/mc/EnchantUtils.hpp>
#include <llapi/mc/EnchantmentInstance.hpp>
class TestShapedRecipe : public CustomShapedRecipe {
public:
    virtual ItemInstance getResult() {
        auto item = ItemStack::create("minecraft:stick");
        EnchantUtils::applyEnchant(*item, EnchantmentInstance(Enchant::Type::unbreaking, 0), 1);
        item->setCustomName("BETStick");
        return ItemInstance(*item);
    }

    virtual std::vector<std::string> getRows() {
       return vector<string>{
            "AAA",
            "ABA",
            "AAA",
        };
    }

    virtual std::vector<Recipes::Type> getTypes() {
        return vector<Recipes::Type>{Recipes::Type("minecraft:stick", 'A', 1, 0),
                                    Recipes::Type("minecraft:diamond", 'B', 1, 0)};
    }

    virtual std::vector<HashedString> getTags() {
       return vector<HashedString>{"crafting_table"};
    }

    virtual int getPriority() {
        return 2;
    }
};

class TestShapedlessRecipe : public CustomShapelessRecipe {
public:
    virtual ItemInstance getResult() {
        auto item = ItemStack::create("minecraft:stick");
        EnchantUtils::applyEnchant(*item, EnchantmentInstance(Enchant::Type::unbreaking, 0), 1);
        item->setCustomName("BETStick");
        return ItemInstance(*item);
    }

    virtual std::vector<Recipes::Type> getTypes() {
        return vector<Recipes::Type>{Recipes::Type("minecraft:stick", 'A', 1, 0),
                                     Recipes::Type("minecraft:diamond", 'B', 1, 0)};
    }

    virtual std::vector<HashedString> getTags() {
        return vector<HashedString>{"crafting_table"};
    }

    virtual int getPriority() {
        return 50;
    }
};
#include "llapi/mc/ItemRegistryManager.hpp"
class TestFurnaceRecipe : public CustomFurnaceRecipe {
public:
    virtual ItemInstance getInput() {
        auto item = ItemStack::create("minecraft:stick");
        return ItemInstance(*item);
    }

    virtual ItemInstance getResult() {
        auto item = ItemStack::create("minecraft:stick");
        EnchantUtils::applyEnchant(*item, EnchantmentInstance(Enchant::Type::unbreaking, 0), 1);
        item->setCustomName("BETStick");
        return ItemInstance(*item);
    }

    virtual std::vector<HashedString> getTags() {
        return vector<HashedString>{"furnace"};
    }
};
#include <llapi/mod/CustomActor.h>

class TestActor : public CustomActor<Actor> {
public:
    TestActor(class ActorDefinitionGroup* a1, struct ActorDefinitionIdentifier const& a2, class EntityContext& a3)
    : CustomActor(a1, a2,a3) {
        std::cout << "Reg " << a2.getFullName() << std::endl;
    }
};