//tom burright
//ch 7 Demo Lab 1

#include <stdio.h>
//#define _CRT_SECURE_NO_WARNINGS

int main()
{


	//IF statement :
	//Initialize a char array to zero.
	//Safely store a user - input string in the char array.
	//Safely print the string IF the first element is not equal to zero(array897[0] != 0).

	char someArray[256] = { 0 };

	printf("I am a digital warrior and the keyboard is my katana: ");           // Ask user for input
	scanf("%255[^\n]s", someArray);         // Prompt input, limit to 255, kill on newline

											// Check for empty string
	if (someArray[0] != 0)
	{
		printf("%s", someArray);
	}
	// else
	// {
	//     printf("The string is empty!");
	// }
	  

	return 0;

}