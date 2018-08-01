//Tom "Ghozt" Burright
//PLA 7.2b

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	//Initialize a signed int to 0.
	int userNumber = 0;
	unsigned i;

	//Input a number from the user and store it in the signed int.
	printf("Input a number: ");
	scanf("%d", &userNumber);

	//Determine if the number is negative or positive utilizing a bitwise operator.
	//Utilizing an IF-ELSE statement:
	//INDICATE if the number is negative
	//	Otherwise, print the original value in binary, and use a bitwise operation to flip one bit to make it negative
	//	Print the binary
	if (!(userNumber >> 31 | !userNumber))
	//Source: https://stackoverflow.com/questions/3912375/check-if-a-number-x-is-positive-x0-by-only-using-bitwise-operators-in-c
	{
		printf("The number %d is positive. Lets make it negative :D\n", userNumber);
		userNumber = userNumber * -1;
		printf("Boom! %d. #Magic\n", userNumber);
		printf("Represented in binary: ", userNumber);
		for (i = 1 << 31; i > 0; i = i / 2) 
		{
			if (userNumber & i)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
	}
	else 
	{
		printf("\nThe number %d is negative. Have a nice day!\n");
	}

	return 0;
}