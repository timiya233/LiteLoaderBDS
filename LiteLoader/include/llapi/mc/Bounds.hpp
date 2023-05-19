/**
 * @file  Bounds.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure Bounds.
 *
 */
struct Bounds {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOUNDS
public:
    struct Bounds& operator=(struct Bounds const &) = delete;
    Bounds(struct Bounds const &) = delete;
    Bounds() = delete;
#endif

public:
    /**
     * @symbol ??0Bounds\@\@QEAA\@AEBVBlockPos\@\@0HW4Option\@0\@\@Z
     */
    MCAPI Bounds(class BlockPos const &, class BlockPos const &, int, enum class Bounds::Option);
    /**
     * @symbol ??0Bounds\@\@QEAA\@VBlockPos\@\@0HFF\@Z
     */
    MCAPI Bounds(class BlockPos, class BlockPos, int, short, short);
    /**
     * @symbol ?idxFromWorldPos\@Bounds\@\@QEBAHAEBVPos\@\@\@Z
     */
    MCAPI int idxFromWorldPos(class Pos const &) const;

};