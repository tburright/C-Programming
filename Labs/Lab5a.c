//Tom Burright
//Lab 5A

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

int main(void)
{
	double rightTriangleLegA = 0;
	double rightTriangleLegB = 0;
	double rightTriangleHypotenuse = 0;

	printf("Input the length of leg A and leg B for your right triangle. \n"); 
	printf("Separate the two lengths with a space. (e.g., 4 7) \n");
	scanf("%lf %lf", &rightTriangleLegA, &rightTriangleLegB);

	/* INPUT VALIDATION */
    // test for positive input on rightTriangleLegA
	if (rightTriangleLegA <= 0)
	{
		printf("(Error) Please enter a positive number for leg 1: ");
		scanf(" %lf", &rightTriangleLegA);
	}

	// test for positive input on rightTriangleLegB
	if (rightTriangleLegB <= 0)
	{
		printf("(Error) Please enter a positive number for leg 2: ");
		scanf(" %lf", &rightTriangleLegB);
	}

    if ((rightTriangleLegA <= 0) || (rightTriangleLegB <= 0))
	{
        printf("Just go home for the day. Maybe we can try again tomorrow -.-\n");
        return 0;
	} else 	if ((rightTriangleLegA > 0) && (rightTriangleLegB > 0))
	{
		rightTriangleHypotenuse = sqrt((rightTriangleLegA*rightTriangleLegA) + (rightTriangleLegB*rightTriangleLegB));
		printf("Your hippopotamus is %.2f \n", rightTriangleHypotenuse);
	}

	return 0;
}