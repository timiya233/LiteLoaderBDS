#pragma once
#include "llapi/mc/Block.hpp"
#include "llapi/mc/BlockLegacy.hpp"
#include "llapi/mc/BlockTypeRegistry.hpp"
#include "llapi/mc/BlockDefinitionGroup.hpp"
#include "llapi/mc/ItemRegistryRef.hpp"
#include "llapi/mc/Recipes.hpp"
#include "llapi/mc/ItemInstance.hpp"
#include "llapi/mod/CustomRecipe.h"
#include "llapi/mc/ActorFactory.hpp"
#include "llapi/mc/ActorFactoryData.hpp"
#include "llapi/mc/ActorMapping.hpp"
#include "llapi/mc/ActorInfoRegistry.hpp"
typedef std::unordered_map<std::string, ActorFactoryData> ActorDataMap;
typedef std::unordered_map<ActorType, ActorMapping> ActorMappingMap;


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
template <class T>
    requires std::is_base_of<CustomShapedRecipe, T>::value
static void registerShapedRecipe(std::string recipeId) {
    SharedPtr<T> ShapedRecipe = SharedPtr<T>::make();
    return Global<Recipes>->addShapedRecipe(recipeId, ShapedRecipe->getResult(), ShapedRecipe->getRows(),
                                                       ShapedRecipe->getTypes(), ShapedRecipe->getTags(),
                                                       ShapedRecipe->getPriority(), ShapedRecipe->getConstructor());
}

template <class T>
    requires std::is_base_of<CustomShapelessRecipe, T>::value
static void registerShapelessRecipe(std::string recipeId) {
    SharedPtr<T> ShapedlessRecipe = SharedPtr<T>::make();
    return Global<Recipes>->addShapelessRecipe(recipeId, ShapedlessRecipe->getResult(), ShapedlessRecipe->getTypes(),
                                               ShapedlessRecipe->getTags(), ShapedlessRecipe->getPriority(),
                                               ShapedlessRecipe->getConstructor());
}

template <class T>
requires std::is_base_of<CustomFurnaceRecipe, T>::value
static void registerFurnaceRecipe() {
    SharedPtr<T> FurnaceRecipe = SharedPtr<T>::make();
    return Global<Recipes>->addFurnaceRecipeAuxData(FurnaceRecipe->getInput(), FurnaceRecipe->getResult(),
                                                    FurnaceRecipe->getTags());
}

namespace ActorRegistry {

ActorDataMap& GetActorDataRegistry() {
    return SymCall("?GetActorDataRegistry@@YAAEAV?$unordered_map@V?$basic_string"
                   "@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorFactoryData@@U?$ha"
                   "sh@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$"
                   "equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@"
                   "@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$a"
                   "llocator@D@2@@std@@UActorFactoryData@@@std@@@2@@std@@XZ",
                   ActorDataMap&)();
}

ActorMappingMap& GetActorMappingMap() {
    return *(std::unordered_map<ActorType, ActorMapping>*)dlsym_real(
        "?ENTITY_TYPE_MAP@@3V?$unordered_map@W4ActorType@@UActorMapping@@U?$hash@W4ActorType@@@std@@U?$equal_to@"
        "W4ActorType@@@4@V?$allocator@U?$pair@$$CBW4ActorType@@UActorMapping@@@std@@@4@@std@@A");
}


template <typename T>
__declspec(noinline) 
static std::unique_ptr<Actor> _actorFromClass(
    class ActorDefinitionGroup* definitions, struct ActorDefinitionIdentifier const& definitionName,
    class EntityContext& context) {
    return std::make_unique<T>(definitions, definitionName, context);
}

template <typename T, ActorType Type>
void _registerActorData(const std::string& fullName, bool allowSummon, std::optional<int> experimental,
                        float walkAnimSpeed = 0.0f) {
    ActorFactoryData afd;
    afd.mIdentifier = ActorDefinitionIdentifier(fullName);
    afd.mBaseIdentifier = ActorDefinitionIdentifier();
    afd.mAllowSummon = allowSummon;
    afd.mFactory = _actorFromClass<T>;
    afd.mExperimentIndex = experimental;
    afd.mActorType = Type;
    afd.mWalkAnimSpeed = walkAnimSpeed;
    GetActorDataRegistry()[fullName] =  afd;
}


}

#include <llapi/mc/ResourceLocation.hpp>

template <typename T,ActorType Type>
static void registerActor(const std::string& typeName, bool allowSummon, bool hasSpawnEgg) {
    ActorRegistry::_registerActorData<T, Type>(typeName, allowSummon, 0, 0.5);
    Global<ActorInfoRegistry>->registerActorInfo(
        ActorInfo((int)Type, ActorDefinitionIdentifier(typeName), hasSpawnEgg, allowSummon, 0));
    //ActorFactory::registerEntityMapping(Type, false, &ActorRegistry::_actorFromClass<T>, 0);
}

} // namespace mod
} // namespace ll

