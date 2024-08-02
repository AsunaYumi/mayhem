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