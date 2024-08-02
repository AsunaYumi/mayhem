#pragma once

#ifdef MH_PLATFORM_WINDOWS

extern Mayhem::Application *Mayhem::CreateApplication();

int main(int argc, char **argv)
{
    Mayhem::Log::Init();
    MH_CORE_WARN("hewwo!!");
    int a = 345;
    MH_INFO("uwuwuwu!! Var={0}", a);

    auto app = Mayhem::CreateApplication();
    app->Run();
    delete app;
}

#endif
