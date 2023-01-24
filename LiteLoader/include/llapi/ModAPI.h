#pragma once
#include "llapi/mc/Block.hpp"
#include "llapi/mc/BlockLegacy.hpp"
#include "llapi/mc/BlockTypeRegistry.hpp"
#include "llapi/mc/BlockDefinitionGroup.hpp"
#include "llapi/mc/ItemRegistryRef.hpp"

namespace ll {
namespace mod {
// Register Block
static std::vector<WeakPtr<BlockLegacy>> registeredBlocks;

template <class T, typename... Args>
static WeakPtr<BlockLegacy> registerBlock(const std::string& typeName, Args&&... args) {
    auto exists = BlockTypeRegistry::lookupByName(typeName, false);
    if (exists && exists.get())
        return exists;
    auto lastBlockId = Global<BlockDefinitionGroup>->getNextBlockId();
    auto legacyBlock = BlockTypeRegistry::registerBlock<T>(typeName, lastBlockId, args...);
    auto weakLegacy = legacyBlock->createWeakPtr();
    if (!weakLegacy)
        return {};
    weakLegacy->setIsVanillaBlock(false);
    registeredBlocks.emplace_back(weakLegacy);
    return weakLegacy;
}

//Register Item
template <class T, typename... Args>
static WeakPtr<T> registerItem(const std::string& name, short id, Args&&... args) {
    return Global<ItemRegistryRef>->registerItem<T>(name, id, args...);
}

template <class T, typename... Args>
static WeakPtr<T> registerBlockItem(const std::string& name, const BlockLegacy& block, Args&&... args) {
    return Global<ItemRegistryRef>->registerBlockItem<T>(name, block, args...);
}

template <class T, typename... Args>
static WeakPtr<T> registerBlockItem(const std::string& name, const Block& block, Args&&... args) {
    return Global<ItemRegistryRef>->registerBlockItem<T>(name, block, args...);
}

//Register Recipes

static void registerRecipe() {

}


} // namespace mod
} // namespace ll