
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


#ifndef WIT_UI_WWT_H
#define WIT_UI_WWT_H
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

	OPT_AUTO,
	OPT_ALL,
	OPT_PART,
	OPT_RECURSE,
	OPT_RDEPTH,
	OPT_PSEL,
	OPT_RAW,
	OPT_INCLUDE,
	OPT_INCLUDE_PATH,
	OPT_EXCLUDE,
	OPT_EXCLUDE_PATH,
	OPT_IGNORE,
	OPT_IGNORE_FST,
	OPT_ENC,
	OPT_ID,
	OPT_NAME,
	OPT_MODIFY,
	OPT_REGION,
	OPT_COMMON_KEY,
	OPT_IOS,
	OPT_RM_FILES,
	OPT_ZERO_FILES,
	OPT_REPL_FILE,
	OPT_ADD_FILE,
	OPT_IGNORE_FILES,
	OPT_TRIM,
	OPT_ALIGN,
	OPT_ALIGN_PART,
	OPT_DEST,
	OPT_DEST2,
	OPT_SPLIT,
	OPT_SPLIT_SIZE,
	OPT_DISC_SIZE,
	OPT_TRUNC,
	OPT_FAST,
	OPT_CHUNK_MODE,
	OPT_CHUNK_SIZE,
	OPT_MAX_CHUNKS,
	OPT_COMPRESSION,
	OPT_SIZE,
	OPT_HSS,
	OPT_WSS,
	OPT_RECOVER,
	OPT_FORCE,
	OPT_NO_CHECK,
	OPT_REPAIR,
	OPT_NO_FREE,
	OPT_UPDATE,
	OPT_SYNC,
	OPT_NEWER,
	OPT_OVERWRITE,
	OPT_REMOVE,
	OPT_WDF,
	OPT_WIA,
	OPT_ISO,
	OPT_CISO,
	OPT_WBFS,
	OPT_ITIME,
	OPT_MTIME,
	OPT_CTIME,
	OPT_ATIME,
	OPT_TIME,
	OPT_SET_TIME,
	OPT_LONG,
	OPT_INODE,
	OPT_MIXED,
	OPT_UNIQUE,
	OPT_NO_HEADER,
	OPT_SECTIONS,
	OPT_SORT,
	OPT_LIMIT,

	OPT__N_SPECIFIC, // == 72 

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

	OPT__N_TOTAL // == 88

} enumOptions;

//
///////////////////////////////////////////////////////////////////////////////
///////////////               enum enumOptionsBit               ///////////////
///////////////////////////////////////////////////////////////////////////////

//	*****  only for verification  *****

