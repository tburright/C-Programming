#include <stdio.h>

int main (void)
{
    char thing [10];
    

    fscanf(stdin, "%c", &thing);
    printf("test");
    printf("thing is %s", thing);

    return 0;
}