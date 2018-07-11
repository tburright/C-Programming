/*
Lab 3B: Strings

    Declare and zeroize a char array with a dimension of 256
    Assign your chosen pharse to the leading elements of that array
    Explicitly verify your string is nul-terminated
    Print your string

QUIZ: What is your string length?

EVIL: Replace/remove/comment all null ('\0') characters and print the string
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char stuffs [256] = {0};

    stuffs [0] = 65;
    stuffs [1] = 66;
    stuffs [2] = 67;
    stuffs [3] = 68;
    stuffs [4] = 69;
    stuffs [5] = 70;
    stuffs [6] = 71;
    stuffs [7] = 72;
    stuffs [8] = 73;
    stuffs [9] = 0; // \0

    printf("%s\n", stuffs);

    int length = strlen(stuffs);
    printf("The string length is %d.\n", length);

}