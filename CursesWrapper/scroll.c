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
  Name:								scroll

  Synopsis:
	int scroll(WINDOW *win);
	int scrl(int n);
	int wscrl(WINDOW *win, int n);

  Return Value:
	All functions return OK on success and ERR on error.

  Portability				     X/Open    BSD    SYS V
	scroll					Y	Y	Y
	scrl					Y	-      4.0
	wscrl					Y	-      4.0
*/

WRAP_API int
wrap_scroll(WINDOW *win)
{
	return scroll(win);
}

WRAP_API int
wrap_wscrl(WINDOW *win, int n)
{
	return wscrl(win, n);
}

