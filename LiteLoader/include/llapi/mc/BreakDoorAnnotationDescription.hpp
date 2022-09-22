/**
 * @file  BreakDoorAnnotationDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BreakDoorAnnotationDescription.
 *
 */
class BreakDoorAnnotationDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREAKDOORANNOTATIONDESCRIPTION
public:
    class BreakDoorAnnotationDescription& operator=(class BreakDoorAnnotationDescription const &) = delete;
    BreakDoorAnnotationDescription(class BreakDoorAnnotationDescription const &) = delete;
    BreakDoorAnnotationDescription() = delete;
#endif

public:
    /**
     * @hash   -1621391404
     * @vftbl  0
     * @symbol ?getJsonName@BreakDoorAnnotationDescription@@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @symbol __unk_destructor_1
     */
    virtual ~BreakDoorAnnotationDescription();
    /**
     * @hash   1259984623
     * @vftbl  2
     * @symbol ?deserializeData@BreakDoorAnnotationDescription@@UEAAXUDeserializeDataParams@@@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @hash   1756886521
     * @vftbl  3
     * @symbol ?serializeData@BreakDoorAnnotationDescription@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void serializeData(class Json::Value &) const;

};