workspace "ApexIK"
	architecture "x64"
	configurations {
		"Debug",
		"Release"
	}

outdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

project "ApexIK"
	location "ApexIK"
	kind "StaticLib"
	language "C++"
	cppdialect "C++17"
	staticruntime "on"

	targetdir ("bin/" .. outdir)
	objdir ("bin-int/" .. outdir)

	files {
		"%{prj.name}/include/**.h",
		"%{prj.name}/src/**.cpp"
	}

	includedirs {
		"%{prj.name}/include",
		"dependencies/glm"
	}

	filter "system:windows"
	staticruntime "On"
	systemversion "latest"

	filter "configurations:Debug"
		runtime "Debug"
		symbols "on"

	filter "configurations:Debug"
		runtime "Release"
		optimize "on"