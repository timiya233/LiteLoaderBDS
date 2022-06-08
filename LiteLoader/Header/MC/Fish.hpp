// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "WaterAnimal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Fish : public WaterAnimal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FISH
public:
    class Fish& operator=(class Fish const &) = delete;
    Fish(class Fish const &) = delete;
    Fish() = delete;
#endif

public:
    /*10*/ virtual void initializeComponents(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*14*/ virtual ~Fish();
    /*40*/ virtual void __unk_vfn_40();
    /*48*/ virtual void normalTick();
    /*53*/ virtual bool startRiding(class Actor &);
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
    /*181*/ virtual void __unk_vfn_181();
    /*195*/ virtual void __unk_vfn_195();
    /*220*/ virtual void __unk_vfn_220();
    /*221*/ virtual void __unk_vfn_221();
    /*246*/ virtual void __unk_vfn_246();
    /*249*/ virtual void __unk_vfn_249();
    /*259*/ virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /*261*/ virtual void __unk_vfn_261();
    /*269*/ virtual void __unk_vfn_269();
    /*278*/ virtual void __unk_vfn_278();
    /*280*/ virtual void __unk_vfn_280();
    /*303*/ virtual void __unk_vfn_303();
    /*304*/ virtual void __unk_vfn_304();
    /*307*/ virtual void __unk_vfn_307();
    /*311*/ virtual void __unk_vfn_311();
    /*321*/ virtual void __unk_vfn_321();
    /*337*/ virtual bool createAIGoals();
    /*338*/ virtual void __unk_vfn_338();
    /*345*/ virtual void __unk_vfn_345();
    /*359*/ virtual void __unk_vfn_359();
    MCAPI Fish(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

protected:

private:

};