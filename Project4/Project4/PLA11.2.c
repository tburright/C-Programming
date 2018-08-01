#include <stdio.h>
#define ERROR_ABUNDANT_DELIMITER NULL
#define ERROR_ABUNDANT_DELIMITER -1
#define ERROR_NULL_DELIMITER -2

char * split_the_string(char * string_ptr, char delimiter)
{
	if (!string_ptr)	// Return NULL if string_ptr is NULL
	{
		return ERROR_NULL_POINTER;
	}
	if (!delimiter)	// Return NULL if delimiter is NULL
	{
		return ERROR_NULL_POINTER;
	}
	if (delimiter == '\0')	// Return ERROR_NULL_DELIMITER if the delimiter is ‘\0’(0x0)
	{
		return ERROR_NULL_DELIMITER;
	}

	char secondString = 'a';
	char * secondLocation_ptr = secondString;
	int start = 0;
	int count = 0;
	int totalLength = sizeof(string_ptr) * 2 - 1;	// size of pointer value (bytes),* 2, minus 1 for null terminator

	for (int i = 0; i < totalLength; i++)
	{
		if (*(string_ptr + i) == delimiter)	// if the value at string_ptr + i (string_ptr[i]) == target delimiter
		{
			printf("*string_ptr[%d] = %c | IS OUR TARGET: %c \n", i, *(string_ptr + i), delimiter);
			//tempSmallest = *(string_ptr + i);	// set new record holder
			secondLocation_ptr = (string_ptr + i + 1);
			start = i;
			count++;
		}
		else	// value at string_ptr + i (string_ptr[i]) != target delimiter
		{
			printf("*string_ptr[%d] = %c | IS NOT OUR TARGET: %c \n", i, *(string_ptr + i), delimiter);
		}

	}
	if (count > 1)	// Return ERROR_ABUNDANT_DELIMITER if string_ptr has more than one occurrence of delimiter
	{
		printf("FOUND MORE THAN 1! D:\n");
		return ERROR_ABUNDANT_DELIMITER;
	}
	else if (count == 0)	// ...DIDN'T FIND ANY DELIMITERs
	{
		printf("I hate you. -.-\n");
		return NULL;
	}
	else
	{
		printf("Only found one delimiter :D\n");

		for (int y = start + 1; y < totalLength; y++)	// starting with the delimiter location +1, loop until end of string_ptr
		{
			*(secondLocation_ptr + y) = (string_ptr + y);	// build new second string with chars only after delimiter
		}

		*(secondLocation_ptr + totalLength) = '\0';	// Null terminate new string

		return secondLocation_ptr;	// return char * to second string
	}
}

int main()
{

	char someString[10] = { "THExDOG" };
	char * someString_ptr = someString;
	char * test = 0;	//?????

	test = split_the_string(someString_ptr, 'x');	// call fancy function

	if (test == NULL)
	{
		printf("#ragequit.\n");
		return 0;
	}
	else if (test == -1)
	{
		printf("ERROR_ABUNDANT_DELIMITER\n");
		return 0;
	}
	else if (test == -2)
	{
		printf("ERROR_NULL_DELIMITER\n");
		return 0;
	}
	else
	{
		printf("Pointer to second string is: %p\n", test);	// profit
	}

	return(0);
}