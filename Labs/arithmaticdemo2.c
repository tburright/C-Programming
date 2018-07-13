//Tom Burright
//Pythagoras w/ input validation*

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
	/* rightTriangleLegA > 0 tests that the user input was positive */
	if (rightTriangleLegA <= 0)
	{
		printf("Please enter a positive number: ");
		scanf("%lf", rightTriangleLegA);
	}

	/* rightTriangleLegB > 0 tests that the user input was positive */
	if (rightTriangleLegB <= 0)
	{
		printf("Please enter a positive number: ");
		scanf("%lf", rightTriangleLegB);
	}

	if ((rightTriangleLegA > 0) && (rightTriangleLegB > 0))
	{
		rightTriangleHypotenuse = sqrt((rightTriangleLegA*rightTriangleLegA) + (rightTriangleLegB*rightTriangleLegB));
		printf("Your hippopotamus is %.2f \n", rightTriangleHypotenuse);
	}

	return 0;
}
