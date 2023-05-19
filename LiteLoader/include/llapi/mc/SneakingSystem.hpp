/**
 * @file  SneakingSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SneakingSystem.
 *
 */
class SneakingSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SNEAKINGSYSTEM
public:
    class SneakingSystem& operator=(class SneakingSystem const &) = delete;
    SneakingSystem(class SneakingSystem const &) = delete;
    SneakingSystem() = delete;
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
     * @symbol ?tick\@?$IStrictTickingSystem\@V?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UActorTickedFlag\@\@\@\@\@\@U?$Read\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@U?$Write\@USneakingComponent\@\@VActorOwnerComponent\@\@\@\@U?$AddRemove\@$$V\@\@U?$GlobalRead\@$$V\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry &);
    /**
     * @vftbl 3
     * @symbol ?singleTick\@?$IStrictTickingSystem\@V?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UActorTickedFlag\@\@\@\@\@\@U?$Read\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@U?$Write\@USneakingComponent\@\@VActorOwnerComponent\@\@\@\@U?$AddRemove\@$$V\@\@U?$GlobalRead\@$$V\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@\@\@UEAAXAEAVEntityRegistry\@\@AEAVEntityContext\@\@\@Z
     */
    virtual void singleTick(class EntityRegistry &, class EntityContext &);
    /**
     * @vftbl 4
     * @symbol ?tick\@SneakingSystem\@\@EEAAXAEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UActorTickedFlag\@\@\@\@\@\@U?$Read\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@U?$Write\@USneakingComponent\@\@VActorOwnerComponent\@\@\@\@U?$AddRemove\@$$V\@\@U?$GlobalRead\@$$V\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@\@Z
     */
    virtual void tick(class StrictExecutionContext<struct Filter<class FlagComponent<struct ActorTickedFlag>>, struct Read<class FlagComponent<struct PlayerComponentFlag>>, struct Write<struct SneakingComponent, class ActorOwnerComponent>, struct AddRemove<>, struct GlobalRead<>, struct GlobalWrite<>, struct EntityFactoryT<>> &);
    /**
     * @vftbl 5
     * @symbol ?singleTick\@?$IStrictTickingSystem\@V?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UActorTickedFlag\@\@\@\@\@\@U?$Read\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@U?$Write\@USneakingComponent\@\@VActorOwnerComponent\@\@\@\@U?$AddRemove\@$$V\@\@U?$GlobalRead\@$$V\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@\@\@MEAAXAEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UActorTickedFlag\@\@\@\@\@\@U?$Read\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@U?$Write\@USneakingComponent\@\@VActorOwnerComponent\@\@\@\@U?$AddRemove\@$$V\@\@U?$GlobalRead\@$$V\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@AEAVStrictEntityContext\@\@\@Z
     */
    virtual void singleTick(class StrictExecutionContext<struct Filter<class FlagComponent<struct ActorTickedFlag>>, struct Read<class FlagComponent<struct PlayerComponentFlag>>, struct Write<struct SneakingComponent, class ActorOwnerComponent>, struct AddRemove<>, struct GlobalRead<>, struct GlobalWrite<>, struct EntityFactoryT<>> &, class StrictEntityContext &);
    /**
     * @symbol ?_tickSneakingSystem\@SneakingSystem\@\@SAXAEAVStrictEntityContext\@\@AEBV?$FlagComponent\@UPlayerComponentFlag\@\@\@\@AEAUSneakingComponent\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _tickSneakingSystem(class StrictEntityContext &, class FlagComponent<struct PlayerComponentFlag> const &, struct SneakingComponent &, class ActorOwnerComponent &);

};
