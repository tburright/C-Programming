//Tom "Ghozt" Burright
//PLA 7.2c

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <inttypes.h>

int main(void)
{
	uint32_t thing1 = 0;
	uint32_t thing2 = 0;
	uint32_t thing3 = 0;

	printf("Enter two numbers: ");
	scanf("%u %u", &thing1, &thing2);

	if ( thing1 == thing2)
	{
		printf("ERRORRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR\n");
	}
	else if (thing1 > thing2)
	{
		printf("\nBefore:\nthing1 %d \nthing2 %d \nthing3 %d \n\n", thing1, thing2, thing3);
		thing1 = thing1 + thing3;
		thing3 = thing1 - thing3;
		thing1 = thing1 - thing3;
		printf("After:\nthing1 %d \nthing2 %d \nthing3 %d \n", thing1, thing2, thing3);

	}
	else
	{
		printf("\nBefore:\nthing1 %d \nthing2 %d \nthing3 %d \n\n", thing1, thing2, thing3);
		thing2 = thing2 + thing3;
		thing3 = thing2 - thing3;
		thing2 = thing2 - thing3;
		printf("After:\nthing1 %d \nthing2 %d \nthing3 %d \n", thing1, thing2, thing3);
	}

	if ((thing1 + thing2 + thing3) > 2)
	{
		printf("\nThe sum of all three variables is %d.\n", thing1 + thing2 + thing3);
	}

	return 0;
}