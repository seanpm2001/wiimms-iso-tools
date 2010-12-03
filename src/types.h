
/***************************************************************************
 *                                                                         *
 *   This file is part of the WIT project.                                 *
 *   Visit http://wit.wiimm.de/ for project details and sources.           *
 *                                                                         *
 *   Copyright (c) 2009-2010 by Dirk Clemens <wiimm@wiimm.de>              *
 *                                                                         *
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   See file gpl-2.0.txt or http://www.gnu.org/licenses/gpl-2.0.txt       *
 *                                                                         *
 ***************************************************************************/

#ifndef WIT_TYPES_H
#define WIT_TYPES_H 1

#define _GNU_SOURCE 1

#include <sys/types.h>
#include <limits.h>

///////////////////////////////////////////////////////////////////////////////

typedef unsigned char		u8;
typedef unsigned short		u16;
typedef unsigned int		u32;
typedef unsigned long long	u64;

typedef signed char		s8;
typedef signed short		s16;
typedef signed int		s32;
typedef signed long long	s64;

///////////////////////////////////////////////////////////////////////////////

typedef unsigned char		uchar;
typedef unsigned int		uint;
typedef unsigned long		ulong;

typedef const char *		ccp;

typedef enum bool { false, true } __attribute__ ((packed)) bool;

///////////////////////////////////////////////////////////////////////////////

#define NEW_ID_PARM 1		// [2do] [obsolete]
#define NEW_COPY_IMAGE 1	// [2do] [obsolete]

#if NEW_ID_PARM
  #define NEW_EXTRACT 1		// [2do] [obsolete] only possible if NEW_ID_PARM
#else
  #define NEW_EXTRACT 0
#endif

///////////////////////////////////////////////////////////////////////////////

#endif // WIT_TYPES_H

