#include <stdio.h>
int main()
{	
	// Declare userInput, tempValue , and input_ptr as the same data type
	char userInput;
	char tempValue;
	char *input_ptr;

	printf("Please enter a string: ");
	scanf("%c", &userInput);	// Read user input into variable userInput 

	// Ensure tempValue contains the same value as userInput utilizing one or more memory operators
	input_ptr = &userInput;
	tempValue = *input_ptr;

	// Print the value *and* the pointer for each of the three variables in a human-readable format
	printf("userInput- value: %c address: %p\n", userInput, &userInput);
	printf("tempValue- value: %c address: %p\n", tempValue, &tempValue);
	printf("input_ptr- value: %p address: %p\n", input_ptr, &input_ptr);

	return(0);
}