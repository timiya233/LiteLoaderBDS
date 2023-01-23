#include <llapi/RegisterBlockAPI.h>
#include <llapi/LoggerAPI.h>

#include <llapi/mc/Material.hpp>
#include <llapi/mc/BlockItem.hpp>
#include <llapi/mc/VanillaTags.hpp>
#include <llapi/mc/ItemState.hpp>
#include "llapi/mc/CompoundTag.hpp"

Logger blockRegLogger("BlockRegistry");
typedef std::vector<std::pair<std::string, CompoundTag>> BlockProperties;

class TestBlock : public BlockLegacy {
public:
    TestBlock(const std::string& name, int id) : BlockLegacy(name, id, Material::getMaterial(MaterialType::Dirt)) {

    }

};

inline static WeakPtr<BlockLegacy> mTest;
inline static WeakPtr<BlockLegacy> mTest2;
#include <llapi/mc/VanillaStates.hpp>
// event: RegisterBlocksEvent
THook(void, "?registerBlocks@BlockDefinitionGroup@@QEAAXXZ", BlockDefinitionGroup* a1) {
    original(a1);

    mTest = BlockRegistry::registerBlock<TestBlock>("fiercecraft:ancient_debris_marker");

    //auto& material = Material::getMaterial(MaterialType::Dirt);
    //mTest = BlockRegistry::registerBlock("fiercecraft:ancient_debris_marker", material);
    mTest->setDestroyTime(1.5);
    mTest->setExplodeable(10.0);
    mTest->setCategory(CreativeItemCategory::Nature);
    auto StoneType = (ItemState*)dlsym_real("?StoneType@VanillaStates@@3V?$ItemStateVariant@W4StoneType@@@@B");
    mTest->addTag(VanillaTags::Dirt);
    mTest->setCreativeGroup("itemGroup.name.fiercecraft.bookshelves");
    mTest->setCreativeEnumState(*StoneType);
    mTest->initializeBlockStateGroup();

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
        menu_category->putBoolean("is_hidden_in_commands", *((BYTE *)(weakLegacy.get()) + 272));
        tag->putCompound("menu_category", std::move(menu_category));

        properties.emplace_back(std::make_pair(weakLegacy->getTypeName(), std::move(*tag)));
    }
    return properties;
}