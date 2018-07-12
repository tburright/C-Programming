#include <stdio.h>

int main(void)
{
    int charlie = 0;
    printf("Enter a Charmander: ");
    charlie = getc(stdin);
    printf("Your Charizard was: ");
    putc(charlie, stdout);
    printf("\n");
    char charcoal []= {72, 101, 108, 108, 111, 32, 119, 111, 114, 108, 100, 0};
    printf("%s\n",charcoal);

    return 0;
}

