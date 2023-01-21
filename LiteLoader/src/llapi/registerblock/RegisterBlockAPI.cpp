#include <llapi/RegisterBlockAPI.h>
#include <llapi/mc/BlockLegacy.hpp>
#include <llapi/mc/Material.hpp>
#include <llapi/mc/ItemRegistry.hpp>
#include <llapi/mc/BlockItem.hpp>
#include <llapi/mc/VanillaTags.hpp>
#include <llapi/mc/VanillaItems.hpp>
#include <llapi/LoggerAPI.h>
class TestBlock : public BlockLegacy {
public:
    TestBlock(const std::string& name, int id) : BlockLegacy(name, id, Material::getMaterial(MaterialType::Stone)) {
        setSolid(true);
        setIsInteraction(false);
        setIsVanillaBlock(false);
        setCreativeGroup("itemGroup.name.fiercecraft.bookshelves");
        setDestroyTime(0.5);
        setExplodeable(3.0);
        addTag(VanillaTags::Wood);
        setCategory(CreativeItemCategory::Custom);
    }
};

inline static WeakPtr<BlockLegacy>* mTest;

THook(void, "?registerBlocks@BlockDefinitionGroup@@QEAAXXZ", BlockDefinitionGroup* a1) {
    mTest = RegisterBlock::registerBlock<TestBlock>("fiercecraft:warped_bookshelf", BlockShape::BLOCK);
    //register block
    for (auto block : RegisterBlock::BlockRegistryList) {
        block->initBlock(a1);
    }
    original(a1);
}
#include <llapi/mc/ItemRegistryRef.hpp>
THook(void, "?registerItems@VanillaItems@@SAXVItemRegistryRef@@AEBVBaseGameVersion@@AEBVExperiments@@_N@Z",
    ItemRegistryRef* a1, void* a2, void* a3, bool a4){
    original(a1, a2, a3, a4);
    //a1->registerBlockItem<BlockItem>(mTest->get()->getDescriptionId(), *mTest->get());
}

#include <llapi/mc/VanillaItems.hpp>
#include <llapi/mc/ActorInfoRegistry.hpp>
#include <llapi/mc/CreativeItemRegistry.hpp>
#include <llapi/mc/Item.hpp>

THook(void, "?serverInitCreativeItemsCallback@VanillaItems@@SAXVItemRegistryRef@@PEAVActorInfoRegistry@@PEAVBlockDefinitionGroup@@PEAVCreativeItemRegistry@@_NAEBVBaseGameVersion@@AEBVExperiments@@@Z",
       ItemRegistryRef* a1, ActorInfoRegistry* a2, BlockDefinitionGroup* a3, CreativeItemRegistry* a4, bool a5,
     void* a6, void* a7) {
    original(a1, a2, a3, a4, a5, a6, a7);
    Item::addCreativeItem(mTest->get()->getDefaultState());
}