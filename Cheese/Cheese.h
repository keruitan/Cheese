// Cheese.h - Contains declarations of mouse hook functions
#pragma once

#ifdef CHEESE_EXPORTS
#define CHEESE_API __declspec(dllexport)
#else
#define CHEESE_API __declspec(dllimport)
#endif

// Sets mouse hook
extern "C" CHEESE_API void setHook(
	const unsigned long long a, const unsigned long long b);

// Unhooks mouse hook
extern "C" CHEESE_API bool unhook();