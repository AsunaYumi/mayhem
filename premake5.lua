workspace "Mayhem"
    architecture "x64"

    configurations
    {
        "Debug",
        "Release",
        "Dist"
    }

outputDir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

project "Mayhem"
    location "src/Mayhem"
    kind "SharedLib"
    language "C++"

    targetdir ("out/"   .. outputDir .. "/%{prj.name}")
    objdir    ("out-o/" .. outputDir .. "/%{prj.name}")

    files
    {
        "src/%{prj.name}/**.h",
        "src/%{prj.name}/**.cpp"
    }

    includedirs
    {
        "vendor/spdlog/include"
    }

    filter "system:windows"
        cppdialect "C++17"
        staticruntime "On"
        systemversion "latest"

        defines
        {
            "MH_PLATFORM_WINDOWS",
            "MH_BUILD_LIB"
        }

    filter "configurations:Debug"
        defines "MH_DEBUG"
        symbols "On"

    filter "configurations:Release"
        defines "MH_RELEASE"
        optimize "On"

    filter "configurations:Dist"
        defines "MH_DIST"
        optimize "On"

project "App"
    location "src/App"
    kind "ConsoleApp"
    language "C++"

    targetdir ("out/"   .. outputDir .. "/%{prj.name}")
    objdir    ("out-o/" .. outputDir .. "/%{prj.name}")

    files
    {
        "src/%{prj.name}/**.h",
        "src/%{prj.name}/**.cpp"
    }

    includedirs
    {
        "vendor/spdlog/include",
        "src/Mayhem",
        "src"
    }

    links
    {
        "Mayhem"
    }

    filter "system:windows"
        cppdialect "C++17"
        staticruntime "On"
        systemversion "latest"

        defines
        {
            "MH_PLATFORM_WINDOWS"
        }

    filter "configurations:Debug"
        defines "MH_DEBUG"
        symbols "On"

    filter "configurations:Release"
        defines "MH_RELEASE"
        optimize "On"

    filter "configurations:Dist"
        defines "MH_DIST"
        optimize "On"

