//Ghozt

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
#include <string.h>

int main()
{
	char myString[5] = { 0 };
	char myString2[4] = { 0 };

	//READ A STRING AND WRITE IT TO A ZEROIZED CHAR ARRAY.
	printf("Enter a string of 4 characters: ");

	//STEP #1- SAFELY WRITE TO THE ARRAY.
	fgets(myString, 5, stdin);

	//USE ASSERT() TO VERIFY THE LAST ELEMENT OF THE CHAR ARRAY IS NUL.
	assert(myString[4] == '\0');
	printf("Assert passed: %s\n\n", myString);

	//STEP #2- BREAK ASSERT() BY UNSAFELY READING INPUT INTO THE CHAR ARRAY.
	strcpy(myString2, myString);
	assert(myString2[3] == '\0');
	printf("Assert passed.\n");
	return 0;
}