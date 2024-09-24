#ifndef _NULLSOFT_WINAMP_GEN_DEVICE_PROVIDER_PLUGIN_HEADER
#define _NULLSOFT_WINAMP_GEN_DEVICE_PROVIDER_PLUGIN_HEADER

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#include <wtypes.h>

#define PLUGIN_VERSION_MAJOR		1
#define PLUGIN_VERSION_MINOR		1

// {51B54A05-B711-4509-80AE-5A0AAA502FA5}
DEFINE_GUID(PLUGIN_LANGUAGE_ID, 
0x51b54a05, 0xb711, 0x4509, 0x80, 0xae, 0x5a, 0xa, 0xaa, 0x50, 0x2f, 0xa5);


HINSTANCE Plugin_GetInstance(void);
HWND Plugin_GetWinampWindow(void);

#endif //_NULLSOFT_WINAMP_GEN_DEVICE_PROVIDER_PLUGIN_HEADER
