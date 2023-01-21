#include <llapi/mc/Block.hpp>
#include <llapi/mc/BlockLegacy.hpp>
#include <llapi/mc/BlockTypeRegistry.hpp>
#include <llapi/mc/BlockDefinitionGroup.hpp>
#include <llapi/mc/HashedString.hpp>
#include <llapi/mc/BlockStateDefinition.hpp>
#include <llapi/mc/BlockStateGroup.hpp>
class RegisterBlock {
public:
    class BlockInfo {
    public:
        std::string mNameId;
        BlockShape mBlockShape;

        BlockInfo(std::string name, BlockShape shape) : mNameId(name), mBlockShape(shape) {}
        virtual void initBlock(BlockDefinitionGroup* blockGroup) = 0;
    };

    static std::vector<RegisterBlock::BlockInfo*> BlockRegistryList;
    template <class T, typename... Args>
    class BlockRegistryInfo : public BlockInfo {
    public:
        WeakPtr<BlockLegacy>* mBlock;
        std::tuple<Args...> mArgs;

        BlockRegistryInfo(std::string name, BlockShape shape, Args&&... args)
        : BlockInfo(name, shape), mArgs(args...), mBlock(new WeakPtr<BlockLegacy>()) {}

        virtual void initBlock(BlockDefinitionGroup* blockGroup) {
            *mBlock = registerBlock(blockGroup, std::index_sequence_for<Args...>{});
        }

        template <std::size_t... I>
        WeakPtr<BlockLegacy> registerBlock(BlockDefinitionGroup* blockGroup, std::index_sequence<I...>) {
            auto result = BlockTypeRegistry::registerBlock<T>(mNameId, blockGroup->getNextBlockId(), std::get<I>(mArgs)...);
            result->setIsVanillaBlock(false);
            result->initializeBlockStateGroup();
            return result;
        }
    };

    template <class T, typename... Args>
    static WeakPtr<BlockLegacy>* registerBlock(std::string name, BlockShape shape, Args&&... args) {
        BlockRegistryInfo<T, Args...>* decl = new BlockRegistryInfo<T, Args...>(name, shape, std::forward<Args>(args)...);
        BlockRegistryList.push_back(decl);
        return decl->mBlock;
    }
};

inline std::vector<RegisterBlock::BlockInfo*> RegisterBlock::BlockRegistryList{};