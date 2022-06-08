// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Animal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PolarBear : public Animal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POLARBEAR
public:
    class PolarBear& operator=(class PolarBear const &) = delete;
    PolarBear(class PolarBear const &) = delete;
    PolarBear() = delete;
#endif

public:
    /*14*/ virtual ~PolarBear();
    /*40*/ virtual void __unk_vfn_40();
    /*48*/ virtual void normalTick();
    /*61*/ virtual void __unk_vfn_61();
    /*68*/ virtual void __unk_vfn_68();
    /*82*/ virtual void __unk_vfn_82();
    /*88*/ virtual void __unk_vfn_88();
    /*95*/ virtual void __unk_vfn_95();
    /*98*/ virtual void __unk_vfn_98();
    /*105*/ virtual void __unk_vfn_105();
    /*107*/ virtual void __unk_vfn_107();
    /*108*/ virtual void __unk_vfn_108();
    /*109*/ virtual void __unk_vfn_109();
    /*173*/ virtual bool canFreeze() const;
    /*181*/ virtual void __unk_vfn_181();
    /*195*/ virtual void __unk_vfn_195();
    /*220*/ virtual void __unk_vfn_220();
    /*221*/ virtual void __unk_vfn_221();
    /*246*/ virtual void __unk_vfn_246();
    /*249*/ virtual void __unk_vfn_249();
    /*261*/ virtual void __unk_vfn_261();
    /*269*/ virtual void __unk_vfn_269();
    /*278*/ virtual void __unk_vfn_278();
    /*280*/ virtual void __unk_vfn_280();
    /*303*/ virtual void __unk_vfn_303();
    /*304*/ virtual void __unk_vfn_304();
    /*307*/ virtual void __unk_vfn_307();
    /*311*/ virtual void __unk_vfn_311();
    /*321*/ virtual void __unk_vfn_321();
    /*338*/ virtual void __unk_vfn_338();
    /*345*/ virtual void __unk_vfn_345();
    /*359*/ virtual void __unk_vfn_359();
    MCAPI PolarBear(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI float getStandingAnimationScale(float);

protected:

private:
    MCAPI static float const STAND_ANIMATION_TICKS;

};