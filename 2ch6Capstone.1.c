// //Tom Burright

///////////////////////////////////////////////////////////////////////////////
/////////////////////////Ch 6 Capstone ////////////////////////////
///////////////////////////////////////////////////////////////////////////////
// Initialize an unsigned int with an arbitrary value
// Ask the user input on which bit position to flip (0 through ((sizeof(unsigned int)*8) -1))
// Create a dynamic bit mask based on the user input "inputMask"
// XOR the original value with the inputMask and print the result
///////////////////////////////////////////////////////////////////////////////


#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <inttypes.h>
//#define solution4

int main(void)
{
	//part 1
	uint32_t originalNumber = 170;
	uint32_t inputNumber = 0;
	uint32_t transitionNumber = 0;
	uint32_t inputMask = 0;

	//part 2
	printf("Which bit position would you like to flip? [0 - %d]: ", (sizeof(originalNumber)*8) -1);
	scanf("%u", &inputNumber);
	//(0 through ((sizeof(originalNumber)*8) -1))

	printf("Your number was %u (Hex: 0x%08X) \n", inputNumber, inputNumber);


	// printf("Solution #2 \n");
	// printf("\tA. Bitmask the last four bits from the original into a temp. \n");
	// transitionNumber = inputNumber & 0x0000000F; // Each Hexadecimal F masks four binary bits

	// printf("\tB. Bit shift the temp by 32 - 4 = 28 to put it in position. \n");
	// transitionNumber = transitionNumber << ((sizeof(transitionNumber) * 8) - 4);

	// printf("\tC. Bit shift the original right by 4 to make room. \n");
	// inputNumber = inputNumber >> 4;

	// printf("\tD. OR the bit shifted temp and the bit shifted original. \n");
	// inputNumber = inputNumber | transitionNumber;

	// printf("\tE. Profit. \n");


	if (inputNumber >= 0 && inputNumber <=3)
	{
		// 0000000000000000000000000000XXXX
		printf("1\n");
	} else if (inputNumber >= 4 && inputNumber <=7)
	{
		// 000000000000000000000000XXXX0000
		printf("2\n");
	} else if (inputNumber >= 8 && inputNumber <=11)
	{
		// 00000000000000000000XXXX00000000
		printf("3\n");
	} else if (inputNumber >= 12 && inputNumber <=15)
	{

		printf("4\n");
	} else if (inputNumber >= 16 && inputNumber <=19)
	{

		printf("5\n");
	} else if (inputNumber >= 20 && inputNumber <=23)
	{

		printf("6\n");
	} else if (inputNumber >= 24 && inputNumber <=27)
	{		
		
		printf("7\n");
	} else if (inputNumber >= 28 && inputNumber <=31)
	{

	}
	// 0-3 F 
	// 4-7
	// 8-11
	// 12-15
	// 16-19
	// 20-23
	// 24-27
	// 28-31


	//printf("\tA. Bitmask the last four bits from the original into a temp. \n");
	inputMask = inputNumber;// & 0x00000000; // Each Hexadecimal F masks four binary bits

	//printf("\tB. Bit shift the temp by 32 - 4 = 28 to put it in position. \n");
	//transitionNumber = transitionNumber << ((sizeof(transitionNumber) * 8) - 4);

	//printf("\tD. OR the bit shifted temp and the bit shifted original. \n");
	//inputNumber = inputNumber ^ transitionNumber;
	transitionNumber = originalNumber ^ inputMask;
	printf("Your new number is %u (Hex: 0x%08X) \n", transitionNumber, transitionNumber);

	//printf("Your new number is %u (Hex: 0x%08X) \n", inputNumber, inputNumber);

	return 0;
}
