/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////// PERFORMANCE LAB I.5.A-4 ////////////////////////////////////////////////
/////////////////////////////////////////////// FUNCTION ARGUMENTS //////////////////////////////////////////////////
///////////////////////////////////////////////// "Surfin' Bird" ////////////////////////////////////////////////////
/////////////////////////////////////////////// Instructor Solution /////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <string.h>

/* Error code default value */
#ifdef DEFAULT_ERROR_CODE
#undef DEFAULT_ERROR_CODE
#endif
#define DEFAULT_ERROR_CODE 90318

/* Just in case NULL was undefined... */
#ifndef NULL
#define NULL ((void*) 0)
#endif

/* Error code for success */
#ifdef ERROR_CODE_SUCCESS
#undef ERROR_CODE_SUCCESS
#endif
#define ERROR_CODE_SUCCESS ((int)1)

/* Error code if sentence_ptr is NULL */
#ifdef ERROR_NULL_SENTENCE_POINTER
#undef ERROR_NULL_SENTENCE_POINTER
#endif
#define ERROR_NULL_SENTENCE_POINTER ((int)-1)

/* Error code if searchWord_ptr is NULL */
#ifdef ERROR_NULL_SEARCH_POINTER
#undef ERROR_NULL_SEARCH_POINTER
#endif
#define ERROR_NULL_SEARCH_POINTER ((int)-2)

/* Error code is the string in searchWord_ptr can not be found in the string located at sentence_ptr */
#ifdef ERROR_SEARCH_NOT_FOUND
#undef ERROR_SEARCH_NOT_FOUND
#endif
#define ERROR_SEARCH_NOT_FOUND ((int)-3)

/* Standard array size for manual dimension declaration */
#ifdef BUFF_SIZE
#undef BUFF_SIZE
#endif
#define BUFF_SIZE 1024

/*
* FUNCTION:   find_the_word(char * sentence_ptr, char * searchWord_ptr, int * errorCode_ptr)
*
* ARGUMENTS:  sentence_ptr is a char pointer to a null-terminated string to search
*             searchWord_ptr is a char pointer to a null-terminated string to find inside sentence_ptr
*             errorCode_ptr is an int pointer.  Store your error code at this memory address.
*
* RETURNS:	   char pointer to the first occurrence of the searchWord_ptr string found in the
*                 sentence_ptr string.  The char pointer should be a memory address in the
*                 sentence_ptr string and this memory address should represent the first 'index'
*                 of the searchWord_ptr string.  This memory address from the sentence_ptr string
*                 should dereference to a value equivalent to searchWord_ptr[0].
*             All other occurences should return NULL.  This includes, but is not limited to, the
*                 following:
*                     sentence_ptr is NULL
*                     searchWord_ptr is NULL
*                     errorCode_ptr is NULL
*                     the searchWord_ptr string is not found in the sentence_ptr string
*
* NOTES:      This function only utilizes address arithmetic to access information within the
*                 null-terminated char array found at both sentence_ptr and searchWord_ptr
*             Only access elements of the char array found at both sentence_ptr and searchWord_ptr
*                 using address arithmetic (AKA pointer math).  The definition of this function should
*                 be entirely devoid of the [ and ] characters.  (e.g., sentence_ptr[i] is forbidden)
*             The only guarantees for the arguments are:
*                 Any string found at sentence_ptr is null-terminated
*                 Any string found at searchWord_ptr is null-terminated
*             There is no guarantee sentence_ptr has an address (return NULL if it's NULL and assign the
*                 proper error code)
*             There is no guarantee searchWord_ptr has an address (return NULL if it's NULL and assign the
*                 proper error code)
*             There is no guarantee errorCode_ptr has an address (return NULL if it's NULL and assign the
*                 proper error code)
*             There is no guarantee the string found at sentence_ptr contains the string found at
*                 searchWord_ptr (return NULL if the string at searchWord_ptr is not found and assign the
*                 proper error code)
*             There is no guarantee the strings found at both sentence_ptr and searchWord_ptr will
*                 return a string length longer than zero (0)
*/
char * find_the_word(char * sentence_ptr, char * searchWord_ptr, int * errorCode_ptr);

