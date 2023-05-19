/**
 * @file  ClientStopGlidingSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct ClientStopGlidingSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIENTSTOPGLIDINGSYSTEM
public:
    struct ClientStopGlidingSystem& operator=(struct ClientStopGlidingSystem const &) = delete;
    ClientStopGlidingSystem(struct ClientStopGlidingSystem const &) = delete;
    ClientStopGlidingSystem() = delete;
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
     * @symbol ?tick\@?$IStrictTickingSystem\@V?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@U?$Read\@UStateVectorComponent\@\@UCollisionBoxDefinitionComponent\@\@\@\@U?$Write\@UAABBShapeComponent\@\@UOffsetsComponent\@\@UPlayerActionComponent\@\@USynchedActorDataComponent\@\@\@\@U?$AddRemove\@V?$FlagComponent\@UStopGlidingRequestFlag\@\@\@\@V?$FlagComponent\@UWasPenetratingLastFrameFlag\@\@\@\@\@\@U?$GlobalRead\@$$V\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry &);
    /**
     * @vftbl 3
     * @symbol ?singleTick\@?$IStrictTickingSystem\@V?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@U?$Read\@UStateVectorComponent\@\@UCollisionBoxDefinitionComponent\@\@\@\@U?$Write\@UAABBShapeComponent\@\@UOffsetsComponent\@\@UPlayerActionComponent\@\@USynchedActorDataComponent\@\@\@\@U?$AddRemove\@V?$FlagComponent\@UStopGlidingRequestFlag\@\@\@\@V?$FlagComponent\@UWasPenetratingLastFrameFlag\@\@\@\@\@\@U?$GlobalRead\@$$V\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@\@\@UEAAXAEAVEntityRegistry\@\@AEAVEntityContext\@\@\@Z
     */
    virtual void singleTick(class EntityRegistry &, class EntityContext &);
    /**
     * @vftbl 4
     * @symbol ?tick\@ClientStopGlidingSystem\@\@UEAAXAEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@U?$Read\@UStateVectorComponent\@\@UCollisionBoxDefinitionComponent\@\@\@\@U?$Write\@UAABBShapeComponent\@\@UOffsetsComponent\@\@UPlayerActionComponent\@\@USynchedActorDataComponent\@\@\@\@U?$AddRemove\@V?$FlagComponent\@UStopGlidingRequestFlag\@\@\@\@V?$FlagComponent\@UWasPenetratingLastFrameFlag\@\@\@\@\@\@U?$GlobalRead\@$$V\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@\@Z
     */
    virtual void tick(class StrictExecutionContext<struct Filter<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct PlayerComponentFlag>>, struct Read<struct StateVectorComponent, struct CollisionBoxDefinitionComponent>, struct Write<struct AABBShapeComponent, struct OffsetsComponent, struct PlayerActionComponent, struct SynchedActorDataComponent>, struct AddRemove<class FlagComponent<struct StopGlidingRequestFlag>, class FlagComponent<struct WasPenetratingLastFrameFlag>>, struct GlobalRead<>, struct GlobalWrite<>, struct EntityFactoryT<>> &);
    /**
     * @vftbl 5
     * @symbol ?singleTick\@?$IStrictTickingSystem\@V?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@U?$Read\@UStateVectorComponent\@\@UCollisionBoxDefinitionComponent\@\@\@\@U?$Write\@UAABBShapeComponent\@\@UOffsetsComponent\@\@UPlayerActionComponent\@\@USynchedActorDataComponent\@\@\@\@U?$AddRemove\@V?$FlagComponent\@UStopGlidingRequestFlag\@\@\@\@V?$FlagComponent\@UWasPenetratingLastFrameFlag\@\@\@\@\@\@U?$GlobalRead\@$$V\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@\@\@MEAAXAEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@U?$Read\@UStateVectorComponent\@\@UCollisionBoxDefinitionComponent\@\@\@\@U?$Write\@UAABBShapeComponent\@\@UOffsetsComponent\@\@UPlayerActionComponent\@\@USynchedActorDataComponent\@\@\@\@U?$AddRemove\@V?$FlagComponent\@UStopGlidingRequestFlag\@\@\@\@V?$FlagComponent\@UWasPenetratingLastFrameFlag\@\@\@\@\@\@U?$GlobalRead\@$$V\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@AEAVStrictEntityContext\@\@\@Z
     */
    virtual void singleTick(class StrictExecutionContext<struct Filter<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct PlayerComponentFlag>>, struct Read<struct StateVectorComponent, struct CollisionBoxDefinitionComponent>, struct Write<struct AABBShapeComponent, struct OffsetsComponent, struct PlayerActionComponent, struct SynchedActorDataComponent>, struct AddRemove<class FlagComponent<struct StopGlidingRequestFlag>, class FlagComponent<struct WasPenetratingLastFrameFlag>>, struct GlobalRead<>, struct GlobalWrite<>, struct EntityFactoryT<>> &, class StrictEntityContext &);
    /**
     * @symbol ?createClientStopGlidingSystem\@ClientStopGlidingSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createClientStopGlidingSystem();

};