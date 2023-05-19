/**
 * @file  TwistingVinesClusterFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TwistingVinesClusterFeature.
 *
 */
class TwistingVinesClusterFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TWISTINGVINESCLUSTERFEATURE
public:
    class TwistingVinesClusterFeature& operator=(class TwistingVinesClusterFeature const &) = delete;
    TwistingVinesClusterFeature(class TwistingVinesClusterFeature const &) = delete;
    TwistingVinesClusterFeature() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?place\@TwistingVinesClusterFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;

};
