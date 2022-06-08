// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MoveControl {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVECONTROL
public:
    class MoveControl& operator=(class MoveControl const &) = delete;
    MoveControl(class MoveControl const &) = delete;
#endif


public:
    /*0*/ virtual ~MoveControl();
    /*1*/ virtual void initializeInternal(class Mob &, struct MoveControlDescription *);
    /*2*/ virtual void tick(class MoveControlComponent &, class Mob &);
    /*3*/ virtual void setWantedPosition(class MoveControlComponent &, class Mob &, class Vec3 const &, float);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVECONTROL
public:
#endif
    MCAPI MoveControl();
    MCAPI static class Vec3 getDiffVector(class Vec3 const &, class Mob const &);

//protected:
    MCAPI float calculateMoveSpeed(class MoveControlComponent const &, class Mob &, class Vec3 const &, float);
    MCAPI float calculateYRotation(class MoveControlComponent const &, class Mob const &, class Vec3 const &, float);

//private:

protected:

private:
    MCAPI static float const MIN_DELTA_TO_JUMP;
    MCAPI static float const MIN_DELTA_TO_JUMP_UNDERWATER;
    MCAPI static float const MIN_DELTA_TO_MOVE;
    MCAPI static float const MIN_SPEED;
    MCAPI static float const MIN_SPEED_SQR;


};