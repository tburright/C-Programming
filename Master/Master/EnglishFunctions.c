//Ghozt
//Mid term

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// The requirement for this lab is to define all of the EnglishFunctions.h functions as declared.
// The comment blocks for each function should clearly indicate what the requirements are for the function.
// There are a variety of appropriate solutions for many of these functions.
// Unit Test Code v1.c has been written to test all of the functions both individually and as a whole.
// This header definition file includes the instructor solution for the header functions.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
* FUNCTION:   int is_it_alphabet(signed char inputChar);
*
* ARGUMENTS:  inputChar is a single signed character that represents a single character
*                 that is tested as an alphabet letter.
*
* RETURNS:	  1 if inputChar is an alphabet character
*             0 if inputChar is not an alphabet character
*
* NOTES:      This function should not care if inputChar is uppercase or lowercase
*             The return value represents a boolean response without using a 'bool' data type
*             The letters a through z and A through Z represent "alphabet letters" for
*                 the purposes of this assignment.
*/
int is_it_alphabet(signed char inputChar)
{
	if ((inputChar <= 90 && inputChar >= 65) || (inputChar <= 122 && inputChar >= 97))	// checks if a-z or A-Z
	{
		return 1; // IS a-z/A-Z
	}
	else
	{
		return 0; //is NOT
	}

}


/*
* FUNCTION:   int remove_non_letters(char * sentenceString);
*
* ARGUMENTS:  senteceString is expected to be a pointer to a null-terminated string
*
* RETURNS:	  Number of characters that were removed
*             -1 if sentenceString is NULL
*
* NOTES:      The execution of this function must utilize is_it_alphabet() to determine
*                 whether or not a given char is an alphabet letter or not.
*             In addition to removing non-alphabet letters, this function will also remove any
*                 "blank space".
*             Most importantly, sentenceString will be null-terminated before the function returns
*/
int remove_non_letters(char * sentenceString)
{
	if (!sentenceString)
	{
		return -1;
	}

	int length = strlen(sentenceString);
	int test;
	int count = 0;
	int y = 0;
	char newString[255] = { 0 };

	if (sentenceString == "")
	{
		return -1;	// null error
	}

	for (int i = 0; i < length; i++)
	{
		test = is_it_alphabet(sentenceString[i]);	// test if alphabetical wity prev function

		if (test == 1)	 //IS alphabet
		{
			newString[y] = sentenceString[i];
			y++;
		}
		else	//is NOT alphabet
		{
			count++;	// increase count of non-alpha removed
		}
		
	}

	int end = strlen(newString);	// find end of string for null term
	strcpy(sentenceString, newString);
	sentenceString[end] = 0;
	return count;

}


/*
* FUNCTION:   int reverse_string(char * inputString, char * outputBuff, int inputPosition);
*
* ARGUMENTS:  inputString is expected to be a pointer to a null-terminated string
*             outputBuff is expected to be a pointer to a char array which will store the reversed string from inputString
*             inputPosition is the element of inputString that reverse_string() should reverse
*
* RETURNS:	  Number of characters that were reversed
*             -1 if either inputString or outputBuff is NULL
*             -2 if inputPosition is unrealistic
*                 Examples:
*                     inputPosition is negative
*                     inputPosition is out of the array's scope
*
* NOTES:      This function can be done either itterativly or recursively. Skip over null-terminated input validation!
*
*
*			  Recursive:
*                 1. Reverse inputString[inputPosition] into outputBuff[]
*                 2. Call reverse_string() to reverse the next inputString[] position
*                 3. Count and return the total number of characters that were reversed from inputString[]
*                        into outputBuff[]
*             outputBuff is treated as the same length as inputString.  If outputBuff is longer, it
*                 will still be treated the same length as inputString.  Ideally, outputBuff and inputString
*                 are the exact same length.
*             Most importantly, outputBuff will be null-terminated before the function returns
*
*			 Itterative:
*				  1. Do input checks and return errors if needed
*				  2. LOOP: Reverse inputString[inputLength - i - 1] into outputBuff
*				  3. Count and return the total number of characters that were reversed from inputString[]
*
*				  Ensuring you start at the end of inputString and itterate until you have reached the
*				  inputPosition is very important.
*					EXAMPLE:
*					someArray[] = "Hello World"
*					inputPosition = 3
*					outputBuff = dlroW ol"
*
*/
int reverse_string(char * inputString, char * outputBuff, int inputPosition)
{
	if (!inputString || !outputBuff)	//-1 if either inputString or outputBuff is NULL
	{
		return -1;
	}

	if (inputPosition < 0 || inputPosition >= strlen(inputString))	// - 2 if inputPosition is unrealistic
	{
		return -2;
	}

	int current = 0;
	int total = strlen(inputString);

	for (int x = total; x > inputPosition-1; x--)	// loop through length of string
	{
		if (inputString[x] != '\0')
		{
			outputBuff[current] = inputString[x];	 // build string in reverse
			current++;
		}
	}

	return current;		//return total chars reversed
}


/*
* FUNCTION:   int clear_a_buffer(char * fullBuff, int buffSize);
*
* ARGUMENTS:  fullBuff is expected to be a pointer to a char array
*             buffSize represents the dimension of fullBuff[]
*
* RETURNS:	  0 on success
*             -1 if fullBuff is NULL
*             -2 if buffSize is unrealistic
*                 Examples:
*                     buffSize is zero
*                     buffSize is negative
*
* NOTES:      This function 'zeroizes' all of the elements of fullBuff[buffSize]
*             fullBuff does not necessarily need to be a null-terminated string since the array's
*                 dimension is passed in as an argument (for safety)
*/
int clear_a_buffer(char * fullBuff, int buffSize)
{
	if (!fullBuff)	// test for null fullBuff
		return -1;
	if (buffSize <= 0)	// test for neg buffsize
		return -2;

	for (int i = 0; i < buffSize; i++)	// loop through fullBuff
	{
		fullBuff[i] = 0;	// zero it
	}

	return 0;		//You will want to change this
}