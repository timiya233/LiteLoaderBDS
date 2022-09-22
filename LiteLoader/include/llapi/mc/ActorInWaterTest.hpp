/**
 * @file  ActorInWaterTest.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorInWaterTest.
 *
 */
class ActorInWaterTest : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORINWATERTEST
public:
    class ActorInWaterTest& operator=(class ActorInWaterTest const &) = delete;
    ActorInWaterTest(class ActorInWaterTest const &) = delete;
    ActorInWaterTest() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ActorInWaterTest();
    /**
     * @hash   -139566687
     * @vftbl  2
     * @symbol ?evaluate@ActorInWaterTest@@UEBA_NAEBUFilterContext@@@Z
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @hash   419622609
     * @vftbl  4
     * @symbol ?getName@ActorInWaterTest@@UEBA?AV?$basic_string_span@$$CBD$0?0@gsl@@XZ
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};