int main(void)
{
	int i = 0;
	int numTestsRun = 0;
	int numTestsPassed = 0;
	int putErrorCodeHere = DEFAULT_ERROR_CODE;
	char * tempReturnValue_ptr = NULL;
	char testChar1 = 0; // DEBUGGING
	char testChar2 = 0; // DEBUGGING

						/* TEST INPUT */
						// Three normal strings

	int * testError0 = 0;

	struct FunctionTest {
		char * sentence_ptr;			// Holds the sentence_ptr input parameter to find_the_word()
		char * searchWord_ptr;				// Holds the word to find find_the_word()
		char * find_word_return_ptr;		// Holds the expected return value from find_the_word()
		int * errorCode_ptr;		// Error code pointer from find_the_word()
		int default_error_ptr;
		
	};



	char testInput0[] = { "Good luck to you on this lab.\nI hope you do well." }; // Key: \n
	//char testKey0[] = { 10,0 };
	//0 &testInput0[29],
	//0 ERROR_CODE_SUCCESS,
	struct FunctionTest test0 = { testInput0, "\n", (testInput0 + 29), &putErrorCodeHere, ERROR_CODE_SUCCESS}; //



	char testInput1[] = { "Normal test input.  'The' is the search key." }; // Key: The
	//char testKey1[] = { "The" };
	//1 & testInput1[21],
	//1 ERROR_CODE_SUCCESS,
	struct FunctionTest test1 = { testInput1, "The", (testInput1 + 21), &putErrorCodeHere, ERROR_CODE_SUCCESS};


	char testInput2[] = { "This is also normal input.  The 'bird' is the word." }; // Key: bird
	//char testKey2[] = { "bird" };					   // Two strings that have duplicate keys
	//2 & testInput2[33], \
	//2 ERROR_CODE_SUCCESS,
	struct FunctionTest test2 = { testInput2, "bird", (testInput2 + 33), &putErrorCodeHere, ERROR_CODE_SUCCESS};


	char testInput3[] = { "This string is an example of a string that has two occurrences of the word 'is'." }; // Key: is
	//char testKey3[] = { "is" };;
	//3 & testInput3[2],
	//3 ERROR_CODE_SUCCESS,
	struct FunctionTest test3 = { testInput3, "is", (testInput3 + 2), &putErrorCodeHere, ERROR_CODE_SUCCESS };


	char testInput4[] = { "The word 'the' is very common in the English language." }; // Key: the
																					  // Two strings that have multiple occurrences of the key
	//char testKey4[] = { "the" };
	//4 & testInput4[10],
	//4 ERROR_CODE_SUCCESS,
	struct FunctionTest test4 = { testInput4, "the", (testInput4 + 10), &putErrorCodeHere, ERROR_CODE_SUCCESS };


	char testInput5[] = { "Many English words are 'loan words', which is defined as 'a word that has been adopted from one language into another'." }; // Key: word
	//char testKey5[] = { "word" };
	//5 & testInput5[13],
	//5 ERROR_CODE_SUCCESS,
	struct FunctionTest test5 = { testInput5, "word", (testInput5 + 13), &putErrorCodeHere, ERROR_CODE_SUCCESS };


	char testInput6[] = { "The search keys don't have to be letters!  They could be any character or array of characters!  They could even be puntuation!  Maybe even non-printable characters!  Crazy, right?" }; // Key: "!  "
	//char testKey6[] = { "!  " };
	//6 & testInput6[40],
	//6 ERROR_CODE_SUCCESS,
	struct FunctionTest test6 = { testInput6, "!  " , (testInput6 + 40), &putErrorCodeHere, ERROR_CODE_SUCCESS };
																																																				   
																																																	
	char * testInput7 = NULL; // Key: "Doesn't matter"
	//char testKey7[] = { "Doesn't matter" };
	//7 testInput7,
	//7 ERROR_NULL_SENTENCE_POINTER,
	struct FunctionTest test7 = { NULL, "Doesn't matter", (testInput7), &putErrorCodeHere, ERROR_NULL_SENTENCE_POINTER };

	char * testInput8 = NULL; // Key: "Don't bother"
	//char testKey8[] = { "Don't bother" };			  // Two real strings to pass alongside a NULL searchWord
	//8 testInput8,
	//8 ERROR_NULL_SENTENCE_POINTER,
	struct FunctionTest test8 = { testInput8, "Don't bother", (testInput8), &putErrorCodeHere, ERROR_NULL_SENTENCE_POINTER };

	char testInput9[] = { "It's a shame to waste a perfectly good sentence." }; // Key:  NULL
	//char * testKey9 = NULL;
	//9 NULL,
	//9 ERROR_NULL_SEARCH_POINTER,
	struct FunctionTest test9 = { testInput9, NULL, NULL, &putErrorCodeHere, ERROR_NULL_SEARCH_POINTER };


	char testInput10[] = { "It's a shame to waste a perfectly good null-terminated string." }; // Key:  NULL
	//char * testKey10 = NULL;												   // Two real strings to pass alongside a NULL errorCode
	//10 NULL,
	//10 ERROR_NULL_SEARCH_POINTER,
	struct FunctionTest test10 = { testInput10, NULL, NULL, &putErrorCodeHere, ERROR_NULL_SEARCH_POINTER };


	char testInput11[] = { "At least electrons are free." }; // Key: are
	//char testKey11[] = { "are" };
	//11 NULL,
	//11 DEFAULT_ERROR_CODE,
	struct FunctionTest test11 = { testInput11, "are", NULL, NULL, DEFAULT_ERROR_CODE };


	char testInput12[] = { "Even if they're not free, there is are a plethora of electrons freely available." }; // Key: e
	//char testKey12[] = { "e" };											 // Two strings that will pass more NULL search keys
	//12 NULL,
	//12 DEFAULT_ERROR_CODE,
	struct FunctionTest test12 = { testInput12, "e", NULL, NULL, DEFAULT_ERROR_CODE };


	char testInput13[] = { "You can't find a key here!" }; // Key: NULL
	//char * testKey13 = NULL;
	//13 NULL,
	//13 ERROR_NULL_SEARCH_POINTER,
	struct FunctionTest test13 = { testInput13, NULL, NULL, &putErrorCodeHere, ERROR_NULL_SEARCH_POINTER };


	char testInput14[] = { "Take a picture!  It'll last longer." }; // Key: NULL
	//char * testKey14 = NULL;						// Two strings to pass long keys
	//14 NULL,
	//14 ERROR_NULL_SEARCH_POINTER,
	struct FunctionTest test14 = { testInput14, NULL, NULL, &putErrorCodeHere, ERROR_NULL_SEARCH_POINTER };


	char testInput15[] = { "Now is the time for all good men to come to the aid of their country." }; // Key: "come to the aid"
	//char testKey15[] = { "come to the aid" };
	//15 & testInput15[36],
	//15 ERROR_CODE_SUCCESS,
	struct FunctionTest test15 = { testInput15, "come to the aid", (testInput15 + 36), &putErrorCodeHere, ERROR_CODE_SUCCESS };


	char testInput16[] = { "Sometimes it's hard to play the game the way it was intended to be played instead of following the game's rules as written." }; // Key: "play the game"
	//char testKey16[] = { "play the game" };										// Edge cases that may break find_the_word()													
	//16 & testInput16[23],
	//16 ERROR_CODE_SUCCESS,
	struct FunctionTest test16 = { testInput16, "play the game", (testInput16 + 23), &putErrorCodeHere, ERROR_CODE_SUCCESS };


	char testInput17[] = { "I hope you didn't find anything here!" }; // Key: '\0' (0x0)
	char testKey17[] = { 0x0, 0x0 };
	//17 NULL,
	//17 ERROR_SEARCH_NOT_FOUND,
	struct FunctionTest test17 = { testInput17, testKey17, NULL, &putErrorCodeHere, ERROR_SEARCH_NOT_FOUND };


	char testInput18[BUFF_SIZE] = { 0 }; // Key: "Don't do it!"
	char testKey18[] = { "Don't do it!" };
	//18 NULL,
	//18 ERROR_SEARCH_NOT_FOUND,
	struct FunctionTest test18 = { testInput18, "Don't do it!", NULL, &putErrorCodeHere, ERROR_SEARCH_NOT_FOUND };


	char testInput19[] = { "Not a long string" }; // Key: "long string as a search key"
	//char testKey19[] = { "long string as a search key" };
	//19 NULL,
	//19 ERROR_SEARCH_NOT_FOUND,
	struct FunctionTest test19 = { testInput19, "long string as a search key", NULL, &putErrorCodeHere, ERROR_SEARCH_NOT_FOUND };


	char testInput20[] = { "part" }; // Key: "partial"
	//char testKey20[] = { "partial" };
	//20 NULL,
	//20 ERROR_SEARCH_NOT_FOUND,
	struct FunctionTest test20 = { testInput20, "partial", NULL, &putErrorCodeHere, ERROR_SEARCH_NOT_FOUND };


	char testInput21[BUFF_SIZE] = { 0 }; // Key: '\0' (0x0)
	//char testKey21[1] = { 0x0 }; // Two strings whose keys are non printable characters
	//21 NULL,
	//21 ERROR_SEARCH_NOT_FOUND,
	struct FunctionTest test21 = { testInput21, "\0", NULL, &putErrorCodeHere, ERROR_SEARCH_NOT_FOUND };


	char testInput22[] = { 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9, 0xA, 0xB, 0xC, 0xD, 0xE, 0xF, 0x0 }; // Key: 0x8
	char testKey22[] = { 0x8, 0x0 };
	//22 & testInput22[7],
	//22 ERROR_CODE_SUCCESS,
	struct FunctionTest test22 = { testInput22, (testKey22), (testInput22 + 7), &putErrorCodeHere, ERROR_CODE_SUCCESS };


	char testInput23[] = { 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, 0x1E, 0x1D, 0x1C, 0x1B, 0x1A, 0x0 }; // Key: 0x1C
	char testKey23[] = { 0x1C, 0x0 };			// Two strings that include characters from the extended ASCII codes
	//23 & testInput23[2],
	//23 ERROR_CODE_SUCCESS,
	struct FunctionTest test23 = { testInput23, testKey23, (testInput23 + 2), &putErrorCodeHere, ERROR_CODE_SUCCESS };


	char testInput24[] = { '\n', 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, '\n', 0x7C, '$', '(', '5', ')', '$', 0x7C, '\n', 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, '\n', 0x0 }; // Key: 0xC4
	char testKey24[] = { 0xC4, 0x0 };																												   //	puts(testInput24); // DEBUGGING
	//24 & testInput24[17],
	//24 ERROR_CODE_SUCCESS,
	struct FunctionTest test24 = { testInput24, testKey24, (testInput24 + 17), &putErrorCodeHere, ERROR_CODE_SUCCESS };


	char testInput25[] = { 0xC4, 0x5C, 0x5F, 0x2, 0x5F, 0x2F, 0xC4, 0x0 }; // Key: 0x2F
	char testKey25[] = { 0x2F, 0x0 };
	//25 & testInput25[5],
	//25 ERROR_CODE_SUCCESS,
	struct FunctionTest test25 = { testInput25, testKey25, (testInput25 + 5), &putErrorCodeHere, ERROR_CODE_SUCCESS };


	char testInput26[] = { "Sometimes keys are at the beggining of a string." }; // Key: "Sometime"
	char testKey26[] = { "Sometime" };
	//26 & testInput26[0],
	//26 ERROR_CODE_SUCCESS,
	struct FunctionTest test26 = { testInput26, "Sometime", (testInput26 + 0), &putErrorCodeHere, ERROR_CODE_SUCCESS };


	char testInput27[] = { "When you lose an item, you always find it in the last place you look." }; // Key: "look."
	//char testKey27[] = { "look." };
	//27 & testInput27[64]
	//27 ERROR_CODE_SUCCESS
	struct FunctionTest test27 = { testInput27, "look.", (testInput27 + 64), &putErrorCodeHere, ERROR_CODE_SUCCESS };


	//char * testInputArray[] = { \
	//	testInput0, testInput1, testInput2, \
	//	testInput3, testInput4, testInput5, \
	//	testInput6, testInput7, testInput8, \
	//	testInput9, testInput10, testInput11, \
	//	testInput12, testInput13, testInput14, \
	//	testInput15, testInput16, testInput17, \
	//	testInput18, testInput19, testInput20, \
	//	testInput21, testInput22, testInput23, \
	//	testInput24, testInput25, testInput26, \
	//	testInput27 };

	/* TEST SEARCH KEYS */
	//char testKey0[] = { 10,0 };
	//char testKey1[] = { "The" };
	//char testKey2[] = { "bird" };
	//char testKey3[] = { "is" };
	//char testKey4[] = { "the" };
	//char testKey5[] = { "word" };
	//char testKey6[] = { "!  " };
	//char testKey7[] = { "Doesn't matter" };
	//char testKey8[] = { "Don't bother" };
	//char * testKey9 = NULL;
	//char * testKey10 = NULL;
	//char testKey11[] = { "are" };
	//char testKey12[] = { "e" };
	//char * testKey13 = NULL;
	//char * testKey14 = NULL;
	//char testKey15[] = { "come to the aid" };
	//char testKey16[] = { "play the game" };
	//char testKey17[] = { 0x0, 0x0 };
	//char testKey18[] = { "Don't do it!" };
	//char testKey19[] = { "long string as a search key" };
	//char testKey20[] = { "partial" };
	//char testKey21[1] = { 0x0 };
	//char testKey22[] = { 0x8, 0x0 };
	//char testKey23[] = { 0x1C, 0x0 };
	//char testKey24[] = { 0xC4, 0x0 };
	//char testKey25[] = { 0x2F, 0x0 };
	//char testKey26[] = { "Sometime" };
	//char testKey27[] = { "look." };
	//char * testKeyArray[] = { \
	//	testKey0, testKey1, testKey2, \
	//	testKey3, testKey4, testKey5, \
	//	testKey6, testKey7, testKey8, \
	//	testKey9, testKey10, testKey11, \
	//	testKey12, testKey13, testKey14, \
	//	testKey15, testKey16, testKey17, \
	//	testKey18, testKey19, testKey20, \
	//	testKey21, testKey22, testKey23, \
	//	testKey24, testKey25, testKey26, \
	//	testKey27 };

	/* TEST ERROR CODE POINTERS */
	//int * errorCodePointerArray[] = { \
	//	&putErrorCodeHere, &putErrorCodeHere, &putErrorCodeHere, \
	//	&putErrorCodeHere, &putErrorCodeHere, &putErrorCodeHere, \
	//	&putErrorCodeHere, &putErrorCodeHere, &putErrorCodeHere, \
	//	&putErrorCodeHere, &putErrorCodeHere, NULL, \
	//	NULL, &putErrorCodeHere, &putErrorCodeHere, \
	//	&putErrorCodeHere, &putErrorCodeHere, &putErrorCodeHere, \
	//	&putErrorCodeHere, &putErrorCodeHere, &putErrorCodeHere, \
	//	&putErrorCodeHere, &putErrorCodeHere, &putErrorCodeHere, \
	//	&putErrorCodeHere, &putErrorCodeHere, &putErrorCodeHere, \
	//	&putErrorCodeHere };

	/* TEST RETURN VALUES */
	//char * expectedReturnValueArray[] = { \
	//	0 &testInput0[29],
	//	1 &testInput1[21],
	//	2 &testInput2[33], \
	//	3 &testInput3[2], 
	//	4 &testInput4[10],
	//	5 &testInput5[13], \
	//	6 &testInput6[40], 
	//	7 testInput7, 
	//	8 testInput8, \
	//	9 NULL,
	//	10 NULL, 
	//	11 NULL, \
	//	12 NULL, 
	//	13 NULL, 
	//	14 NULL, \
	//	15 &testInput15[36], 
	//	16 &testInput16[23],
	//	17 NULL, \
	//	18 NULL, 
	//	19 NULL, 
	//	20 NULL, \
	//	21 NULL, 
	//	22 &testInput22[7], 
	//	23 &testInput23[2], \
	//	24 &testInput24[17],
	//	25 &testInput25[5], 
	//	26 &testInput26[0], \
	//	27 &testInput27[64] };

	/* TEST ERROR CODES */
	//int expectedErrorCodeArray[] = { \
	//	0 ERROR_CODE_SUCCESS,
	//	1 ERROR_CODE_SUCCESS, 
	//	2 ERROR_CODE_SUCCESS, \
	//	3 ERROR_CODE_SUCCESS, 
	//	4 ERROR_CODE_SUCCESS, 
	//	5 ERROR_CODE_SUCCESS, \
	//	6 ERROR_CODE_SUCCESS, 
	//	7 ERROR_NULL_SENTENCE_POINTER, 
	//	8 ERROR_NULL_SENTENCE_POINTER, \
	//	9 ERROR_NULL_SEARCH_POINTER, 
	//	10 ERROR_NULL_SEARCH_POINTER,
	//	11 DEFAULT_ERROR_CODE, \
	//	12 DEFAULT_ERROR_CODE,
	//	13 ERROR_NULL_SEARCH_POINTER, 
	//	14 ERROR_NULL_SEARCH_POINTER, \
	//	15 ERROR_CODE_SUCCESS,
	//	16 ERROR_CODE_SUCCESS, 
	//	17 ERROR_SEARCH_NOT_FOUND, \
	//	18 ERROR_SEARCH_NOT_FOUND, 
	//	19 ERROR_SEARCH_NOT_FOUND, 
	//	20 ERROR_SEARCH_NOT_FOUND, \
	//	21 ERROR_SEARCH_NOT_FOUND, 
	//	22 ERROR_CODE_SUCCESS, 
	//	23 ERROR_CODE_SUCCESS, \
	//	24 ERROR_CODE_SUCCESS,
	//	25 ERROR_CODE_SUCCESS,
	//	26 ERROR_CODE_SUCCESS, \
	//	27 ERROR_CODE_SUCCESS };

	/* CALCULATE THE NUMBER OF TESTS */
	struct FunctionTest inputArray[] = { test0, test1, test2, test3, test4, test5, test6, test7, test8, test9, test10,\
										test11, test12, test13, test14, test15, test16, test17, test18, test19, test20,\
										test21,  test22,  test23,  test24,  test25,  test26,  test27};

	int numTotalTests = sizeof(inputArray) / sizeof(*(inputArray));
	
	printf("The length of the test array is: %d \n", sizeof(inputArray)/sizeof(*(inputArray))); // DEBUGGING

	/* EXECUTE THE TESTS */
	for (i = 0; i < numTotalTests; i++)
	{
		/* 0. TEST HEADER */
		printf("\n");
		printf("************\n");
		printf("* TEST #%02d *\n", i);
		printf("************\n");
		//char * find_the_word(char * sentence_ptr, char * searchWord_ptr, int * errorCode_ptr)

		//tempReturnValue_ptr = find_the_word(testInputArray[i], testKeyArray[i], errorCodePointerArray[i]);
		tempReturnValue_ptr = find_the_word((inputArray + i)->sentence_ptr, (inputArray + i)->searchWord_ptr, (inputArray + i)->errorCode_ptr);

		/* 1. TEST RETURN VALUE */
		numTestsRun++;
		printf("\tReturn Value Test:\t");
		if (tempReturnValue_ptr == ((inputArray + i)->find_word_return_ptr))
		{
			puts("Pass");
			numTestsPassed++;
		}
		else
		{
			puts("FAIL!");
			printf("\t\tExpected pointer:\t%p\n", ((inputArray + i)->find_word_return_ptr));
			printf("\t\tReceived pointer:\t%d\n", tempReturnValue_ptr);
		}

		/* 2. TEST ERROR CODE */
		numTestsRun++;
		printf("\tError Code Test:\t");
		if (putErrorCodeHere == ((inputArray + i)->default_error_ptr))
		{
			puts("Pass");
			numTestsPassed++;
		}
		else
		{
			puts("FAIL!");
			printf("\t\tExpected error code:\t%d\n", ((inputArray + i)->default_error_ptr));
			printf("\t\tReceived error code:\t%d\n", putErrorCodeHere);
			if (putErrorCodeHere == DEFAULT_ERROR_CODE)
			{
				puts("\t\tError code not even updated!");
			}
		}

		putErrorCodeHere = DEFAULT_ERROR_CODE; // Reset error code
	}

	if (numTestsRun)
	{
		printf("\n\n\n*******************************\n");
		printf("Out of the %d tests that ran...\n", numTestsRun);
		printf("%d tests passed.\n", numTestsPassed);
		printf("*******************************\n");
	}

	return 0;
}

