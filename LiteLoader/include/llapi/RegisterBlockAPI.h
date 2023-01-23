#pragma once

#include <llapi/mc/Block.hpp>
#include <llapi/mc/BlockLegacy.hpp>
#include <llapi/mc/BlockTypeRegistry.hpp>
#include <llapi/mc/BlockDefinitionGroup.hpp>
#include <llapi/mc/HashedString.hpp>
#include <llapi/mc/VanillaBlockTypes.hpp>
class BlockRegistry {
public:

    static std::vector<WeakPtr<BlockLegacy>> registeredBlocks;

    template <class T, typename... Args>
    static WeakPtr<BlockLegacy> registerBlock(const std::string& typeName, Args&&... args) {
        auto exists = BlockTypeRegistry::lookupByName(typeName, false);
        if (exists && exists.get())
            return exists;
        auto lastBlockId = Global<BlockDefinitionGroup>->getNextBlockId();
        auto legacyBlock = BlockTypeRegistry::registerBlock<T>(typeName, lastBlockId , args...);
        auto weakLegacy = legacyBlock.createWeakPtr();
        if (!weakLegacy)
            return {};
        weakLegacy->setIsVanillaBlock(false);
        registeredBlocks.emplace_back(weakLegacy);
        return weakLegacy;
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
        registeredBlocks.emplace_back(weakLegacy);
        return weakLegacy;
    }

};

inline std::vector<WeakPtr<BlockLegacy>> BlockRegistry::registeredBlocks{};