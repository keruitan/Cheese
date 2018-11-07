// Cheese.h - Contains declarations of mouse hook functions
#pragma once
#include <tchar.h>

#ifdef CHEESE_EXPORTS
#define CHEESE_API __declspec(dllexport)
#else
#define CHEESE_API __declspec(dllimport)
#endif

// Sets mouse hook
extern "C" CHEESE_API BOOL setHook(HWND hWnd);

// Unhooks mouse hook
extern "C" CHEESE_API BOOL unHook(HWND hWnd);