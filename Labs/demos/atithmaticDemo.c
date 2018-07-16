//Tom Burright
//Arithmetic Operators Quiz

#include <stdio.h>

int main (void)
{
    int x = 7;
    int y = 4;

    printf("x = 7, y = 4\n");
    printf("========================================\n");
    printf("x * y = %d\n", x * y);  //  = 28
    printf("z = x / y; z = %d\n", x/y);  // z = 1
    printf("x % y = %d\n", x%y);  // 3
    printf("y + x = %d\n", y + x);  // 11
    printf("y - x = %d\n", y - x);  //  -3
    printf("-y = %d\n", -y);  // y = -4
    printf("++x = %d\n", ++x);  // x = 8
    x--; //reset
    printf("y++ = %d\n", y++);  // y = 4
    y--; //reset
    printf("x-- = %d\n", x--);  // x = 7
    x++; //reset
    printf("--y = %d\n", --y);  // y = 3
    y++; //reset
    printf("--x = %d\n", --x);  // x = 6
    x++; //reset
    printf("1 + 2 * (3 + y) + 5 = %d\n", 1+2*(3+y)+5);  // =20

    return 0;
}