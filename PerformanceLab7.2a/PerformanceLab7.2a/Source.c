//Tom "Ghozt" Burright
//Perf Lab 7.2a
#include <stdio.h>

int main(void)
{	
	//Initialize a char array to zero.
	char myArray[100] = { 0 };

	//Safely store a user-input string in the char array.
	printf("WHO ARE YOU?!: ");
	scanf("%99[^\n]s", myArray);

	//Safely print the string IF the following conditions are both true:
	//The first element greater than or equal to decimal value 32.
	//The first element is less than decimal value 126.
	if (myArray[0] == 0) 
	{
		printf("No anonymous users allowed :P");
	} else if (myArray[0] >= 32 && myArray[0] <= 126)
	{
		printf("Oh. Hello, %s :)\n", myArray);
	}

	return 0;
}