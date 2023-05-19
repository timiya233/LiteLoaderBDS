/**
 * @file  GlobalActorLegacyTickSystem.hpp
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
 * @brief MC class GlobalActorLegacyTickSystem.
 *
 */
class GlobalActorLegacyTickSystem : public ITickingSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GLOBALACTORLEGACYTICKSYSTEM
public:
    class GlobalActorLegacyTickSystem& operator=(class GlobalActorLegacyTickSystem const &) = delete;
    GlobalActorLegacyTickSystem(class GlobalActorLegacyTickSystem const &) = delete;
    GlobalActorLegacyTickSystem() = delete;
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
     * @symbol ?tick\@GlobalActorLegacyTickSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry &);
    /**
     * @vftbl 3
     * @symbol ?singleTick\@ITickingSystem\@\@UEAAXAEAVEntityRegistry\@\@AEAVEntityContext\@\@\@Z
     */
    virtual void singleTick(class EntityRegistry &, class EntityContext &);

};
