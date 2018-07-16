//Tom Burright

#include <stdio.h>

int main()
{

	//////// ARITHMETIC OPERATOR QUIZ BONUS QUESTION ////////
	int y = 4; int z = 5;
	// 1 + 2 * (3 + y) + 5;        // Result 20
	printf("1.) (2 * (3 + y) + ++z): %d\n", (2 * (3 + y) + ++z));


	//////// RELATIONAL OPERATOR QUIZ BONUS QUESTION ////////
	int x = 2; y = 6;
	// x != y != 3 >= x;          // Result 0
	printf("2.) (x != y) != 3 >= x: %d\n", (x != y) != 3 >= x);

	//////// ASSIGNMENT OPERATOR QUIZ BONUS QUESTION ////////    
	x = 9; y = 3;
	//(y %= y) || (x /= x--);    // Result 0
	printf("3.) (0) || (0): %d\n", (0) || (0));
	printf("3.) (y %= y) || (x -= x): %d\n", (y %= y) || (x -= x));

    return 0;
}