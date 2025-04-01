#pragma once

// I defined HZ_PLATFORM_WINDOWS in the preproccesor settings for this project
// and SandBox project, but i didn't define HAZEL_API in the SandBox project
#ifdef HZ_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL
		#define HAZEL_API __declspec(dllexport)
	#else
		#define HAZEL_API __declspec(dllimport)
	#endif
#else
	#error Hazel only support Windows!
#endif