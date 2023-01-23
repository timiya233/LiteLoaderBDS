#pragma once

#include <llapi/mc/Block.hpp>
#include <llapi/mc/BlockLegacy.hpp>
#include <llapi/mc/BlockTypeRegistry.hpp>
#include <llapi/mc/BlockDefinitionGroup.hpp>
#include <llapi/mc/HashedString.hpp>

class BlockRegistry {
public:

    class BlockInfo {
    public:
        std::string mNameId;
        BlockShape mBlockShape;

        BlockInfo(std::string name, BlockShape shape) : mNameId(std::move(name)), mBlockShape(shape) {}
        virtual void initialize(BlockDefinitionGroup* blockGroup) = 0;
    };

    static std::vector<BlockRegistry::BlockInfo*> BlockRegistryList;
    static std::vector<WeakPtr<BlockLegacy>*> registeredBlocks;

    template <class T, typename... Args>
    class BlockRegistryInfo : public BlockInfo {
    public:
        WeakPtr<BlockLegacy>* mBlock;
        std::tuple<Args...> mArgs;

        BlockRegistryInfo(std::string name, BlockShape shape, Args&&... args)
        : BlockInfo(name, shape), mArgs(args...), mBlock(new WeakPtr<BlockLegacy>()) {}

        // register to mc block system.
        void initialize(BlockDefinitionGroup* blockGroup) override {
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
    static WeakPtr<BlockLegacy> registerBlock(std::string name, BlockShape shape, Args&&... args) {
        auto* decl = new BlockRegistryInfo<T, Args...>(name, shape, std::forward<Args>(args)...);
        BlockRegistryList.emplace_back(decl);
        return *(decl->mBlock);
    }

    // Order of register blocks:
    // BedrockBlockTypes -> VanillaBlockTypes -> BlockDefinitionGroup
    static WeakPtr<BlockLegacy> registerBlock(const std::string& typeName, const Material& material) {
        auto exists = BlockTypeRegistry::lookupByName(typeName, false);
        if (exists && exists.get())
            return exists;
        auto lastBlockId = Global<BlockDefinitionGroup>->getNextBlockId();
        auto legacyBlock = SymCall("??$registerBlock@VBlockLegacy@@HAEBVMaterial@@@BlockTypeRegistry@@SAAEAVBlockLegacy@@AEBVHashedString@@$$QEAHAEBVMaterial@@@Z",
                                   BlockLegacy*, HashedString const &, DWORD*, class Material const &)(typeName, &lastBlockId, material);
        auto weakLegacy = legacyBlock->createWeakPtr();
        if (!weakLegacy)
            return {};
        weakLegacy->setIsVanillaBlock(false);
        weakLegacy->initializeBlockStateGroup();
        registeredBlocks.emplace_back(&weakLegacy);
        return weakLegacy;
    }

};

inline std::vector<BlockRegistry::BlockInfo*> BlockRegistry::BlockRegistryList;
inline std::vector<WeakPtr<BlockLegacy>*> BlockRegistry::registeredBlocks;