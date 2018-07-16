//Tom Burright
//Ch 6 Capstone
// Initialize an unsigned int with an arbitrary value
// Ask the user input on which bit position to flip (0 through ((sizeof(unsigned int)*8) -1))
// Create a dynamic bit mask based on the user input "inputMask"
// XOR the original value with the inputMask and print the result

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <inttypes.h>
#include <math.h>

int main(void)
{
	//part 1
	uint32_t originalNumber = 255;
	uint32_t inputNumber = 0;
	uint32_t transitionNumber = 0;
	uint32_t inputMask = 0;

	//part 2
	printf("Which bit position would you like to flip? [0 - %d]: ", (sizeof(originalNumber)*8) -1);
	scanf("%d", &inputNumber);

	printf("The number was %u (Hex: 0x%08X) \n", originalNumber, originalNumber);
	printf("You chose bit: %u\n", inputNumber);
	
	//part 3
	inputMask = pow(2, inputNumber);
	
	//part 4
	transitionNumber = originalNumber ^ inputMask;
	printf("Your new number is %u (Hex: 0x%08X) \n", transitionNumber, transitionNumber, transitionNumber);

	return 0;
}