/**
 * @file  Pos.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class Pos {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POS
public:
    class Pos& operator=(class Pos const &) = delete;
    Pos(class Pos const &) = delete;
    Pos() = delete;
#endif

public:
    /**
     * @symbol ?toString\@Pos\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string toString() const;

};
