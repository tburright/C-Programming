#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1

#ifdef EOF	// Check is EOF defined
#undef EOF	// Undef to prevent errors and drama
#define EOF (66)	// Redefine EOF as 66
#else
#define EOF(66)
#endif

#if DEBUG	// Checks if "debug" mode 
return 0;
#else	// NOT debug, must be "release"
#ifdef _INC_STDIO	// is "release", but is _INC_STDIO defined?
#define DEBUG_IT(x) printf(#x ": %d\n", x);	// yes, define macro
#else
return 0;	// _INC_STDIO not defined. #RAGEQUIT
#endif
#endif

int main(void)
{
	DEBUG_IT(FOPEN_MAX);
	DEBUG_IT(FILENAME_MAX);
	DEBUG_IT(EOF);

	return 0;
}