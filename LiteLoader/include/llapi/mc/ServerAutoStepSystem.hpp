/**
 * @file  ServerAutoStepSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerAutoStepSystem.
 *
 */
class ServerAutoStepSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERAUTOSTEPSYSTEM
public:
    class ServerAutoStepSystem& operator=(class ServerAutoStepSystem const &) = delete;
    ServerAutoStepSystem(class ServerAutoStepSystem const &) = delete;
    ServerAutoStepSystem() = delete;
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
     * @symbol ?tick\@?$IStrictTickingSystem\@V?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UCanStandOnSnowFlag\@\@\@\@V?$FlagComponent\@UHasLightweightFamilyFlag\@\@\@\@V?$FlagComponent\@UHorseFlag\@\@\@\@V?$FlagComponent\@UMobFlag\@\@\@\@V?$FlagComponent\@UParrotFlag\@\@\@\@UVehicleComponent\@\@V?$FlagComponent\@UCamelFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@V?$FlagComponent\@UAutoStepRequestFlag\@\@\@\@V?$FlagComponent\@UFallingBlockFlag\@\@\@\@USynchedActorDataComponent\@\@V?$FlagComponent\@UCollidableMobFlag\@\@\@\@\@\@U?$Read\@UAbilitiesComponent\@\@UActorTypeComponent\@\@UFallDistanceComponent\@\@UActorGameTypeComponent\@\@UVehicleComponent\@\@UMobBodyRotationComponent\@\@UPassengerComponent\@\@URenderRotationComponent\@\@UStandAnimationComponent\@\@UStateVectorComponent\@\@UAABBShapeComponent\@\@UActorRotationComponent\@\@UOffsetsComponent\@\@USynchedActorDataComponent\@\@UDimensionTypeComponent\@\@UMaxAutoStepComponent\@\@\@\@U?$Write\@UAABBShapeComponent\@\@V?$FlagComponent\@UCollidableMobNearFlag\@\@\@\@UMoveRequestComponent\@\@USlideOffsetComponent\@\@USubBBsComponent\@\@USideBySidePlaybackBlocksComponent\@\@\@\@U?$AddRemove\@$$V\@\@U?$GlobalRead\@UExternalDataComponent\@\@ULocalConstBlockSourceFactoryComponent\@\@ULocalSpatialEntityFetcherFactoryComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry &);
    /**
     * @vftbl 3
     * @symbol ?singleTick\@?$IStrictTickingSystem\@V?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UCanStandOnSnowFlag\@\@\@\@V?$FlagComponent\@UHasLightweightFamilyFlag\@\@\@\@V?$FlagComponent\@UHorseFlag\@\@\@\@V?$FlagComponent\@UMobFlag\@\@\@\@V?$FlagComponent\@UParrotFlag\@\@\@\@UVehicleComponent\@\@V?$FlagComponent\@UCamelFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@V?$FlagComponent\@UAutoStepRequestFlag\@\@\@\@V?$FlagComponent\@UFallingBlockFlag\@\@\@\@USynchedActorDataComponent\@\@V?$FlagComponent\@UCollidableMobFlag\@\@\@\@\@\@U?$Read\@UAbilitiesComponent\@\@UActorTypeComponent\@\@UFallDistanceComponent\@\@UActorGameTypeComponent\@\@UVehicleComponent\@\@UMobBodyRotationComponent\@\@UPassengerComponent\@\@URenderRotationComponent\@\@UStandAnimationComponent\@\@UStateVectorComponent\@\@UAABBShapeComponent\@\@UActorRotationComponent\@\@UOffsetsComponent\@\@USynchedActorDataComponent\@\@UDimensionTypeComponent\@\@UMaxAutoStepComponent\@\@\@\@U?$Write\@UAABBShapeComponent\@\@V?$FlagComponent\@UCollidableMobNearFlag\@\@\@\@UMoveRequestComponent\@\@USlideOffsetComponent\@\@USubBBsComponent\@\@USideBySidePlaybackBlocksComponent\@\@\@\@U?$AddRemove\@$$V\@\@U?$GlobalRead\@UExternalDataComponent\@\@ULocalConstBlockSourceFactoryComponent\@\@ULocalSpatialEntityFetcherFactoryComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@\@\@UEAAXAEAVEntityRegistry\@\@AEAVEntityContext\@\@\@Z
     */
    virtual void singleTick(class EntityRegistry &, class EntityContext &);
    /**
     * @vftbl 4
     * @symbol ?tick\@ServerAutoStepSystem\@\@EEAAXAEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UCanStandOnSnowFlag\@\@\@\@V?$FlagComponent\@UHasLightweightFamilyFlag\@\@\@\@V?$FlagComponent\@UHorseFlag\@\@\@\@V?$FlagComponent\@UMobFlag\@\@\@\@V?$FlagComponent\@UParrotFlag\@\@\@\@UVehicleComponent\@\@V?$FlagComponent\@UCamelFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@V?$FlagComponent\@UAutoStepRequestFlag\@\@\@\@V?$FlagComponent\@UFallingBlockFlag\@\@\@\@USynchedActorDataComponent\@\@V?$FlagComponent\@UCollidableMobFlag\@\@\@\@\@\@U?$Read\@UAbilitiesComponent\@\@UActorTypeComponent\@\@UFallDistanceComponent\@\@UActorGameTypeComponent\@\@UVehicleComponent\@\@UMobBodyRotationComponent\@\@UPassengerComponent\@\@URenderRotationComponent\@\@UStandAnimationComponent\@\@UStateVectorComponent\@\@UAABBShapeComponent\@\@UActorRotationComponent\@\@UOffsetsComponent\@\@USynchedActorDataComponent\@\@UDimensionTypeComponent\@\@UMaxAutoStepComponent\@\@\@\@U?$Write\@UAABBShapeComponent\@\@V?$FlagComponent\@UCollidableMobNearFlag\@\@\@\@UMoveRequestComponent\@\@USlideOffsetComponent\@\@USubBBsComponent\@\@USideBySidePlaybackBlocksComponent\@\@\@\@U?$AddRemove\@$$V\@\@U?$GlobalRead\@UExternalDataComponent\@\@ULocalConstBlockSourceFactoryComponent\@\@ULocalSpatialEntityFetcherFactoryComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@\@Z
     */
    virtual void tick(class StrictExecutionContext<struct Filter<class FlagComponent<struct CanStandOnSnowFlag>, class FlagComponent<struct HasLightweightFamilyFlag>, class FlagComponent<struct HorseFlag>, class FlagComponent<struct MobFlag>, class FlagComponent<struct ParrotFlag>, struct VehicleComponent, class FlagComponent<struct CamelFlag>, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct AutoStepRequestFlag>, class FlagComponent<struct FallingBlockFlag>, struct SynchedActorDataComponent, class FlagComponent<struct CollidableMobFlag>>, struct Read<struct AbilitiesComponent, struct ActorTypeComponent, struct FallDistanceComponent, struct ActorGameTypeComponent, struct VehicleComponent, struct MobBodyRotationComponent, struct PassengerComponent, struct RenderRotationComponent, struct StandAnimationComponent, struct StateVectorComponent, struct AABBShapeComponent, struct ActorRotationComponent, struct OffsetsComponent, struct SynchedActorDataComponent, struct DimensionTypeComponent, struct MaxAutoStepComponent>, struct Write<struct AABBShapeComponent, class FlagComponent<struct CollidableMobNearFlag>, struct MoveRequestComponent, struct SlideOffsetComponent, struct SubBBsComponent, struct SideBySidePlaybackBlocksComponent>, struct AddRemove<>, struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent, struct LocalSpatialEntityFetcherFactoryComponent>, struct GlobalWrite<>, struct EntityFactoryT<>> &);
    /**
     * @vftbl 5
     * @symbol ?singleTick\@?$IStrictTickingSystem\@V?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UCanStandOnSnowFlag\@\@\@\@V?$FlagComponent\@UHasLightweightFamilyFlag\@\@\@\@V?$FlagComponent\@UHorseFlag\@\@\@\@V?$FlagComponent\@UMobFlag\@\@\@\@V?$FlagComponent\@UParrotFlag\@\@\@\@UVehicleComponent\@\@V?$FlagComponent\@UCamelFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@V?$FlagComponent\@UAutoStepRequestFlag\@\@\@\@V?$FlagComponent\@UFallingBlockFlag\@\@\@\@USynchedActorDataComponent\@\@V?$FlagComponent\@UCollidableMobFlag\@\@\@\@\@\@U?$Read\@UAbilitiesComponent\@\@UActorTypeComponent\@\@UFallDistanceComponent\@\@UActorGameTypeComponent\@\@UVehicleComponent\@\@UMobBodyRotationComponent\@\@UPassengerComponent\@\@URenderRotationComponent\@\@UStandAnimationComponent\@\@UStateVectorComponent\@\@UAABBShapeComponent\@\@UActorRotationComponent\@\@UOffsetsComponent\@\@USynchedActorDataComponent\@\@UDimensionTypeComponent\@\@UMaxAutoStepComponent\@\@\@\@U?$Write\@UAABBShapeComponent\@\@V?$FlagComponent\@UCollidableMobNearFlag\@\@\@\@UMoveRequestComponent\@\@USlideOffsetComponent\@\@USubBBsComponent\@\@USideBySidePlaybackBlocksComponent\@\@\@\@U?$AddRemove\@$$V\@\@U?$GlobalRead\@UExternalDataComponent\@\@ULocalConstBlockSourceFactoryComponent\@\@ULocalSpatialEntityFetcherFactoryComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@\@\@MEAAXAEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UCanStandOnSnowFlag\@\@\@\@V?$FlagComponent\@UHasLightweightFamilyFlag\@\@\@\@V?$FlagComponent\@UHorseFlag\@\@\@\@V?$FlagComponent\@UMobFlag\@\@\@\@V?$FlagComponent\@UParrotFlag\@\@\@\@UVehicleComponent\@\@V?$FlagComponent\@UCamelFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@V?$FlagComponent\@UAutoStepRequestFlag\@\@\@\@V?$FlagComponent\@UFallingBlockFlag\@\@\@\@USynchedActorDataComponent\@\@V?$FlagComponent\@UCollidableMobFlag\@\@\@\@\@\@U?$Read\@UAbilitiesComponent\@\@UActorTypeComponent\@\@UFallDistanceComponent\@\@UActorGameTypeComponent\@\@UVehicleComponent\@\@UMobBodyRotationComponent\@\@UPassengerComponent\@\@URenderRotationComponent\@\@UStandAnimationComponent\@\@UStateVectorComponent\@\@UAABBShapeComponent\@\@UActorRotationComponent\@\@UOffsetsComponent\@\@USynchedActorDataComponent\@\@UDimensionTypeComponent\@\@UMaxAutoStepComponent\@\@\@\@U?$Write\@UAABBShapeComponent\@\@V?$FlagComponent\@UCollidableMobNearFlag\@\@\@\@UMoveRequestComponent\@\@USlideOffsetComponent\@\@USubBBsComponent\@\@USideBySidePlaybackBlocksComponent\@\@\@\@U?$AddRemove\@$$V\@\@U?$GlobalRead\@UExternalDataComponent\@\@ULocalConstBlockSourceFactoryComponent\@\@ULocalSpatialEntityFetcherFactoryComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@AEAVStrictEntityContext\@\@\@Z
     */
    virtual void singleTick(class StrictExecutionContext<struct Filter<class FlagComponent<struct CanStandOnSnowFlag>, class FlagComponent<struct HasLightweightFamilyFlag>, class FlagComponent<struct HorseFlag>, class FlagComponent<struct MobFlag>, class FlagComponent<struct ParrotFlag>, struct VehicleComponent, class FlagComponent<struct CamelFlag>, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct AutoStepRequestFlag>, class FlagComponent<struct FallingBlockFlag>, struct SynchedActorDataComponent, class FlagComponent<struct CollidableMobFlag>>, struct Read<struct AbilitiesComponent, struct ActorTypeComponent, struct FallDistanceComponent, struct ActorGameTypeComponent, struct VehicleComponent, struct MobBodyRotationComponent, struct PassengerComponent, struct RenderRotationComponent, struct StandAnimationComponent, struct StateVectorComponent, struct AABBShapeComponent, struct ActorRotationComponent, struct OffsetsComponent, struct SynchedActorDataComponent, struct DimensionTypeComponent, struct MaxAutoStepComponent>, struct Write<struct AABBShapeComponent, class FlagComponent<struct CollidableMobNearFlag>, struct MoveRequestComponent, struct SlideOffsetComponent, struct SubBBsComponent, struct SideBySidePlaybackBlocksComponent>, struct AddRemove<>, struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent, struct LocalSpatialEntityFetcherFactoryComponent>, struct GlobalWrite<>, struct EntityFactoryT<>> &, class StrictEntityContext &);
    /**
     * @symbol ?createServerAutoStepSystem\@ServerAutoStepSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createServerAutoStepSystem();
    /**
     * @symbol ?createServerAutoStepSystemSideBySide\@ServerAutoStepSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createServerAutoStepSystemSideBySide();

};
