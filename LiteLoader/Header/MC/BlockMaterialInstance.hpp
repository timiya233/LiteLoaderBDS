// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct BlockMaterialInstance {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKMATERIALINSTANCE
public:
    BlockMaterialInstance(struct BlockMaterialInstance const &) = delete;
    BlockMaterialInstance() = delete;
#endif

public:
    MCAPI struct BlockMaterialInstance & operator=(struct BlockMaterialInstance &&);
    MCAPI struct BlockMaterialInstance & operator=(struct BlockMaterialInstance const &);
    MCAPI ~BlockMaterialInstance();

protected:

private:
    MCAPI static class std::initializer_list<struct std::pair<std::string, enum BlockRenderLayer>> const blockRenderLayerEnumValues;
    MCAPI static class BidirectionalUnorderedMap<std::string, enum BlockRenderLayer> const renderLayerNameBiMap;

};