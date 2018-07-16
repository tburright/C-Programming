#include <stdio.h>

int main(void)
{
    // int charlie = 0;
    // printf("Enter a Charmander: ");
    // charlie = getc(stdin);
    // printf("Your Charizard was: ");
    // putc(charlie, stdout);
    // printf("\n");

    // char charcoal []= {72, 101, 108, 108, 111, 32, 119, 111, 114, 108, 100, 0};
    // printf("%s\n",charcoal);


float someNum = 12.3456;                    // Var used as comparison

// printf("%f\n", someNum);                     // 12.345600
// printf("%0f\n", someNum);                    // 12.345600
// printf("%2f\n", someNum);                    // 12.345600
// printf("%4f\n", someNum);                    // 12.346000
// printf("%8f\n", someNum);                    // 12.345600
// printf("%16f\n", someNum);                   //         12.345600                (8 positions)
// printf("%25f\n", someNum);                   //                  12.345600       (17 positions)


printf("%f\n", someNum);                     // 12.345600
printf("%f\n", someNum * -1.0);              // -12.345600
printf("%+f\n", someNum);                    // +12.345600
printf("%+f\n", someNum * -1.0);             // -12.346000
printf("% f\n", someNum);                    //  12.345600
printf("% f\n", someNum * -1.0);             // -12.345600    
printf("%-f\n", someNum);                    // 12.345600  
printf("%-f\n", someNum * -1.0);             // -12.345600  
printf("%0f\n", someNum);                    // 12.345600  
printf("%016f\n", someNum);                  // 000000012.345600




    return 0;
}