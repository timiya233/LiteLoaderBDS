#include <llapi/RegisterBlockAPI.h>
#include <llapi/LoggerAPI.h>

#include <llapi/mc/Material.hpp>
#include <llapi/mc/BlockItem.hpp>
#include <llapi/mc/VanillaTags.hpp>
#include <llapi/mc/ItemState.hpp>
#include "llapi/mc/CompoundTag.hpp"

Logger blockRegLogger("BlockRegistry");
typedef std::vector<std::pair<std::string, CompoundTag>> BlockProperties;

inline static WeakPtr<BlockLegacy> mTest;

// event: RegisterBlocksEvent
THook(void, "?registerBlocks@BlockDefinitionGroup@@QEAAXXZ", BlockDefinitionGroup* a1) {
    original(a1);
    //mTest = RegisterBlock::registerBlock<TestBlock>("fiercecraft:warped_bookshelf", BlockShape::BLOCK);
    //register block
    //for (auto block : RegisterBlock::BlockRegistryList) {
    //    block->initBlock(a1);
    //}
    auto& material = Material::getMaterial(MaterialType::Dirt);
    mTest = BlockRegistry::registerBlock("ojang:test", material);
    mTest->setDestroyTime(1.5);
    mTest->setExplodeable(10.0);
    mTest->setCategory(CreativeItemCategory::Nature);
    auto StoneType = (ItemState*)dlsym_real("?StoneType@VanillaStates@@3V?$ItemStateVariant@W4StoneType@@@@B");
    // mTest->addState(*StoneType); ->mismatched.
    mTest->addTag(VanillaTags::Stone);
    mTest->setCreativeGroup("itemGroup.name.stone");
    mTest->setCreativeEnumState(*StoneType);
}

TInstanceHook(BlockProperties, "?generateServerBlockProperties@BlockDefinitionGroup@@QEBA?AV?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VCompoundTag@@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VCompoundTag@@@std@@@2@@std@@XZ",
              BlockDefinitionGroup)
{
    auto properties = original(this);
    for (auto& weakLegacy : BlockRegistry::registeredBlocks) {
        auto tag = CompoundTag::create();

        // menu_category
        auto menu_category = CompoundTag::create();
        //menu_category->putString("group", "itemGroup.name.stone");
        //menu_category->putString("category", "nature"); // StringFromCreativeItemCategory
        menu_category->putBoolean("is_hidden_in_commands", *((BYTE *)(weakLegacy->get()) + 272));
        tag->putCompound("menu_category", std::move(menu_category));

        properties.emplace_back(std::make_pair("ojang:test", std::move(*tag)));
    }
    return properties;
}

/*

#include <llapi/mc/ActorInfoRegistry.hpp>
#include <llapi/mc/CreativeItemRegistry.hpp>
#include <llapi/mc/Item.hpp>
#include <llapi/mc/ItemRegistry.hpp>

THook(void, "?serverInitCreativeItemsCallback@VanillaItems@@SAXVItemRegistryRef@@PEAVActorInfoRegistry@@PEAVBlockDefinitionGroup@@PEAVCreativeItemRegistry@@_NAEBVBaseGameVersion@@AEBVExperiments@@@Z",
      ItemRegistryRef* a1, ActorInfoRegistry* a2, BlockDefinitionGroup* a3, CreativeItemRegistry* a4, bool a5,
      void* a6, void* a7) {
    original(a1, a2, a3, a4, a5, a6, a7);
    Item::addCreativeItem(mTest->getDefaultState());
}

THook(unsigned __int64, "?computeBlockTypeRegistryChecksum@BlockTypeRegistry@@SA_KAEBVBaseGameVersion@@@Z",
      void* self, void* a2)
{
    // If checksum == 0, the client will not check the blocks.
    return 0;
}

*/