#include <stdio.h>

int main(void)
{
    char myFavWord [9] = {0}; // init a char array

    myFavWord [0] = 84;  // t
    myFavWord [1] = 115; // s
    myFavWord [2] = 117; // u
    myFavWord [3] = 110; // n
    myFavWord [4] = 100; // d
    myFavWord [5] = 101; // e
    myFavWord [6] = 114; // r
    myFavWord [7] = 101; // e

    myFavWord [8] = 0; // \0

    printf("My favorite word is %s!\n", myFavWord);

    myFavWord [8] = 84; 

    printf("My favorite word is %s!\n", myFavWord);
    return 0;
}