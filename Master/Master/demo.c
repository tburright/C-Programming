//Ghozt
//PLA 8B
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define ERR_NULL_POINTER -1;        // string is null
#define ERR_INVALID_LENGTH -2;      // string length is zero or less

extern int print_the_count(char * inputString, int strLen)
{
	char tempChar = 0;      // Current char being acted on
	int table[26] = { 0 };    // Alpha
	int count = 0;

	if (!inputString)
	{
		return ERR_NULL_POINTER;
	}
	else if (!strLen)
	{
		return ERR_INVALID_LENGTH;
	}

	for (int i = 0; i < strLen; i++)
	{
		if (inputString[i] >= 65 && inputString[i] <= 122)
		{
			tempChar = inputString[i];
			tempChar = toupper(tempChar);
			table[tempChar - 65] += 1;
			count++;
		}
	}

	// Print the table
	for (int i = 0; i < sizeof(table) / sizeof(table[0]); i++)
	{
		printf("%c: %d\n", i + 65, table[i]);
	}
	return count;
}

extern reverse_it(char * forwardString, int strLen)
{
	char reversed[100] = { 0 };		//zero'd buffer
	int current = 0;
	int total = strLen - 1;

	if (strLen <= 0)
	{
		return -2;	 //error if srtlen 0ish 
	}
	else if (forwardString == NULL)
	{
		return -1;	//effor if forwardstring null
	}

	for (int x = 0; x < strLen; x++)	// loop through length of string
	{
		reversed[x] = forwardString[total];	 // build string in reverse
		total--;
	}

	strcpy(forwardString, reversed); // copy reversed string back to main string

	return 0;

}
