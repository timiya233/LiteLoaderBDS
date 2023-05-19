/**
 * @file  TrailSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ITickingSystem.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TrailSystem.
 *
 */
class TrailSystem : public ITickingSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRAILSYSTEM
public:
    class TrailSystem& operator=(class TrailSystem const &) = delete;
    TrailSystem(class TrailSystem const &) = delete;
    TrailSystem() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?tick\@TrailSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry &);
    /**
     * @vftbl 3
     * @symbol ?singleTick\@ITickingSystem\@\@UEAAXAEAVEntityRegistry\@\@AEAVEntityContext\@\@\@Z
     */
    virtual void singleTick(class EntityRegistry &, class EntityContext &);

//private:
    /**
     * @symbol ?_tickComponent\@TrailSystem\@\@CAXAEAVActorOwnerComponent\@\@AEAVTrailComponent\@\@\@Z
     */
    MCAPI static void _tickComponent(class ActorOwnerComponent &, class TrailComponent &);

private:

};
