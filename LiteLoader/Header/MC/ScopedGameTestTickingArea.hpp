// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScopedGameTestTickingArea {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCOPEDGAMETESTTICKINGAREA
public:
    class ScopedGameTestTickingArea& operator=(class ScopedGameTestTickingArea const &) = delete;
    ScopedGameTestTickingArea(class ScopedGameTestTickingArea const &) = delete;
    ScopedGameTestTickingArea() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCOPEDGAMETESTTICKINGAREA
public:
#endif
    MCAPI ScopedGameTestTickingArea(class Dimension &, class BoundingBox const &, std::string const &);
    MCAPI bool areChunksLoaded();
    MCAPI class std::shared_ptr<class ITickingArea> getTickingArea() const;
    MCAPI ~ScopedGameTestTickingArea();

//private:
    MCAPI void _removeTickingArea();

private:
    MCAPI static std::string const TICKING_AREA_PREFIX;


};