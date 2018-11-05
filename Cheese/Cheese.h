// Cheese.h - Contains declarations of mouse hook functions
#pragma once
#include <tchar.h>

#ifdef CHEESE_EXPORTS
#define CHEESE_API __declspec(dllexport)
#else
#define CHEESE_API __declspec(dllimport)
#endif

#define UWM_MOUSEMOVE_MSG _T("UWM_MOUSEMOVE-016F0F50-40F8-4276-93B5-151FB0B24E8A")

// Sets mouse hook
extern "C" CHEESE_API BOOL setHook(HWND hWnd);

// Unhooks mouse hook
extern "C" CHEESE_API BOOL unHook(HWND hWnd);