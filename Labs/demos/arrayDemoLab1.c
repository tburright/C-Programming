#include <stdio.h>

int main(void)
{
    int myIntArray [10] = {100,100,100,100,100,100,100,100,100,100};
    float myFloatArray [5] = {1,2,3,4,5};
    char myCharArray [256] = {0};

    printf("Before:\n");
    printf("myIntArray[2]= %d \n", myIntArray[2]);
 	printf("myFloatArray[2]= %f \n", myFloatArray[2]);
    printf("myCharArray[2]= %c \n\n", myCharArray[2]);

    //myIntArray [y] = (y+1) * 10
    int i = 0;
    for (i=0;i<10;i++)
    {
            myIntArray [i] = (i+1)*10;
    }


    //myFloatArray [y] = y * 1.1
    for (i=0;i<5;i++)
    {
            myFloatArray [i] = myFloatArray [i] * 1.1;
    }

    myCharArray [0] = 'B';
    myCharArray [1] = 'U';
    myCharArray [2] = 'R';
    myCharArray [3] = 'R';
    myCharArray [4] = 'I';
    myCharArray [5] = 'G';
    myCharArray [6] = 'H';
    myCharArray [7] = 'T';    
    
    printf("After:\n");
    printf("myIntArray[2]= %d \n", myIntArray[2]);
 	printf("myFloatArray[2]= %f \n", myFloatArray[2]);
    printf("myCharArray[2]= %c \n", myCharArray[2]);

    return 0;
}