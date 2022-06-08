// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ContentLogFileEndPoint {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTENTLOGFILEENDPOINT
public:
    class ContentLogFileEndPoint& operator=(class ContentLogFileEndPoint const &) = delete;
    ContentLogFileEndPoint(class ContentLogFileEndPoint const &) = delete;
    ContentLogFileEndPoint() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTENTLOGFILEENDPOINT
public:
    MCVAPI void flush();
    MCVAPI bool isEnabled() const;
    MCVAPI void log(enum LogArea, enum LogLevel, char const *);
    MCVAPI bool logOnlyOnce() const;
    MCVAPI void setEnabled(bool);
#endif
    MCAPI ContentLogFileEndPoint(class Core::Path, class Core::Path);

//private:

private:
    MCAPI static class gsl::basic_string_span<char const, -1> const FILE_NAME;


};