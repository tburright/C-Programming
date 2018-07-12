//Tom Burright
//Lab 2

#include <stdio.h>

int main(void)
{
    //lab1
	// char testCase[40];
    // testCase[40] = '\0';
	// scanf("%60[^A-Z]s \n", &testCase);
    // printf("%s \n", testCase);
	// return 0;

    int mnth, dy, yr;
    char stuffs []= {72, 101, 108, 108, 111, 32, 119, 111, 114, 108, 100, 0};

    printf("%s\nPlease enter a date in <mm>-<dd>-<yyyy> format:", stuffs);
    scanf("%2d-%2d-%4d", &mnth, &dy, &yr);
    printf("%02d/%02d/%04d \n", mnth, dy, yr);

    return 0;
}