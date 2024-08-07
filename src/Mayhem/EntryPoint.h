#pragma once

#include "Mayhem/Log.h"
#include <stdio.h>

extern Mayhem::Application *Mayhem::CreateApplication();

int main(int argc, char **argv)
{
    try
    {
    printf("cmon do smth\n");
    MH_CORE_INFO("Launching...");
    auto app = Mayhem::CreateApplication();
    app->Run();
    delete app;
    }
    catch(std::runtime_error e)
    {
        printf("ERROR %s\n", e.what());
    }
}

#ifdef MH_PLATFORM_WINDOWS

#endif
