//Tom "Ghozt" Burright
//PLA 7.4 a
//Team Alpha

/*
PERFORMANCE LAB(a) 7.4 CONTINUE

Input an unsigned integer "x".
Print the first 20 positive integers that x is divisible by utilizing the mod operator (not the most efficient)
Repeat this process.
Immediately stop this process when the user inputs an integer above 999.
Ignore any "divide by 0" errors using continue.
*/

#include <stdio.h>

int main()
{
	unsigned int x = 0;      // User inputted number
	int y = 1;      // Increment var
	int z = 0;		// Count 20

	printf("Enter a number between 1-999: ");
	scanf("%4d", &x);

	// Rage quit
	if (x > 999)
	{
		printf("Fail.");
		return 0;
	}

	while (z <= 20)
	{
		if (x % y == 0)
		{
			printf("[%d] %d / %d = %d\n", z, x, y, x / y);
			z++;
			y++;
		}
		else
		{
			y++;
			continue;
		}
	}
}