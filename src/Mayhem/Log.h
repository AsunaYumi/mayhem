#pragma once

#include "Core.h"
#include <memory>

#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_color_sinks.h>

namespace Mayhem
{

    class MH_API Log
    {
    public:
        static void Init();
        inline static std::shared_ptr<spdlog::logger>& GetCoreLogger  () { return s_CoreLogger  ; }
        inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
    private:
        static std::shared_ptr<spdlog::logger> s_CoreLogger;
        static std::shared_ptr<spdlog::logger> s_ClientLogger;
    };

}

// Core log macros
#define MH_CORE_ERROR(...) ::Mayhem::Log::GetCoreLogger()->error(__VA_ARGS__)
#define MH_CORE_WARN(...)  ::Mayhem::Log::GetCoreLogger()->warn (__VA_ARGS__)
#define MH_CORE_INFO(...)  ::Mayhem::Log::GetCoreLogger()->info (__VA_ARGS__)
#define MH_CORE_TRACE(...) ::Mayhem::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define MH_CORE_FATAL(...) ::Mayhem::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define MH_ERROR(...)      ::Mayhem::Log::GetClientLogger()->error(__VA_ARGS__)
#define MH_WARN(...)       ::Mayhem::Log::GetClientLogger()->warn (__VA_ARGS__)
#define MH_INFO(...)       ::Mayhem::Log::GetClientLogger()->info (__VA_ARGS__)
#define MH_TRACE(...)      ::Mayhem::Log::GetClientLogger()->trace(__VA_ARGS__)
#define MH_FATAL(...)      ::Mayhem::Log::GetClientLogger()->fatal(__VA_ARGS__)
