#include <llapi/RegisterBlockAPI.h>
#include <llapi/mc/BlockLegacy.hpp>
#include <llapi/mc/Material.hpp>
#include <llapi/mc/ItemRegistry.hpp>
#include <llapi/mc/BlockItem.hpp>
#include <llapi/mc/VanillaTags.hpp>

class TestBlock : public BlockLegacy {
public:
    TestBlock(const std::string& name, int id) : BlockLegacy(name, id, Material::getMaterial(MaterialType::Stone)) {
        setSolid(true);
        setIsInteraction(false);
        setCreativeGroup("itemGroup.name.fiercecraft.bookshelves");
        setDestroyTime(0.5);
        setExplodeable(3.0);
        addTag(VanillaTags::Wood);
        setCategory(CreativeItemCategory::Custom);
    }
};



THook(void, "?initServerData@ItemRegistryRef@@QEBAXAEAVResourcePackManager@@AEBVExperiments@@W4ItemVersion@@@Z",
      __int64 a1, __int64 a2, __int64 a3, char a4) {
    //ItemRegistry::registerBlockItem<BlockItem>(mtest->get()->getDescriptionId(), *mtest->get());
    return;
}

THook(void, "?registerBlocks@BlockDefinitionGroup@@QEAAXXZ", BlockDefinitionGroup* a1) {
    auto mtest = RegisterBlock::registerBlock<TestBlock>("fiercecraft:warped_bookshelf", BlockShape::BLOCK);
    //register block
    for (auto block : RegisterBlock::BlockRegistryList)
        block->initBlock(a1);
    return original(a1);
}
