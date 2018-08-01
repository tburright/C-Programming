// Ghozt
// Performance Lab 8-1 
// "Healthy Substitutions"
// HARD STUDENT TEMPLATE

#include <stdio.h>
#include <string.h>
#define ERR_NULL_POINTER -1		                // Error:  Pointer passed was NULL
#define ERR_NONE_FOUND 0		                // Error:  Character not found
#define ERR_FIND_EQUALS_REPLACE -2              // Error:  To replace and replace are equal to each other
#define ERR_NON_PRINTABLE_CHARACTER -3          // Error:  One of the characters is not printable

// Create your prototypes here
int replace_character(char * buffer, char findChar, char replaceChar);
int clearInput();    // I included an awesome function used to clear your input buffer

int main(void)
{
	/* FUNCTION INPUT ARRAYS
	---These are included because we have not learned about pointers yet
	*/
	char beforeString1[] = { "I just want a shorter quote.  -John Doe" };
	char originalStringArray[] = { beforeString1 };
	char * beforeStringArray[] = { beforeString1 };

	// TODO: Create your main variables
	char userChar = 0; // Character to replace
	char replaceChar = 0; // Character replacing userChar
	int countTotal = 0;

	// TODO: Create your program output, user instructions, user input etc
	printf("What character would you like to replace?\n");
	userChar = getchar();
	printf("What character would you like to replace '%c' with?\n", userChar);
	clearInput();
	replaceChar = getchar();

	// TODO: Implement replace_char function call here
	countTotal = replace_character(beforeStringArray[0], userChar, replaceChar);

	// TODO: Check for error return, handle it
	if (countTotal > 0)
	{
		printf("\nThe old string was: \n");
		printf("%s\n", beforeString1);
		printf("\nThe new string is: \n");
		printf("%s\n\n", beforeStringArray[0]);
		printf("We replaced '%c' with '%c' %d times.\n", userChar, replaceChar, countTotal);
	}
	else if (countTotal == 0)
	{
		printf("\nNONE FOUND.\n");
	}
	else if (countTotal == -2) // ERR_FIND_EQUALS_REPLACE
	{
		printf("\nWat? You want to replace the thing witht he same thing???\n");
	}
	else if (countTotal == -3) // ERR_NON_PRINTABLE_CHARACTER
	{
		printf("\nI have no idea what this means but you did it.\n");
	}
	else
	{
		printf("\nYou super broke something.\n");
	}

	return 0;
}

// This is an awesome function and useful if you need to clear the input buffer
int clearInput()
{
	while (getchar() != '\n');
	//return;
}


/*
* FUNCTION:   int replace_char(char * buffer, char findChar, char replaceChar)
*
* ARGUMENTS:  -buffer is a pointer to a null-terminated string
*              The string is passed by reference and modified in place
*              -findChar is a char to be found in the string
*              -replaceChar is the char to replace the findChar
*
* RETURNS:	   Number of characers replaced
*             ERR_NULL_POINTER if buffer == NULL
*             ERR_NONE_FOUND if no targets are found
*             ERR_FIND_EQUALS_REPLACE -2              // Error:  To replace and replace are equal to each other
*             ERR_NON_PRINTABLE_CHARACTER -3          // Error:  One of the characters is not printable
*
* NOTES:      This function replaces instances of a userinputted character with another user inputted char
*/

int replace_character(char * buffer, char findChar, char replaceChar)

{

	int buffLength = 0;

	if (buffer)
	{
		if (findChar == replaceChar)
			return ERR_FIND_EQUALS_REPLACE;


		int i = 0;
		int x = 0;
		int count = 0;
		buffLength = strlen(buffer);

		for (i = 0; i < buffLength; i++)
		{
			if (buffer[i] == findChar)
			{
				buffer[i] = replaceChar;
				count++;
			}
		}

		if (count > 0)
		{
			return count;
		}
		else
		{
			return ERR_NONE_FOUND;
		}

	}
	else
	{
		return ERR_NULL_POINTER;
	}

}