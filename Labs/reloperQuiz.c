//Tom Burright
//Relational Operator Quiz
#include <stdio.h>

int main(void)
{

	int x = 2;
	int y = 6;

    printf("x = 2, y = 6\n");
    printf("========================\n");
	printf("y < x: %d\n", y < x); // 0
	printf("y <= x: %d\n", y <= x); // 0
	printf("y > x: %d\n", y > x);  // 1
	printf("y >= x: %d\n", y >= x); // 1
	printf("y == x: %d\n", y == x); // 0
	printf("y != x: %d\n", y != x); // 1
	printf("2 == y: %d\n", 2 == y); // 0
	printf("6 != x: %d\n", 6 != x); // 1
	printf("6 >= 2: %d\n", 6 >= 2); // 1
	printf("2 < 6: %d\n", 2 < 6); // 1
	printf("x != y != 3 >= x: %d\n", (x != y != 3 >= x)); //  1?
	return 0;
}
