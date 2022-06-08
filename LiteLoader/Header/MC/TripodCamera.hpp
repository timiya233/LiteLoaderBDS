// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Mob.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class TripodCamera : public Mob {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRIPODCAMERA
public:
    class TripodCamera& operator=(class TripodCamera const &) = delete;
    TripodCamera(class TripodCamera const &) = delete;
    TripodCamera() = delete;
#endif

public:
    /*8*/ virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*14*/ virtual ~TripodCamera();
    /*18*/ virtual void remove();
    /*40*/ virtual void __unk_vfn_40();
    /*61*/ virtual void __unk_vfn_61();
    /*68*/ virtual void __unk_vfn_68();
    /*79*/ virtual float getShadowHeightOffs();
    /*80*/ virtual float getShadowRadius() const;
    /*82*/ virtual void __unk_vfn_82();
    /*88*/ virtual void __unk_vfn_88();
    /*94*/ virtual bool isPickable();
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
    /*262*/ virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /*269*/ virtual void __unk_vfn_269();
    /*278*/ virtual void __unk_vfn_278();
    /*280*/ virtual void __unk_vfn_280();
    /*303*/ virtual void __unk_vfn_303();
    /*304*/ virtual void __unk_vfn_304();
    /*307*/ virtual void __unk_vfn_307();
    /*311*/ virtual void __unk_vfn_311();
    /*321*/ virtual void __unk_vfn_321();
    /*338*/ virtual void __unk_vfn_338();
    /*344*/ virtual bool canExistWhenDisallowMob() const;
    /*345*/ virtual void __unk_vfn_345();
    /*359*/ virtual void __unk_vfn_359();
    /*
    inline bool isTargetable() const{
        bool (TripodCamera::*rv)() const;
        *((void**)&rv) = dlsym("?isTargetable@TripodCamera@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool interactPreventDefault(){
        bool (TripodCamera::*rv)();
        *((void**)&rv) = dlsym("?interactPreventDefault@TripodCamera@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline bool breaksFallingBlocks() const{
        bool (TripodCamera::*rv)() const;
        *((void**)&rv) = dlsym("?breaksFallingBlocks@TripodCamera@@UEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI TripodCamera(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI bool interactWithPlayer(class Player &);
    MCAPI bool isActivated() const;
    MCAPI void startTakingPicture(class Player &);

protected:

private:

};