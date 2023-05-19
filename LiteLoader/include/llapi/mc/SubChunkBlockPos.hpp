/**
 * @file  SubChunkBlockPos.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class SubChunkBlockPos {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUBCHUNKBLOCKPOS
public:
    class SubChunkBlockPos& operator=(class SubChunkBlockPos const &) = delete;
    SubChunkBlockPos(class SubChunkBlockPos const &) = delete;
    SubChunkBlockPos() = delete;
#endif

public:
    /**
     * @symbol ?index\@SubChunkBlockPos\@\@QEBAGXZ
     */
    MCAPI unsigned short index() const;
    /**
     * @symbol ?getIndexFromChunkBlockPos\@SubChunkBlockPos\@\@SAGAEBVChunkBlockPos\@\@\@Z
     */
    MCAPI static unsigned short getIndexFromChunkBlockPos(class ChunkBlockPos const &);

};
