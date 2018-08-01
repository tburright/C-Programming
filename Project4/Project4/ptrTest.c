#include <stdio.h>
int main()
{
	char someThing;
	char *myString;
	char *myString2;

	someThing = 'A';
	myString = &someThing;
	myString2 = *myString;

	printf("Char variable 'someThing'('A')\n");
	printf("Size: %ld \n", sizeof(someThing));
	printf("Contents: %c \n", someThing);
	printf("Location: %p \n\n", &someThing);

	printf("Char variable 'myString'(&someThing) \n");
	printf("Size: %ld \n", sizeof(myString));
	printf("Contents: %p \n", myString);	// &someThing (address of something)
	printf("Contents: %c \n", *myString);


	return(0);
}