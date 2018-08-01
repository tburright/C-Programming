#include <stdio.h>
int *secretInt = 0;

int testing(void)
{
	secretInt = 1;

	return 0;
}


int main(void)
{

	testing();

	printf("%d\n", secretInt);
	return 0;
}