#define _CRT_SECURE_NO_WARNINGS 1       //required to utilize scanf()
#include <stdio.h>                      //defines printf() and scanf()
#include "Header.h"
#include <string.h>

int main(void)
{
	int result = 0;
	char blah[] = "This string is for print_the_count";
	char * inputString = { blah };
	int counter = strlen(inputString);

	char blah2[] = "abcdefgREVERSEme";
	char * inputString2 = { blah2 };
	int counter2 = strlen(inputString2);

	

	//print_the_count(inputString, counter);

	result = reverse_it(inputString2, counter2);
	
	if (result == 0)
	{
		printf("Your new reversed string is: %s\n", inputString2);
	}
	else if (result == -1)
	{
		printf("STRING IS NULLLLLLLLLL\n");
	}
	else if (result == -2)
	{
		printf("STRING LENGTH IS WROOOOOONG\n");
	}

	return 0;
}