/**
 * @file  VanillaOffsetSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct VanillaOffsetSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLAOFFSETSYSTEM
public:
    struct VanillaOffsetSystem& operator=(struct VanillaOffsetSystem const &) = delete;
    VanillaOffsetSystem(struct VanillaOffsetSystem const &) = delete;
    VanillaOffsetSystem() = delete;
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
     * @symbol ?tick\@?$IStrictTickingSystem\@V?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@U?$Read\@UOffsetsComponent\@\@USynchedActorDataComponent\@\@U2\@V?$FlagComponent\@UPlayerIsSleepingFlag\@\@\@\@\@\@U?$Write\@UVanillaOffsetComponent\@\@\@\@U?$AddRemove\@$$V\@\@U?$GlobalRead\@UBaseGameVersionComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry &);
    /**
     * @vftbl 3
     * @symbol ?singleTick\@?$IStrictTickingSystem\@V?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@U?$Read\@UOffsetsComponent\@\@USynchedActorDataComponent\@\@U2\@V?$FlagComponent\@UPlayerIsSleepingFlag\@\@\@\@\@\@U?$Write\@UVanillaOffsetComponent\@\@\@\@U?$AddRemove\@$$V\@\@U?$GlobalRead\@UBaseGameVersionComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@\@\@UEAAXAEAVEntityRegistry\@\@AEAVEntityContext\@\@\@Z
     */
    virtual void singleTick(class EntityRegistry &, class EntityContext &);
    /**
     * @vftbl 4
     * @symbol ?tick\@VanillaOffsetSystem\@\@UEAAXAEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@U?$Read\@UOffsetsComponent\@\@USynchedActorDataComponent\@\@U2\@V?$FlagComponent\@UPlayerIsSleepingFlag\@\@\@\@\@\@U?$Write\@UVanillaOffsetComponent\@\@\@\@U?$AddRemove\@$$V\@\@U?$GlobalRead\@UBaseGameVersionComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@\@Z
     */
    virtual void tick(class StrictExecutionContext<struct Filter<class FlagComponent<struct PlayerComponentFlag>>, struct Read<struct OffsetsComponent, struct SynchedActorDataComponent, struct SynchedActorDataComponent, class FlagComponent<struct PlayerIsSleepingFlag>>, struct Write<struct VanillaOffsetComponent>, struct AddRemove<>, struct GlobalRead<struct BaseGameVersionComponent>, struct GlobalWrite<>, struct EntityFactoryT<>> &);
    /**
     * @vftbl 5
     * @symbol ?singleTick\@?$IStrictTickingSystem\@V?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@U?$Read\@UOffsetsComponent\@\@USynchedActorDataComponent\@\@U2\@V?$FlagComponent\@UPlayerIsSleepingFlag\@\@\@\@\@\@U?$Write\@UVanillaOffsetComponent\@\@\@\@U?$AddRemove\@$$V\@\@U?$GlobalRead\@UBaseGameVersionComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@\@\@MEAAXAEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@U?$Read\@UOffsetsComponent\@\@USynchedActorDataComponent\@\@U2\@V?$FlagComponent\@UPlayerIsSleepingFlag\@\@\@\@\@\@U?$Write\@UVanillaOffsetComponent\@\@\@\@U?$AddRemove\@$$V\@\@U?$GlobalRead\@UBaseGameVersionComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@AEAVStrictEntityContext\@\@\@Z
     */
    virtual void singleTick(class StrictExecutionContext<struct Filter<class FlagComponent<struct PlayerComponentFlag>>, struct Read<struct OffsetsComponent, struct SynchedActorDataComponent, struct SynchedActorDataComponent, class FlagComponent<struct PlayerIsSleepingFlag>>, struct Write<struct VanillaOffsetComponent>, struct AddRemove<>, struct GlobalRead<struct BaseGameVersionComponent>, struct GlobalWrite<>, struct EntityFactoryT<>> &, class StrictEntityContext &);
    /**
     * @symbol ?createSystem\@VanillaOffsetSystem\@\@SA?AUTickingSystemWithInfo\@\@_N0\@Z
     */
    MCAPI static struct TickingSystemWithInfo createSystem(bool, bool);

};