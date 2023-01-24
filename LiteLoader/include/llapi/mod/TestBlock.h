#pragma once

#include <llapi/mc/Material.hpp>
#include <llapi/mod/CustomBlock.h>
#include <llapi/mc/BlockLegacy.hpp>
#include <llapi/mc/Player.hpp>
#include <llapi/mc/BlockSource.hpp>

class TestBlock : public CustomBlock<BlockLegacy> {
public:
    TestBlock(const std::string& name, int id) : CustomBlock(name, id, Material::getMaterial(MaterialType::Dirt)) {
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