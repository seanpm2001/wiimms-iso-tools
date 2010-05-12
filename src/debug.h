
#ifndef WWT_DEBUG_H
#define WWT_DEBUG_H 1

///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
//
//  -------------------
//   DEBUG and TRACING
//  -------------------
//
//  If symbol 'DEBUG' or symbol _DEBUG' is defined, then and only then
//  DEBUG and TRACING is enabled.
//
//  There are to function like macros defined:
//
//     TRACE ( const char * format, ... );
//        Print to console only if TRACING is enabled.
//        Ignored when TRACING is disabled.
//        It works like the well known printf() function and include flushing.
//
//      TRACE_IF ( bool condition, const char * format, ... );
//        Like TRACE(), but print only if 'condition' is true.
//
//      TRACELINE
//        Print out current line and source.
//
//      TRACE_SIZEOF ( object_or_type );
//        Print out `sizeof(object_or_type)�
//
//      ASSERT(cond);
//	  If condition is false: print info and exit program.
//
//
//  There are more macros with a preceding 'no' defined:
//
//      noTRACE ( const char * format, ... );
//      noTRACE_IF ( bool condition, const char * format, ... );
//      noTRACELINE ( bool condition, const char * format, ... );
//      noTRACE_SIZEOF ( object_or_type );
//      noASSERT(cond);
//
//      If you add a 'no' before a TRACE-Call it is disabled always.
//      This makes the usage and disabling of multi lines traces very easy.
//
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdarg.h>

///////////////////////////////////////////////////////////////////////////////

#if defined(IGNORE_DEBUG)
    #undef DEBUG
    #undef _DEBUG
#endif

///////////////////////////////////////////////////////////////////////////////

#undef TRACE
#undef TRACE_IF
#undef TRACELINE
#undef TRACE_SIZEOF

///////////////////////////////////////////////////////////////////////////////

extern FILE * TRACE_FILE;
void TRACE_FUNC ( const char * format, ...);
void TRACE_ARG_FUNC ( const char * format, va_list arg );

///////////////////////////////////////////////////////////////////////////////

#ifdef TESTTRACE

    #undef DEBUG
    #define DEBUG 1

    #define TRACE_FUNC printf
    #define TRACE_ARG_FUNC vprintf

#endif

///////////////////////////////////////////////////////////////////////////////

#if defined(DEBUG) || defined(_DEBUG)

    #undef DEBUG
    #define DEBUG 1

    #undef DEBUG_ASSERT
    #define DEBUG_ASSERT 1

    #define TRACE(...) TRACE_FUNC(__VA_ARGS__)
    #define TRACE_IF(cond,...) if (cond) TRACE_FUNC(__VA_ARGS__)
    #define TRACELINE TRACE_FUNC("line #%d @ %s\n",__LINE__,__FILE__)
    #define TRACE_SIZEOF(t) TRACE_FUNC("%6zd == %5zx/hex == sizeof(%s)\n",sizeof(t),sizeof(t),#t)

    #define HEXDUMP(i,a,af,rl,d,c) HexDump(stdout,a,af,rl,d,c);
    #define HEXDUMP16(a,i,d,c) HexDump16(stdout,a,i,d,c);
    #define TRACE_HEXDUMP(i,a,af,rl,d,c) HexDump(TRACE_FILE,i,a,af,rl,d,c);
    #define TRACE_HEXDUMP16(i,a,d,c) HexDump16(TRACE_FILE,i,a,d,c);

    #define BINGO printf("BINGO! %s() #%d @ %s\n",__FUNCTION__,__LINE__,__FILE__)

#else

    #undef DEBUG

    #define TRACE(...)
    #define TRACE_IF(cond,...)
    #define TRACELINE
    #define TRACE_SIZEOF(t)
    #define HEXDUMP(i,a,af,rl,d,c)
    #define HEXDUMP16(a,i,d,c)
    #define TRACE_HEXDUMP(i,a,af,rl,d,c)
    #define TRACE_HEXDUMP16(i,a,d,c)
    #define BINGO

#endif

///////////////////////////////////////////////////////////////////////////////

#undef ASSERT
#undef ASSERT_MSG

#if defined(DEBUG_ASSERT) || defined(_DEBUG_ASSERT)

    #undef DEBUG_ASSERT
    #define DEBUG_ASSERT 1

    #define ASSERT(a) if (!(a)) ERROR0(ERR_FATAL,"ASSERTION FAILED !!!\n")
    #define ASSERT_MSG(a,...) if (!(a)) ERROR0(ERR_FATAL,__VA_ARGS__)

#else

    #undef DEBUG_ASSERT
    #define ASSERT(cond)
    #define ASSERT_MSG(a,...)

#endif

///////////////////////////////////////////////////////////////////////////////

#undef DASSERT
#undef DASSERT_MSG

#if defined(DEBUG) || defined(TEST)
    #define DASSERT ASSERT
    #define DASSERT_MSG ASSERT_MSG
#else
    #define DASSERT(cond)
    #define DASSERT_MSG(a,...)
#endif

///////////////////////////////////////////////////////////////////////////////

// prefix 'no' deactivates traces

#undef noTRACE
#undef noTRACE_IF
#undef noTRACELINE
#undef noTRACE_SIZEOF
#undef noASSERT


#ifdef TESTTRACE

    #define noTRACE		TRACE
    #define noTRACE_IF		TRACE_IF
    #define noTRACELINE		TRACELINE
    #define noTRACE_SIZEOF	TRACE_SIZEOF
    #define noASSERT		ASSERT
    #define noASSERT_MSG	ASSERT_MSG

#else

    #define noTRACE(...)
    #define noTRACE_IF(cond,...)
    #define noTRACELINE
    #define noTRACE_SIZEOF(t)
    #define noASSERT(cond)
    #define noASSERT_MSG(cond,...)

#endif

///////////////////////////////////////////////////////////////////////////////

#endif // WWT_DEBUG_H
