// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BaseMoveToBlockGoal.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class FertilizeFarmBlockGoal : public BaseMoveToBlockGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FERTILIZEFARMBLOCKGOAL
public:
    class FertilizeFarmBlockGoal& operator=(class FertilizeFarmBlockGoal const &) = delete;
    FertilizeFarmBlockGoal(class FertilizeFarmBlockGoal const &) = delete;
    FertilizeFarmBlockGoal() = delete;
#endif

public:
    /*0*/ virtual ~FertilizeFarmBlockGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
    /*11*/ virtual bool isValidTarget(class BlockSource &, class BlockPos const &);
    MCAPI FertilizeFarmBlockGoal(class Mob &);

protected:
    MCAPI bool tryFertilizeCrop(class BlockSource &, class BlockPos const &);

private:
    MCAPI bool _findFertilizer();

};