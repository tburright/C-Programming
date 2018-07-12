//Tom Burright
//Lab4d Part 1

#include <stdio.h>

int main(void)
{
    // char fname [100];
    // char mname [100];
    // char lname [100];

    // printf("Please enter your full name: ");
    // scanf("%99s\t%99s\t%99s", &fname, &mname, &lname);

    // printf("\nHello,\n%s\t\n%s\t\n%s\n", fname, mname, lname);

    // return 0;

    int num1, num2;

    printf("Enter two numbers separated by an asterisk (*), to be multiplied: ");
    scanf("%d*%d", &num1, &num2);
    printf("%d times %d equals is %d :)\n", num1, num2, num1 * num2);


}