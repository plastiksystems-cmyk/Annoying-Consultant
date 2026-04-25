#ifndef AC_WIN32
#define AC_WIN32

#ifdef _WIN32
    #define DLL_EXPORT __declspec(dllexport)
#else
    #define DLL_EXPORT
#endif

#endif