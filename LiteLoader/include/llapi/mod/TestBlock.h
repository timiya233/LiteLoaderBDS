#pragma once

#include <llapi/mc/Material.hpp>
#include <llapi/mc/BlockItem.hpp>
#include <llapi/mc/VanillaTags.hpp>
#include <llapi/mc/ItemState.hpp>
#include "llapi/mc/CompoundTag.hpp"
#include <llapi/mod/CustomBlock.h>
#include <llapi/mc/BlockLegacy.hpp>

class TestBlock : public CustomBlock<BlockLegacy> {
public:
    TestBlock(const std::string& name, int id) : CustomBlock(name, id, Material::getMaterial(MaterialType::Dirt)) {
        build();
    }

    virtual float getDestroyTime() const {
        return 5.5;
    }

    virtual float getExplodeable() const {
        return 100.0;
    }

    virtual CreativeItemCategory getCategory() const {
        return CreativeItemCategory::Nature;
    } 

    virtual ItemState& getCreativeEnumState() const {
        return *(ItemState*)dlsym_real("?StoneType@VanillaStates@@3V?$ItemStateVariant@W4StoneType@@@@B");
    }

};