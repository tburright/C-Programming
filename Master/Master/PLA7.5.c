// Tom "Ghozt" Burright
/*PERFORMANCE LAB(a) 7.5 NESTED CONTROL FLOW

Print all the even or odd numbers from 0 to 100.
Prompt the user for input to indicate odds or evens.
Loop from 0 to 100 and print all indicated numbers.
Use and IF statement to check if even or odd.*/

#include <stdio.h>

int main(void)
{
	int selection;
	int x;

	// ask user for even or odd numbers
	printf("Would you like to see EVEN or ODD numbers?\n");
	printf("1.) Even\n2.) Odd\n\n");
	printf("[Please enter a selection]: ");
	scanf("%d", &selection);
	if ((selection != 1) && (selection != 2))	 // check for invalid entry
	{
		printf("I hate you.");
		return 0;
	}

	//loop 0 - 100
	for (x = 0; x <= 100; x++)
	{
		//use if statement to check if even or odd
		if (x % 2 == 0 && selection == 1) // x = even and user selection = even
		{
			printf("[Even] %d\n", x);
		}
		else if (x % 2 != 0 && selection == 2) // x = odd and user selection = odd
		{
			printf("[odd] %d\n", x);
		}
	}

	return 0;
}