#pragma once
#ifdef HZ_PLATFORM_WINDOWS
#ifdef HZ_BUILD_DLL
#define XHAZEL_API _declspec(dllexport)
#else
#define XHAZEL_API _declspec(dllimport)
#endif
#else
#error Hazel only support Windows

#endif