#pragma once

/*
INCLUDES
*/
#include <Windows.h>
#include <time.h>
#include <Commctrl.h>
#include "resource.h"
#include "Error.h"

#pragma comment (lib, "Comctl32.lib")

/*
DEFINES
*/
#define TRAINERNAME "TMUF Ultra Trainer Copymark"
#define GAMENAME "TmForever"
#define GAMEVERSION "2.11.26"
#define VERSION "Version: 2.1.5.7"

/*
Globals
*/
extern HINSTANCE g_hInstance;
extern HWND g_hWindow;

void add_log(const char * fmt, ...);