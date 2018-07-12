#include <stdio.h>

int main(void)
{
//////////////////////////////////
///// BASIC SCANF STATEMENTS /////
//////////////////////////////////

    int *theAnswer = 42;
    float pi = 3.1444444444;
    float posSqrtTwo = 3.33333;
    char answerNum1 = 'c';
    char nickName [] = {"steve"};


//printf(scanf("%d", &theAnswer));            // Reads an integer from stdin
printf(scanf("%i", &theAnswer));            // Reads an integer from stdin
scanf("%f", &pi);                   // Reads a float from stdin
scanf("%lf", &posSqrtTwo);          // Reads a double from stdin
scanf("%c", &answerNum1);           // Reads a char from stdin

 ///// BASIC SCANF STRING INPUT /////
 char nickname[20] = {0};
 scanf("%s", nickName);             // Dangerously reads string from stdin
 scanf("%19s", nickName);           // Safer string read from stdin
    
}