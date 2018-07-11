//4.5 demo lab 1 + 2

#include <stdio.h>

int main(void)
{
    // char buff[4];
    // printf("Enter string: ");
    // fgets(buff, sizeof(buff), stdin);
    // printf("Your string was: "); 
    // puts(buff);    


    char buff2[4];                        // Will store string
    printf("Enter a string: ");          // Prompts user string
    fgets(buff2, sizeof(buff2), stdin);    // Stores user string
    printf("Your string was: ");         // Prefaces output
    fputs(buff2, stdout);                 // Writes to stdout
    return 0;
}