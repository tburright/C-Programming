#include <stdio.h>

int main(void)
{

    int lowerLimit = -10;
    int upperLimit = 10;
    float x = 1.0, y = 2.1;

    char firstInit = 'T', middleInit = 'A', lastInit = 'B';

    double pi = 3.14159265359;
    int finalResult = 0; 

    printf("lower is:\033[0;31m %d \033[0m\n", lowerLimit);
    printf("upper is:\033[0;31m %d \033[0m\n", upperLimit);
    printf("x is:\033[0;31m %f \033[0m\n", x);
    printf("y is:\033[0;31m %f \033[0m\n", y);
    printf("first initial:\033[0;31m %c \033[0m\n", firstInit);
    printf("middle initial:\033[0;31m %c \033[0m\n", middleInit);
    printf("last initial:\033[0;31m %c \033[0m\n", lastInit);
    printf("pi is: \033[0;31m %.15f \033[0m\n", pi);
    

    return 0;
}