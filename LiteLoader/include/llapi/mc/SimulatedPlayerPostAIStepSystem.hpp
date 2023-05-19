/**
 * @file  SimulatedPlayerPostAIStepSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SimulatedPlayerPostAIStepSystem.
 *
 */
class SimulatedPlayerPostAIStepSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIMULATEDPLAYERPOSTAISTEPSYSTEM
public:
    class SimulatedPlayerPostAIStepSystem& operator=(class SimulatedPlayerPostAIStepSystem const &) = delete;
    SimulatedPlayerPostAIStepSystem(class SimulatedPlayerPostAIStepSystem const &) = delete;
    SimulatedPlayerPostAIStepSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@SimulatedPlayerPostAIStepSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol ?_doSimulatedPlayerPostAIStepSystem\@SimulatedPlayerPostAIStepSystem\@\@CAXAEBVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _doSimulatedPlayerPostAIStepSystem(class StrictEntityContext const &, class ActorOwnerComponent &);
    /**
     * @symbol ?_tickSimulatedPlayerPostAIStepSystem\@SimulatedPlayerPostAIStepSystem\@\@CAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@V?$FlagComponent\@USimulatedPlayerFlag\@\@\@\@\@\@VActorOwnerComponent\@\@\@\@\@Z
     */
    MCAPI static void _tickSimulatedPlayerPostAIStepSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct SimulatedPlayerFlag>>, class ActorOwnerComponent>);

private:

};
