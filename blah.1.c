/*
    Performlab3B.c
    Name: Elias Perez
    Date: July 11th, 2018
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    //Declare and zeroize a char array with a dimension of 256
    char chosenphrase [256] = {0};
    //Assign your chosen pharse to the leading elements of that array
    chosenphrase [0] = 'h';
    chosenphrase [1] = 'i';
    chosenphrase [2] = ' ';
    chosenphrase [3] = 'h';
    chosenphrase [4] = 'u';
    chosenphrase [5] = 'n';
    chosenphrase [6] = 'g';
    chosenphrase [7] = 'r';
    chosenphrase [8] = 'y';
    chosenphrase [9] = ' ';
    chosenphrase [10] = 'i';
    chosenphrase [11] = 'm';
    chosenphrase [12] = ' ';
    chosenphrase [13] = 'd';
    chosenphrase [14] = 'a';
    chosenphrase [15] = 'd';
    //Explicitly verify your string is nul-terminated
    chosenphrase [256] = 0;
    //  Print your string
    printf("my chosen phrase is %s \n", chosenphrase);

    int length = strlen(chosenphrase);
    printf("\n%d\n", length);

    return 0;
}

//QUIZ: What is your string length?
//15