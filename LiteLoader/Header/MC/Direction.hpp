// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Direction {

#define AFTER_EXTRA
// Add Member There
public:
enum Type;

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIRECTION
public:
    class Direction& operator=(class Direction const &) = delete;
    Direction(class Direction const &) = delete;
    Direction() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DIRECTION
public:
#endif
    MCAPI static enum Direction::Type convertFacingDirectionToDirection(unsigned char);
    MCAPI static enum Direction::Type getDirection(float, float);

//private:

private:
    MCAPI static enum Direction::Type const DIRECTION_CLOCKWISE[];
    MCAPI static enum Direction::Type const DIRECTION_COUNTER_CLOCKWISE[];
    MCAPI static unsigned char const DIRECTION_FACING[];
    MCAPI static enum Direction::Type const DIRECTION_OPPOSITE[];
    MCAPI static enum Direction::Type const FACING_DIRECTION[];
    MCAPI static int const STEP_X[];
    MCAPI static int const STEP_Z[];


};