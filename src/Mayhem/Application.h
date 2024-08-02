#pragma once

#include "Core.h"

namespace Mayhem
{

    class MH_API Application
    {

    public:

        Application();
        virtual ~Application();

        void Run();

    private:

    };

    // To be defined by user application!
    Application *CreateApplication();

}
