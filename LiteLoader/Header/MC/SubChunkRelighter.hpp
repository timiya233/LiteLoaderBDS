// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "SubChunkBrightnessStorage.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SubChunkRelighter {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUBCHUNKRELIGHTER
public:
    class SubChunkRelighter& operator=(class SubChunkRelighter const &) = delete;
    SubChunkRelighter(class SubChunkRelighter const &) = delete;
    SubChunkRelighter() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SUBCHUNKRELIGHTER
public:
#endif
    MCAPI SubChunkRelighter(class BlockSource &, unsigned __int64, class ChunkPos const &, bool, bool);
    MCAPI struct SubChunk * _getAbsorption(struct SubChunkLightIndex, unsigned char &) const;
    MCAPI void _propagateBlockLight(struct SubChunkLightIndex, unsigned char);
    MCAPI void _propagateBlockLight();
    MCAPI void _propagateSkyLight(struct SubChunkLightIndex, unsigned char);
    MCAPI void _propagateSkyLight();
    MCAPI void _propagateSubtractiveBlockLight(struct SubChunkLightIndex, unsigned char);
    MCAPI void _propagateSubtractiveBlockLight();
    MCAPI void _propagateSubtractiveSkyLight(struct SubChunkLightIndex, unsigned char);
    MCAPI void _propagateSubtractiveSkyLight();
    MCAPI void _setLightHelper(struct SubChunkLightIndex, struct Brightness, struct Brightness, struct Brightness, struct Brightness, unsigned int, unsigned int);
    MCAPI void _setPropagatedBlockLightValue(struct SubChunkLightIndex, unsigned char);
    MCAPI void _setPropagatedSkyLightValue(struct SubChunkLightIndex, unsigned char);
    MCAPI void _setSkyLight(struct SubChunkLightIndex, struct Brightness, struct Brightness, struct Brightness, struct Brightness);
    MCAPI void getBlock(class Pos const &, class Block const *&, class Block const *&);
    MCAPI class Pos getCentralSubchunkOrigin();
    MCAPI struct SubChunkBrightnessStorage::LightPair getLightPair(class Pos const &) const;
    MCAPI void getTouchedSubChunks(std::vector<class Pos> &);
    MCAPI void setBlockLight(class Pos const &, struct Brightness, struct Brightness, struct Brightness, struct Brightness);
    MCAPI void setSkyLight(class Pos const &, struct Brightness, struct Brightness, struct Brightness, struct Brightness);
    MCAPI void update(class BlockPos const &, unsigned __int64);
    MCAPI ~SubChunkRelighter();
    MCAPI static class std::bitset<196608> computeAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits();
    MCAPI static class std::bitset<196608> computeOuterEdgeOfComputationBits();
    MCAPI static void initializeStatics();
    MCAPI static class std::bitset<196608> mAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits;
    MCAPI static class std::bitset<196608> mOuterEdgeOfComputationBits;
    MCAPI static class SpinLock sDarkSpinLock;
    MCAPI static struct SubChunk sFullyDarkSubChunk;
    MCAPI static struct SubChunk sFullyLitSubChunk;
    MCAPI static class SpinLock sLitSpinLock;
    MCAPI static void shutdownStatics();

//private:
    MCAPI struct SubChunk * _dirtySubChunk(struct SubChunkLightIndex, unsigned int &);
    MCAPI struct SubChunk * _getBlock(struct SubChunkLightIndex, class Block const *&, class Block const *&) const;
    MCAPI unsigned char _getLight(struct SubChunkLightIndex);
    MCAPI struct SubChunkBrightnessStorage::LightPair _getLightPair(struct SubChunkLightIndex) const;

private:


};