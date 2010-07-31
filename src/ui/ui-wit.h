
/***************************************************************************
 *                                                                         *
 *   This file is part of the WIT project. It is automatically generated   *
 *   by the project helper 'gen-ui'.                                       *
 *                                                                         *
 *                      ==> DO NOT EDIT THIS FILE <==                      *
 *                                                                         *
 *   Visit http://wit.wiimm.de/ for project details and sources.           *
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


#ifndef WIT_UI_WIT_H
#define WIT_UI_WIT_H
#include "lib-std.h"
#include "ui.h"

//
///////////////////////////////////////////////////////////////////////////////
///////////////                enum enumOptions                 ///////////////
///////////////////////////////////////////////////////////////////////////////

typedef enum enumOptions
{
	OPT_NONE,

	//----- command specific options -----

	OPT_SOURCE,
	OPT_RECURSE,
	OPT_RDEPTH,
	OPT_INCLUDE,
	OPT_INCLUDE_PATH,
	OPT_EXCLUDE,
	OPT_EXCLUDE_PATH,
	OPT_IGNORE,
	OPT_IGNORE_FST,
	OPT_PSEL,
	OPT_RAW,
	OPT_PMODE,
	OPT_SNEEK,
	OPT_ID,
	OPT_NAME,
	OPT_MODIFY,
	OPT_REGION,
	OPT_IOS,
	OPT_ENC,
	OPT_DEST,
	OPT_DEST2,
	OPT_SPLIT,
	OPT_SPLIT_SIZE,
	OPT_TRUNC,
	OPT_CHUNK_MODE,
	OPT_CHUNK_SIZE,
	OPT_MAX_CHUNKS,
	OPT_PRESERVE,
	OPT_UPDATE,
	OPT_OVERWRITE,
	OPT_REMOVE,
	OPT_WDF,
	OPT_ISO,
	OPT_CISO,
	OPT_WBFS,
	OPT_FST,
	OPT_FILES,
	OPT_ITIME,
	OPT_MTIME,
	OPT_CTIME,
	OPT_ATIME,
	OPT_TIME,
	OPT_LONG,
	OPT_SHOW,
	OPT_UNIQUE,
	OPT_NO_HEADER,
	OPT_SECTIONS,
	OPT_SORT,
	OPT_LIMIT,

	OPT__N_SPECIFIC, // == 50 

	//----- global options -----

	OPT_VERSION,
	OPT_HELP,
	OPT_XHELP,
	OPT_WIDTH,
	OPT_QUIET,
	OPT_VERBOSE,
	OPT_PROGRESS,
	OPT_LOGGING,
	OPT_ESC,
	OPT_IO,
	OPT_TITLES,
	OPT_UTF_8,
	OPT_NO_UTF_8,
	OPT_LANG,
	OPT_TEST,
	OPT_HOOK,

	OPT__N_TOTAL // == 66

} enumOptions;

//
///////////////////////////////////////////////////////////////////////////////
///////////////               enum enumOptionsBit               ///////////////
///////////////////////////////////////////////////////////////////////////////

typedef enum enumOptionsBit
{
	//----- command specific options -----

	OB_SOURCE		= 1llu << OPT_SOURCE,
	OB_RECURSE		= 1llu << OPT_RECURSE,
	OB_RDEPTH		= 1llu << OPT_RDEPTH,
	OB_INCLUDE		= 1llu << OPT_INCLUDE,
	OB_INCLUDE_PATH		= 1llu << OPT_INCLUDE_PATH,
	OB_EXCLUDE		= 1llu << OPT_EXCLUDE,
	OB_EXCLUDE_PATH		= 1llu << OPT_EXCLUDE_PATH,
	OB_IGNORE		= 1llu << OPT_IGNORE,
	OB_IGNORE_FST		= 1llu << OPT_IGNORE_FST,
	OB_PSEL			= 1llu << OPT_PSEL,
	OB_RAW			= 1llu << OPT_RAW,
	OB_PMODE		= 1llu << OPT_PMODE,
	OB_SNEEK		= 1llu << OPT_SNEEK,
	OB_ID			= 1llu << OPT_ID,
	OB_NAME			= 1llu << OPT_NAME,
	OB_MODIFY		= 1llu << OPT_MODIFY,
	OB_REGION		= 1llu << OPT_REGION,
	OB_IOS			= 1llu << OPT_IOS,
	OB_ENC			= 1llu << OPT_ENC,
	OB_DEST			= 1llu << OPT_DEST,
	OB_DEST2		= 1llu << OPT_DEST2,
	OB_SPLIT		= 1llu << OPT_SPLIT,
	OB_SPLIT_SIZE		= 1llu << OPT_SPLIT_SIZE,
	OB_TRUNC		= 1llu << OPT_TRUNC,
	OB_CHUNK_MODE		= 1llu << OPT_CHUNK_MODE,
	OB_CHUNK_SIZE		= 1llu << OPT_CHUNK_SIZE,
	OB_MAX_CHUNKS		= 1llu << OPT_MAX_CHUNKS,
	OB_PRESERVE		= 1llu << OPT_PRESERVE,
	OB_UPDATE		= 1llu << OPT_UPDATE,
	OB_OVERWRITE		= 1llu << OPT_OVERWRITE,
	OB_REMOVE		= 1llu << OPT_REMOVE,
	OB_WDF			= 1llu << OPT_WDF,
	OB_ISO			= 1llu << OPT_ISO,
	OB_CISO			= 1llu << OPT_CISO,
	OB_WBFS			= 1llu << OPT_WBFS,
	OB_FST			= 1llu << OPT_FST,
	OB_FILES		= 1llu << OPT_FILES,
	OB_ITIME		= 1llu << OPT_ITIME,
	OB_MTIME		= 1llu << OPT_MTIME,
	OB_CTIME		= 1llu << OPT_CTIME,
	OB_ATIME		= 1llu << OPT_ATIME,
	OB_TIME			= 1llu << OPT_TIME,
	OB_LONG			= 1llu << OPT_LONG,
	OB_SHOW			= 1llu << OPT_SHOW,
	OB_UNIQUE		= 1llu << OPT_UNIQUE,
	OB_NO_HEADER		= 1llu << OPT_NO_HEADER,
	OB_SECTIONS		= 1llu << OPT_SECTIONS,
	OB_SORT			= 1llu << OPT_SORT,
	OB_LIMIT		= 1llu << OPT_LIMIT,

	//----- group & command options -----

	OB_GRP_TITLES		= 0,

	OB_GRP_SOURCE		= OB_SOURCE
				| OB_RECURSE
				| OB_RDEPTH,

	OB_GRP_EXCLUDE		= OB_INCLUDE
				| OB_INCLUDE_PATH
				| OB_EXCLUDE
				| OB_EXCLUDE_PATH,

	OB_GRP_XSOURCE		= OB_GRP_SOURCE
				| OB_GRP_EXCLUDE,

	OB_GRP_XXSOURCE		= OB_GRP_SOURCE
				| OB_GRP_EXCLUDE
				| OB_IGNORE
				| OB_IGNORE_FST,

	OB_GRP_XTIME		= OB_ITIME
				| OB_MTIME
				| OB_CTIME
				| OB_ATIME,

	OB_GRP_TIME		= OB_GRP_XTIME
				| OB_TIME,

	OB_GRP_PARTITIONS	= OB_PSEL
				| OB_RAW,

	OB_GRP_FILES		= OB_PMODE
				| OB_FILES
				| OB_SNEEK,

	OB_GRP_PATCH		= OB_ID
				| OB_NAME
				| OB_MODIFY
				| OB_REGION
				| OB_IOS
				| OB_ENC,

	OB_GRP_SPLIT_CHUNK	= OB_SPLIT
				| OB_SPLIT_SIZE
				| OB_TRUNC
				| OB_CHUNK_MODE
				| OB_CHUNK_SIZE
				| OB_MAX_CHUNKS,

	OB_CMD_HELP		= ~(option_t)0,

	OB_CMD_VERSION		= OB_SECTIONS
				| OB_LONG,

	OB_CMD_TEST		= ~(option_t)0,

	OB_CMD_ERROR		= OB_SECTIONS
				| OB_NO_HEADER
				| OB_LONG,

	OB_CMD_EXCLUDE		= OB_EXCLUDE
				| OB_EXCLUDE_PATH,

	OB_CMD_TITLES		= OB_GRP_TITLES,

	OB_CMD_FILELIST		= OB_GRP_XXSOURCE
				| OB_LONG,

	OB_CMD_FILETYPE		= OB_GRP_XXSOURCE
				| OB_NO_HEADER
				| OB_LONG,

	OB_CMD_ISOSIZE		= OB_GRP_XXSOURCE
				| OB_NO_HEADER
				| OB_LONG,

	OB_CMD_CREATE		= OB_ID
				| OB_IOS
				| OB_DEST
				| OB_DEST2,

	OB_CMD_DUMP		= OB_GRP_TITLES
				| OB_GRP_XSOURCE
				| OB_IGNORE_FST
				| OB_GRP_PARTITIONS
				| OB_GRP_FILES
				| OB_GRP_PATCH
				| OB_LONG
				| OB_SHOW,

	OB_CMD_DREGION		= OB_GRP_XSOURCE,

	OB_CMD_ID6		= OB_GRP_XSOURCE
				| OB_IGNORE_FST
				| OB_UNIQUE
				| OB_SORT,

	OB_CMD_LIST		= OB_GRP_TITLES
				| OB_GRP_XSOURCE
				| OB_IGNORE_FST
				| OB_UNIQUE
				| OB_SORT
				| OB_SECTIONS
				| OB_NO_HEADER
				| OB_LONG
				| OB_GRP_TIME,

	OB_CMD_LIST_L		= OB_CMD_LIST,

	OB_CMD_LIST_LL		= OB_CMD_LIST_L,

	OB_CMD_LIST_LLL		= OB_CMD_LIST_LL,

	OB_CMD_ILIST		= OB_GRP_XXSOURCE
				| OB_GRP_PARTITIONS
				| OB_GRP_FILES
				| OB_LONG
				| OB_NO_HEADER
				| OB_SHOW
				| OB_SORT,

	OB_CMD_ILIST_L		= OB_CMD_ILIST,

	OB_CMD_ILIST_LL		= OB_CMD_ILIST_L,

	OB_CMD_DIFF		= OB_GRP_TITLES
				| OB_GRP_XXSOURCE
				| OB_GRP_PARTITIONS
				| OB_GRP_FILES
				| OB_LONG
				| OB_DEST
				| OB_DEST2
				| OB_WDF
				| OB_ISO
				| OB_CISO
				| OB_WBFS
				| OB_FST,

	OB_CMD_EXTRACT		= OB_GRP_TITLES
				| OB_GRP_XXSOURCE
				| OB_GRP_PARTITIONS
				| OB_GRP_FILES
				| OB_SORT
				| OB_DEST
				| OB_DEST2
				| OB_GRP_PATCH
				| OB_PRESERVE
				| OB_OVERWRITE,

	OB_CMD_COPY		= OB_CMD_EXTRACT
				| OB_UPDATE
				| OB_REMOVE
				| OB_GRP_SPLIT_CHUNK
				| OB_WDF
				| OB_ISO
				| OB_CISO
				| OB_WBFS
				| OB_FST,

	OB_CMD_SCRUB		= OB_GRP_TITLES
				| OB_GRP_XXSOURCE
				| OB_GRP_PARTITIONS
				| OB_GRP_SPLIT_CHUNK
				| OB_PRESERVE
				| OB_GRP_PATCH
				| OB_WDF
				| OB_ISO
				| OB_CISO
				| OB_WBFS,

	OB_CMD_EDIT		= OB_GRP_TITLES
				| OB_GRP_XSOURCE
				| OB_IGNORE
				| OB_PRESERVE
				| OB_GRP_PATCH,

	OB_CMD_MOVE		= OB_GRP_TITLES
				| OB_GRP_XSOURCE
				| OB_IGNORE
				| OB_DEST
				| OB_DEST2
				| OB_OVERWRITE,

	OB_CMD_RENAME		= OB_GRP_TITLES
				| OB_GRP_XSOURCE
				| OB_IGNORE
				| OB_ISO
				| OB_WBFS,

	OB_CMD_SETTITLE		= OB_CMD_RENAME,

	OB_CMD_VERIFY		= OB_GRP_TITLES
				| OB_GRP_XXSOURCE
				| OB_GRP_PARTITIONS
				| OB_LIMIT
				| OB_LONG,

} enumOptionsBit;

//
///////////////////////////////////////////////////////////////////////////////
///////////////                enum enumCommands                ///////////////
///////////////////////////////////////////////////////////////////////////////

typedef enum enumCommands
{
	CMD__NONE,

	CMD_VERSION,
	CMD_HELP,
	CMD_TEST,
	CMD_ERROR,
	CMD_EXCLUDE,
	CMD_TITLES,
	CMD_CREATE,

	CMD_FILELIST,
	CMD_FILETYPE,
	CMD_ISOSIZE,

	CMD_DUMP,
	CMD_DREGION,
	CMD_ID6,
	CMD_LIST,
	CMD_LIST_L,
	CMD_LIST_LL,
	CMD_LIST_LLL,

	CMD_ILIST,
	CMD_ILIST_L,
	CMD_ILIST_LL,

	CMD_DIFF,
	CMD_EXTRACT,
	CMD_COPY,
	CMD_SCRUB,
	CMD_EDIT,
	CMD_MOVE,
	CMD_RENAME,
	CMD_SETTITLE,

	CMD_VERIFY,

	CMD__N

} enumCommands;

//
///////////////////////////////////////////////////////////////////////////////
///////////////                   enumGetOpt                    ///////////////
///////////////////////////////////////////////////////////////////////////////

typedef enum enumGetOpt
{
	GO__ERR			= '?',

	GO_WBFS			= 'B',
	GO_CISO			= 'C',
	GO_DEST2		= 'D',
	GO_ESC			= 'E',
	GO_FILES		= 'F',
	GO_NO_HEADER		= 'H',
	GO_ISO			= 'I',
	GO_LOGGING		= 'L',
	GO_INCLUDE_PATH		= 'N',
	GO_PROGRESS		= 'P',
	GO_REMOVE		= 'R',
	GO_SORT			= 'S',
	GO_TITLES		= 'T',
	GO_UNIQUE		= 'U',
	GO_VERSION		= 'V',
	GO_WDF			= 'W',
	GO_EXCLUDE_PATH		= 'X',
	GO_SPLIT_SIZE		= 'Z',

	GO_DEST			= 'd',
	GO_HELP			= 'h',
	GO_IGNORE		= 'i',
	GO_LONG			= 'l',
	GO_INCLUDE		= 'n',
	GO_OVERWRITE		= 'o',
	GO_PRESERVE		= 'p',
	GO_QUIET		= 'q',
	GO_RECURSE		= 'r',
	GO_SOURCE		= 's',
	GO_TEST			= 't',
	GO_UPDATE		= 'u',
	GO_VERBOSE		= 'v',
	GO_EXCLUDE		= 'x',
	GO_SPLIT		= 'z',

	GO_XHELP		= 0x80,
	GO_WIDTH,
	GO_IO,
	GO_UTF_8,
	GO_NO_UTF_8,
	GO_LANG,
	GO_RDEPTH,
	GO_IGNORE_FST,
	GO_PSEL,
	GO_RAW,
	GO_PMODE,
	GO_SNEEK,
	GO_HOOK,
	GO_ID,
	GO_NAME,
	GO_MODIFY,
	GO_REGION,
	GO_IOS,
	GO_ENC,
	GO_TRUNC,
	GO_CHUNK_MODE,
	GO_CHUNK_SIZE,
	GO_MAX_CHUNKS,
	GO_FST,
	GO_ITIME,
	GO_MTIME,
	GO_CTIME,
	GO_ATIME,
	GO_TIME,
	GO_SHOW,
	GO_SECTIONS,
	GO_LIMIT,

} enumGetOpt;

//
///////////////////////////////////////////////////////////////////////////////
///////////////                  external vars                  ///////////////
///////////////////////////////////////////////////////////////////////////////

extern const InfoOption_t OptionInfo[OPT__N_TOTAL+1];
extern const CommandTab_t CommandTab[];
extern const char OptionShort[];
extern const struct option OptionLong[];
extern u8 OptionUsed[OPT__N_TOTAL+1];
extern const u8 OptionIndex[OPT_INDEX_SIZE];
extern const InfoCommand_t CommandInfo[CMD__N+1];
extern const InfoUI_t InfoUI;

//
///////////////////////////////////////////////////////////////////////////////
///////////////                       END                       ///////////////
///////////////////////////////////////////////////////////////////////////////

#endif // WIT_UI_WIT_H