//typedef enum enumOptionsBit
//{
//	//----- command specific options -----
//
//	OB_AUTO			= 1llu << OPT_AUTO,
//	OB_ALL			= 1llu << OPT_ALL,
//	OB_PART			= 1llu << OPT_PART,
//	OB_RECURSE		= 1llu << OPT_RECURSE,
//	OB_RDEPTH		= 1llu << OPT_RDEPTH,
//	OB_PSEL			= 1llu << OPT_PSEL,
//	OB_RAW			= 1llu << OPT_RAW,
//	OB_INCLUDE		= 1llu << OPT_INCLUDE,
//	OB_INCLUDE_PATH		= 1llu << OPT_INCLUDE_PATH,
//	OB_EXCLUDE		= 1llu << OPT_EXCLUDE,
//	OB_EXCLUDE_PATH		= 1llu << OPT_EXCLUDE_PATH,
//	OB_IGNORE		= 1llu << OPT_IGNORE,
//	OB_IGNORE_FST		= 1llu << OPT_IGNORE_FST,
//	OB_ENC			= 1llu << OPT_ENC,
//	OB_ID			= 1llu << OPT_ID,
//	OB_NAME			= 1llu << OPT_NAME,
//	OB_MODIFY		= 1llu << OPT_MODIFY,
//	OB_REGION		= 1llu << OPT_REGION,
//	OB_COMMON_KEY		= 1llu << OPT_COMMON_KEY,
//	OB_IOS			= 1llu << OPT_IOS,
//	OB_RM_FILES		= 1llu << OPT_RM_FILES,
//	OB_ZERO_FILES		= 1llu << OPT_ZERO_FILES,
//	OB_REPL_FILE		= 1llu << OPT_REPL_FILE,
//	OB_ADD_FILE		= 1llu << OPT_ADD_FILE,
//	OB_IGNORE_FILES		= 1llu << OPT_IGNORE_FILES,
//	OB_TRIM			= 1llu << OPT_TRIM,
//	OB_ALIGN		= 1llu << OPT_ALIGN,
//	OB_ALIGN_PART		= 1llu << OPT_ALIGN_PART,
//	OB_DEST			= 1llu << OPT_DEST,
//	OB_DEST2		= 1llu << OPT_DEST2,
//	OB_SPLIT		= 1llu << OPT_SPLIT,
//	OB_SPLIT_SIZE		= 1llu << OPT_SPLIT_SIZE,
//	OB_DISC_SIZE		= 1llu << OPT_DISC_SIZE,
//	OB_TRUNC		= 1llu << OPT_TRUNC,
//	OB_FAST			= 1llu << OPT_FAST,
//	OB_CHUNK_MODE		= 1llu << OPT_CHUNK_MODE,
//	OB_CHUNK_SIZE		= 1llu << OPT_CHUNK_SIZE,
//	OB_MAX_CHUNKS		= 1llu << OPT_MAX_CHUNKS,
//	OB_COMPRESSION		= 1llu << OPT_COMPRESSION,
//	OB_SIZE			= 1llu << OPT_SIZE,
//	OB_HSS			= 1llu << OPT_HSS,
//	OB_WSS			= 1llu << OPT_WSS,
//	OB_RECOVER		= 1llu << OPT_RECOVER,
//	OB_FORCE		= 1llu << OPT_FORCE,
//	OB_NO_CHECK		= 1llu << OPT_NO_CHECK,
//	OB_REPAIR		= 1llu << OPT_REPAIR,
//	OB_NO_FREE		= 1llu << OPT_NO_FREE,
//	OB_UPDATE		= 1llu << OPT_UPDATE,
//	OB_SYNC			= 1llu << OPT_SYNC,
//	OB_NEWER		= 1llu << OPT_NEWER,
//	OB_OVERWRITE		= 1llu << OPT_OVERWRITE,
//	OB_REMOVE		= 1llu << OPT_REMOVE,
//	OB_WDF			= 1llu << OPT_WDF,
//	OB_WIA			= 1llu << OPT_WIA,
//	OB_ISO			= 1llu << OPT_ISO,
//	OB_CISO			= 1llu << OPT_CISO,
//	OB_WBFS			= 1llu << OPT_WBFS,
//	OB_ITIME		= 1llu << OPT_ITIME,
//	OB_MTIME		= 1llu << OPT_MTIME,
//	OB_CTIME		= 1llu << OPT_CTIME,
//	OB_ATIME		= 1llu << OPT_ATIME,
//	OB_TIME			= 1llu << OPT_TIME,
//	OB_SET_TIME		= 1llu << OPT_SET_TIME,
//	OB_LONG			= 1llu << OPT_LONG,
//	OB_INODE		= 1llu << OPT_INODE,
//	OB_MIXED		= 1llu << OPT_MIXED,
//	OB_UNIQUE		= 1llu << OPT_UNIQUE,
//	OB_NO_HEADER		= 1llu << OPT_NO_HEADER,
//	OB_SECTIONS		= 1llu << OPT_SECTIONS,
//	OB_SORT			= 1llu << OPT_SORT,
//	OB_LIMIT		= 1llu << OPT_LIMIT,
//
//	//----- group & command options -----
//
//	OB_GRP_TITLES		= 0,
//
//	OB_GRP_READ_WBFS	= OB_AUTO
//				| OB_ALL
//				| OB_PART,
//
//	OB_GRP_MOD_WBFS		= OB_AUTO
//				| OB_ALL
//				| OB_PART
//				| OB_FORCE
//				| OB_NO_CHECK,
//
//	OB_GRP_EXCLUDE		= OB_INCLUDE
//				| OB_INCLUDE_PATH
//				| OB_EXCLUDE
//				| OB_EXCLUDE_PATH,
//
//	OB_GRP_IGN_EXCLUDE	= OB_INCLUDE
//				| OB_INCLUDE_PATH
//				| OB_EXCLUDE
//				| OB_EXCLUDE_PATH
//				| OB_IGNORE
//				| OB_IGNORE_FST,
//
//	OB_GRP_VERBOSE		= 0,
//
//	OB_GRP_XTIME		= OB_ITIME
//				| OB_MTIME
//				| OB_CTIME
//				| OB_ATIME,
//
//	OB_GRP_TIME		= OB_GRP_XTIME
//				| OB_TIME,
//
//	OB_GRP_OUTMODE		= OB_WDF
//				| OB_ISO
//				| OB_CISO
//				| OB_WBFS
//				| OB_WIA,
//
//	OB_GRP_PATCH		= OB_ENC
//				| OB_ID
//				| OB_NAME
//				| OB_MODIFY
//				| OB_REGION
//				| OB_COMMON_KEY
//				| OB_IOS
//				| OB_RM_FILES
//				| OB_ZERO_FILES,
//
//	OB_GRP_RELOCATE		= OB_REPL_FILE
//				| OB_ADD_FILE
//				| OB_IGNORE_FILES
//				| OB_TRIM
//				| OB_ALIGN
//				| OB_ALIGN_PART,
//
//	OB_GRP_SPLIT_CHUNK	= OB_SPLIT
//				| OB_SPLIT_SIZE
//				| OB_DISC_SIZE
//				| OB_TRUNC
//				| OB_CHUNK_MODE
//				| OB_CHUNK_SIZE
//				| OB_MAX_CHUNKS
//				| OB_COMPRESSION,
//
//	OB_CMD_VERSION		= OB_SECTIONS
//				| OB_LONG,
//
//	OB_CMD_HELP		= ~(u64)0,
//
//	OB_CMD_TEST		= ~(u64)0,
//
//	OB_CMD_ERROR		= OB_SECTIONS
//				| OB_NO_HEADER
//				| OB_LONG,
//
//	OB_CMD_COMPR		= OB_SECTIONS
//				| OB_NO_HEADER
//				| OB_LONG,
//
//	OB_CMD_EXCLUDE		= OB_EXCLUDE
//				| OB_EXCLUDE_PATH,
//
//	OB_CMD_TITLES		= OB_GRP_TITLES,
//
//	OB_CMD_FIND		= OB_GRP_READ_WBFS
//				| OB_NO_HEADER
//				| OB_LONG,
//
//	OB_CMD_SPACE		= OB_GRP_READ_WBFS
//				| OB_NO_HEADER
//				| OB_LONG,
//
//	OB_CMD_ANALYZE		= OB_GRP_READ_WBFS
//				| OB_LONG,
//
//	OB_CMD_DUMP		= OB_GRP_TITLES
//				| OB_GRP_READ_WBFS
//				| OB_INODE
//				| OB_LONG,
//
//	OB_CMD_ID6		= OB_GRP_READ_WBFS
//				| OB_GRP_EXCLUDE,
//
//	OB_CMD_LIST		= OB_GRP_TITLES
//				| OB_GRP_READ_WBFS
//				| OB_GRP_EXCLUDE
//				| OB_MIXED
//				| OB_UNIQUE
//				| OB_SORT
//				| OB_GRP_TIME
//				| OB_LONG
//				| OB_NO_HEADER
//				| OB_SECTIONS,
//
//	OB_CMD_LIST_L		= OB_CMD_LIST,
//
//	OB_CMD_LIST_LL		= OB_CMD_LIST,
//
//	OB_CMD_LIST_A		= OB_CMD_LIST,
//
//	OB_CMD_LIST_M		= OB_CMD_LIST,
//
//	OB_CMD_LIST_U		= OB_CMD_LIST,
//
//	OB_CMD_FORMAT		= OB_GRP_TITLES
//				| OB_SIZE
//				| OB_SPLIT
//				| OB_SPLIT_SIZE
//				| OB_HSS
//				| OB_WSS
//				| OB_RECOVER
//				| OB_INODE
//				| OB_FORCE,
//
//	OB_CMD_RECOVER		= OB_GRP_TITLES
//				| OB_GRP_READ_WBFS,
//
//	OB_GRP_CHECK		= OB_GRP_TITLES
//				| OB_GRP_READ_WBFS
//				| OB_LONG,
//
//	OB_CMD_CHECK		= OB_GRP_CHECK
//				| OB_REPAIR,
//
//	OB_CMD_REPAIR		= OB_GRP_CHECK
//				| OB_REPAIR,
//
//	OB_CMD_EDIT		= OB_AUTO
//				| OB_PART
//				| OB_FORCE,
//
//	OB_CMD_PHANTOM		= OB_GRP_MOD_WBFS,
//
//	OB_CMD_TRUNCATE		= OB_GRP_MOD_WBFS,
//
//	OB_CMD_SYNC		= OB_GRP_TITLES
//				| OB_GRP_MOD_WBFS
//				| OB_RECURSE
//				| OB_RDEPTH
//				| OB_GRP_IGN_EXCLUDE
//				| OB_GRP_VERBOSE
//				| OB_GRP_PATCH
//				| OB_GRP_RELOCATE
//				| OB_PSEL
//				| OB_RAW
//				| OB_REMOVE
//				| OB_TRUNC
//				| OB_NEWER,
//
//	OB_CMD_UPDATE		= OB_CMD_SYNC
//				| OB_SYNC,
//
//	OB_CMD_ADD		= OB_CMD_UPDATE
//				| OB_UPDATE
//				| OB_OVERWRITE,
//
//	OB_CMD_EXTRACT		= OB_GRP_TITLES
//				| OB_GRP_MOD_WBFS
//				| OB_GRP_EXCLUDE
//				| OB_GRP_VERBOSE
//				| OB_DEST
//				| OB_DEST2
//				| OB_GRP_SPLIT_CHUNK
//				| OB_GRP_OUTMODE
//				| OB_UNIQUE
//				| OB_IGNORE
//				| OB_REMOVE
//				| OB_UPDATE
//				| OB_OVERWRITE
//				| OB_TRUNC
//				| OB_FAST,
//
//	OB_CMD_REMOVE		= OB_GRP_TITLES
//				| OB_GRP_MOD_WBFS
//				| OB_GRP_EXCLUDE
//				| OB_GRP_VERBOSE
//				| OB_UNIQUE
//				| OB_IGNORE
//				| OB_NO_FREE,
//
//	OB_CMD_RENAME		= OB_GRP_TITLES
//				| OB_GRP_MOD_WBFS
//				| OB_GRP_EXCLUDE
//				| OB_IGNORE
//				| OB_ISO
//				| OB_WBFS,
//
//	OB_CMD_SETTITLE		= OB_CMD_RENAME,
//
//	OB_CMD_TOUCH		= OB_GRP_TITLES
//				| OB_GRP_MOD_WBFS
//				| OB_GRP_EXCLUDE
//				| OB_UNIQUE
//				| OB_IGNORE
//				| OB_ITIME
//				| OB_MTIME
//				| OB_CTIME
//				| OB_ATIME
//				| OB_SET_TIME,
//
//	OB_CMD_VERIFY		= OB_GRP_TITLES
//				| OB_GRP_MOD_WBFS
//				| OB_GRP_EXCLUDE
//				| OB_GRP_VERBOSE
//				| OB_LIMIT
//				| OB_PSEL
//				| OB_RAW
//				| OB_IGNORE_FILES
//				| OB_UNIQUE
//				| OB_IGNORE
//				| OB_REMOVE
//				| OB_NO_FREE
//				| OB_LONG,
//
//	OB_CMD_FILETYPE		= OB_IGNORE
//				| OB_IGNORE_FST
//				| OB_NO_HEADER
//				| OB_LONG,
//
//} enumOptionsBit;

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
	CMD_COMPR,
	CMD_EXCLUDE,
	CMD_TITLES,

	CMD_FIND,
	CMD_SPACE,
	CMD_ANALYZE,
	CMD_DUMP,

	CMD_ID6,
	CMD_LIST,
	CMD_LIST_L,
	CMD_LIST_LL,
	CMD_LIST_A,
	CMD_LIST_M,
	CMD_LIST_U,

	CMD_FORMAT,
	CMD_RECOVER,
	CMD_CHECK,
	CMD_REPAIR,
	CMD_EDIT,
	CMD_PHANTOM,
	CMD_TRUNCATE,

	CMD_ADD,
	CMD_UPDATE,
	CMD_SYNC,
	CMD_EXTRACT,
	CMD_REMOVE,
	CMD_RENAME,
	CMD_SETTITLE,
	CMD_TOUCH,
	CMD_VERIFY,

	CMD_FILETYPE,

	CMD__N // == 36

} enumCommands;

