#pragma once

#ifdef MH_PLATFORM_WINDOWS
    #ifdef MH_BUILD_LIB
        #define MH_API __declspec(dllexport)
    #else
        #define MH_API __declspec(dllimport)
    #endif
#else
    #define MH_API /* define empty */
#endif

#ifdef MH_ENABLE_ASSERTS
    #define __debugBreak()
    #define MH_ASSERT(x, ...)      { if(!(x)) { MH_ERROR     ("Assertion Failed: {0}", __VA_ARGS__); __debugBreak(); } }
    #define MH_CORE_ASSERT(x, ...) { if(!(x)) { MH_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugBreak(); } }
#else
    #define MH_ASSERT(x, ...)
    #define MH_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)

#include "mhpch.h"
#include "Mayhem/Log.h"
