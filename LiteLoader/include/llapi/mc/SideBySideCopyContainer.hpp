/**
 * @file  SideBySideCopyContainer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class SideBySideCopyContainer {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIDEBYSIDECOPYCONTAINER
public:
    class SideBySideCopyContainer& operator=(class SideBySideCopyContainer const &) = delete;
    SideBySideCopyContainer(class SideBySideCopyContainer const &) = delete;
    SideBySideCopyContainer() = delete;
#endif

public:
    /**
     * @symbol ?getSideBySideCopy\@SideBySideCopyContainer\@\@QEBA?AV?$optional\@VStrictEntityContext\@\@\@std\@\@W4SideBySideExtractionId\@\@\@Z
     */
    MCAPI class std::optional<class StrictEntityContext> getSideBySideCopy(enum class SideBySideExtractionId) const;

};
