//Tom Burright
//Assignment Operators Quiz
#include <stdio.h>
#include <math.h>

int main()
{

	int x = 9;
	int y = 3;

    printf("x = 9, y = 3\n");
    printf("========================================\n");

	printf("x *- y: %d\n", x *- y); // 27
	x = 9; y = 3;
	printf("x /= y: %d\n", x /= y); // 3
	x = 9; y = 3;
	printf("x %= y: %d\n", x %= y); // 0
	x = 9; y = 3;
	printf("x += y: %d\n", x += y); // 12
	x = 9; y = 3;
	printf("x -= y: %d\n", x -= y); // 6
	x = 9; y = 3;
	printf("x *= ++y: %d\n", x *= ++y); // 36
	x = 9; y = 3;
	printf("x /= y--: %d\n", x /= y--); // 3
	x = 9; y = 3;
	printf("x %= --x: %d\n", x %= --x);// 1
	x = 9; y = 3;
	printf("x += --y: %d\n", x += --y); // 11
	x = 9; y = 3;
	printf("x -= y++: %d\n", x -= y++); // 6
	x = 9; y = 3;
	printf("(y %= y) || (x /= x--): %d\n", ((y %= y) || (x /= x--))); // 0 

    return 0;
}