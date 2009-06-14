/*
 * CursesSharp
 * 
 * Copyright 2009 Robert Konklewski
 * 
 * This library is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or (at your
 * option) any later version.
 *
 * This library is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
 * License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * www.gnu.org/licenses/>.
 * 
 */

#include "wrapper.h"

/*
  Name:								addstr

  Synopsis:
	int addstr(const char *str);
	int addnstr(const char *str, int n);
	int waddstr(WINDOW *win, const char *str);
	int waddnstr(WINDOW *win, const char *str, int n);
	int mvaddstr(int y, int x, const char *str);
	int mvaddnstr(int y, int x, const char *str, int n);
	int mvwaddstr(WINDOW *win, int y, int x, const char *str);
	int mvwaddnstr(WINDOW *win, int y, int x, const char *str, int n);

	int addwstr(const wchar_t *wstr);
	int addnwstr(const wchar_t *wstr, int n);
	int waddwstr(WINDOW *win, const wchar_t *wstr);
	int waddnwstr(WINDOW *win, const wchar_t *wstr, int n);
	int mvaddwstr(int y, int x, const wchar_t *wstr);
	int mvaddnwstr(int y, int x, const wchar_t *wstr, int n);
	int mvwaddwstr(WINDOW *win, int y, int x, const wchar_t *wstr);
	int mvwaddnwstr(WINDOW *win, int y, int x, const wchar_t *wstr, int n);

  Return Value:
	All functions return OK or ERR.

  Portability				     X/Open    BSD    SYS V
	addstr					Y	Y	Y
	waddstr					Y	Y	Y
	mvaddstr				Y	Y	Y
	mvwaddstr				Y	Y	Y
	addnstr					Y	-      4.0
	waddnstr				Y	-      4.0
	mvaddnstr				Y	-      4.0
	mvwaddnstr				Y	-      4.0
	addwstr					Y
	waddwstr				Y
	mvaddwstr				Y
	mvwaddwstr				Y
	addnwstr				Y
	waddnwstr				Y
	mvaddnwstr				Y
	mvwaddnwstr				Y
*/

WRAP_API int
wrap_waddnstr(WINDOW *win, char *str, int n)
{
	return waddnstr(win, str, n);
}

WRAP_API int
wrap_mvwaddnstr(WINDOW *win, int y, int x, char *str, int n)
{
	return mvwaddnstr(win, y, x, str, n);
}

WRAP_API int
wrap_waddnwstr(WINDOW *win, wchar_t *str, int n)
{
	return waddnwstr(win, str, n);
}

WRAP_API int
wrap_mvwaddnwstr(WINDOW *win, int y, int x, wchar_t *str, int n)
{
	return mvwaddnwstr(win, y, x, str, n);
}