/*
* FUNCTION:   find_the_word(char * sentence_ptr, char * searchWord_ptr, int * errorCode_ptr)
*
* ARGUMENTS:  sentence_ptr is a char pointer to a null-terminated string to search
*             searchWord_ptr is a char pointer to a null-terminated string to find inside sentence_ptr
*             errorCode_ptr is an int pointer.  Store your error code at this memory address.
*
* RETURNS:	   char pointer to the first occurrence of the searchWord_ptr string found in the
*                 sentence_ptr string.  The char pointer should be a memory address in the
*                 sentence_ptr string and this memory address should represent the first 'index'
*                 of the searchWord_ptr string.  This memory address from the sentence_ptr string
*                 should dereference to a value equivalent to searchWord_ptr[0].
*             All other occurences should return NULL.  This includes, but is not limited to, the
*                 following:
*                     sentence_ptr is NULL
*                     searchWord_ptr is NULL
*                     errorCode_ptr is NULL
*                     the searchWord_ptr string is not found in the sentence_ptr string
*
* NOTES:      This function only utilizes address arithmetic to access information within the
*                 null-terminated char array found at both sentence_ptr and searchWord_ptr
*             Only access elements of the char array found at both sentence_ptr and searchWord_ptr
*                 using address arithmetic (AKA pointer math).  The definition of this function should
*                 be entirely devoid of the [ and ] characters.  (e.g., sentence_ptr[i] is forbidden)
*             The only guarantees for the arguments are:
*                 Any string found at sentence_ptr is null-terminated
*                 Any string found at searchWord_ptr is null-terminated
*             There is no guarantee sentence_ptr has an address (return NULL if it's NULL and assign the
*                 proper error code)
*             There is no guarantee searchWord_ptr has an address (return NULL if it's NULL and assign the
*                 proper error code)
*             There is no guarantee errorCode_ptr has an address (return NULL if it's NULL and assign the
*                 proper error code)
*             There is no guarantee the string found at sentence_ptr contains the string found at
*                 searchWord_ptr (return NULL if the string at searchWord_ptr is not found and assign the
*                 proper error code)
*             There is no guarantee the strings found at both sentence_ptr and searchWord_ptr will
*                 return a string length longer than zero (0)
*/
char * find_the_word(char * sentence_ptr, char * searchWord_ptr, int * errorCode_ptr)
{
	//sentence_ptr – char pointer to a null terminated string
	//searchWord_ptr – char pointer to a null terminated string
	//errorCode_ptr – int memory address to store an error code

	if (!sentence_ptr)	// NULL sentence pointer error
	{
		*errorCode_ptr = ERROR_NULL_SENTENCE_POINTER;	// set errorCode pointer
		return NULL;
	}
	if (!searchWord_ptr)	// NULL searchWord pointer error
	{
		*errorCode_ptr = ERROR_NULL_SEARCH_POINTER;	// set errorCode pointer
		return NULL;
	}
	if (!errorCode_ptr)	// didn't include errorCode pointer?
		return NULL;


	int x = 0;
	int targetLength = strlen(searchWord_ptr);	// Need the length of our target word

	while (*(sentence_ptr + x) != '\0')	// loop until the null terminator
	{
		int y = 0;
		for (int b = 0; b < targetLength; b++)	// iterate through EVERY set of X length pairs
		{
			if (*(sentence_ptr + b + x) == *(searchWord_ptr + y))
			{
				if (targetLength == 1)	// found 1 of 1 target...
				{
					printf("FOUND IT!\n");
					*errorCode_ptr = ERROR_CODE_SUCCESS;
					return &*(sentence_ptr + x);
				}
				else
				{
					if (*(sentence_ptr + x + b) != *(searchWord_ptr + y))	// if current char in X length pair matches position of target word
					{
						break;
					}
					else	// current char in X length pair matches position of target word
					{
						//printf("match! %c %c\n", *(sentence_ptr + b + x), *(searchWord_ptr + y));
						y++;
					}

					if (y == targetLength)	// made it through entire set of targets without any error O.o 
					{
						printf("FOUND IT!\n");
						*errorCode_ptr = ERROR_CODE_SUCCESS;
						return &*(sentence_ptr + x);	// profit.
					}
				}
			}
		}
		x++;
	}

	// Didn't find what we are looking for :(
	*errorCode_ptr = ERROR_SEARCH_NOT_FOUND;
	return NULL;

}