//
///////////////////////////////////////////////////////////////////////////////
///////////////                   enumGetOpt                    ///////////////
///////////////////////////////////////////////////////////////////////////////

typedef enum enumGetOpt
{
	GO__ERR			= '?',

	GO_ALL			= 'A',
	GO_WBFS			= 'B',
	GO_CISO			= 'C',
	GO_DEST2		= 'D',
	GO_ESC			= 'E',
	GO_FAST			= 'F',
	GO_NO_HEADER		= 'H',
	GO_ISO			= 'I',
	GO_LOGGING		= 'L',
	GO_MIXED		= 'M',
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

	GO_AUTO			= 'a',
	GO_DEST			= 'd',
	GO_NEWER		= 'e',
	GO_FORCE		= 'f',
	GO_HELP			= 'h',
	GO_IGNORE		= 'i',
	GO_LONG			= 'l',
	GO_INCLUDE		= 'n',
	GO_OVERWRITE		= 'o',
	GO_PART			= 'p',
	GO_QUIET		= 'q',
	GO_RECURSE		= 'r',
	GO_SIZE			= 's',
	GO_TEST			= 't',
	GO_UPDATE		= 'u',
	GO_VERBOSE		= 'v',
	GO_EXCLUDE		= 'x',
	GO_SYNC			= 'y',
	GO_SPLIT		= 'z',

	GO_XHELP		= 0x80,
	GO_WIDTH,
	GO_IO,
	GO_UTF_8,
	GO_NO_UTF_8,
	GO_LANG,
	GO_RDEPTH,
	GO_PSEL,
	GO_RAW,
	GO_IGNORE_FST,
	GO_HOOK,
	GO_ENC,
	GO_ID,
	GO_NAME,
	GO_MODIFY,
	GO_REGION,
	GO_COMMON_KEY,
	GO_IOS,
	GO_RM_FILES,
	GO_ZERO_FILES,
	GO_REPL_FILE,
	GO_ADD_FILE,
	GO_IGNORE_FILES,
	GO_TRIM,
	GO_ALIGN,
	GO_ALIGN_PART,
	GO_DISC_SIZE,
	GO_TRUNC,
	GO_CHUNK_MODE,
	GO_CHUNK_SIZE,
	GO_MAX_CHUNKS,
	GO_COMPRESSION,
	GO_HSS,
	GO_WSS,
	GO_RECOVER,
	GO_NO_CHECK,
	GO_REPAIR,
	GO_NO_FREE,
	GO_WIA,
	GO_ITIME,
	GO_MTIME,
	GO_CTIME,
	GO_ATIME,
	GO_TIME,
	GO_SET_TIME,
	GO_INODE,
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

#endif // WIT_UI_WWT_H

