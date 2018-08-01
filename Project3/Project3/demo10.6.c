#include <stdio.h>
#include "Header.h"

#define DEBUG_INT(x) printf(#x " is %d\n", x)

#define FRUIT "apple"

int main (void)
{
	int getNum = 0;
	scanf("%d", &getNum);
	DEBUG_INT(getNum);

	printf("%c \n", FRUIT);

	#ifndef FRUIT
	#undef FRUIT
	#endif

	printf("%c \n", FRUIT);

	return 0;
}