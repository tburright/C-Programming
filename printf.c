#include <stdio.h>

int main(void)
{
    printf("%f\n", 1.2 );
    printf("%+8f\n", -1.798 );
    printf("% 7.2f\n", 0.987654321);
    printf("%-6.1f\n", 13.37);
    printf("%f\n", 69);
    printf("Yours is %05.2f\n", 1.2345);
    printf("%s", "Hewwo world?\n\0");
    printf("%9.5s", "Hewwo World?\n\0");
    printf("%016.11s", "hewwo world?\n\0");
    
    
}