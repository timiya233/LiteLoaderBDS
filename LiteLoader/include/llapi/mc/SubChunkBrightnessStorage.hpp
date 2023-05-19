/**
 * @file  SubChunkBrightnessStorage.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class SubChunkBrightnessStorage {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUBCHUNKBRIGHTNESSSTORAGE
public:
    class SubChunkBrightnessStorage& operator=(class SubChunkBrightnessStorage const &) = delete;
    SubChunkBrightnessStorage(class SubChunkBrightnessStorage const &) = delete;
    SubChunkBrightnessStorage() = delete;
#endif

public:
    /**
     * @symbol ?getLightValueAtIndex\@SubChunkBrightnessStorage\@\@QEBAEG\@Z
     */
    MCAPI unsigned char getLightValueAtIndex(unsigned short) const;
    /**
     * @symbol ?setLightValueAtIndex\@SubChunkBrightnessStorage\@\@QEAAXGE\@Z
     */
    MCAPI void setLightValueAtIndex(unsigned short, unsigned char);

};
