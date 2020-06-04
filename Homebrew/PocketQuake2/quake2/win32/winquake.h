/*
Copyright (C) 1997-2001 Id Software, Inc.

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

*/
// winquake.h: Win32-specific Quake header file

#pragma warning( disable : 4229 )  // mgraph gets this

#include <windows.h>

#ifndef _WIN32_WCE
#include <dsound.h>
#endif

#ifndef _WIN32_WCE
#define	WINDOW_STYLE	(WS_OVERLAPPED|WS_BORDER|WS_CAPTION|WS_VISIBLE)
#else
#define	WINDOW_STYLE	WS_VISIBLE
#endif

extern	HINSTANCE	global_hInstance;

#ifndef _WIN32_WCE
extern LPDIRECTSOUND pDS;
extern LPDIRECTSOUNDBUFFER pDSBuf;
#endif

extern DWORD gSndBufSize;

extern HWND			cl_hwnd;
extern qboolean		ActiveApp, Minimized;

void IN_Activate (qboolean active);
void IN_MouseEvent (int mstate);

#ifdef _WIN32_WCE
void IN_CEMouseButton (int x, int y, int pressed);
void IN_CEMouseMove(int x, int y);
#endif

extern int		window_center_x, window_center_y;
extern RECT		window_rect;