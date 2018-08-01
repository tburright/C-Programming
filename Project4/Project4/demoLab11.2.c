#include <stdio.h>


int * find_smallest_natural_number(int * intArray_ptr, int arraySize)
{
	if (!intArray_ptr)	// Return NULL if intArray_ptr is NULL
	{
		return NULL;
	}
	if (arraySize <= 0)	// Return NULL if arraySize is unrealistic 
	{
		return NULL;
	}

	int tempSmallest = 100;

	for (int i = 0; i < arraySize; i++)
	{
		if (*(intArray_ptr + i) < tempSmallest)	// if the value at intArray_ptr + i (someScores[i]) is less than previous record for smallest
		{
			printf("*someScores[%d] = %d | SMALLER THAN CURRENT SMALLEST RECORD: %d \n", i, *(intArray_ptr + i), tempSmallest);
			tempSmallest = *(intArray_ptr + i);	// set new record holder
		}
		else	// value at intArray_ptr + i (someScores[i]) is bigger than current record holder
		{
			printf("*someScores[%d] = %d | BIGGER THAN CURRENT SMALLEST RECORD: %d \n", i, *(intArray_ptr + i), tempSmallest);
		}

	}

	return tempSmallest;	// return smallest found in array
}

int main()
{

	int someScores[8] = { 9, 5, 6 ,7, 4, 7, 2, 8 };
	int * someScores_ptr = someScores;
	int test = 0;

	test = find_smallest_natural_number(someScores_ptr, 8);	// call fancy function

	if (test == NULL) 
	{
		printf("rage quit.");
		return 0;
	}
	else
	{
		printf("Smallest was: %d\n", test);	// profit
	}

	return(0);
}