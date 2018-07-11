#include <stdio.h>

int main(void)
{
    char userInput = 0;
    printf("Enter a char: ");
    userInput = getchar();
    printf("Your char was: ");
    putchar(userInput);
    printf("\n");

    printf("Next char is: ");
    putchar(userInput++);
    printf("\n");


    return 0;
}
