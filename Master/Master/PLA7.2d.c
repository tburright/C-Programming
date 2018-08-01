//Tom "Ghozt" Burright
//PLA 7.2d

//Write a program that will evaluate a simple math formula.
//Input the formula with two integers separated by an arithmetic operator from one line.
//Example: 1 + 1, (-8) - 3, 2 * (-7), (-15) / (-4)
//	Use a switch statement to print the correct value using the operators as cases.
//	Set the default condition to an error.
//	Ensure any division provides a double answer with a precision of two decimal places.
//
//	NOTE : Scan the arithmetic operator as a char

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	int number1, number2 = 0;
	char operator1 = 0;

	printf("Please enter a simple math formula: ");
	scanf("%d %c %d", &number1, &operator1, &number2);

	printf("%d %c %d = ", number1, operator1, number2);

	switch (operator1)
	{
		case '+': //43
			printf("%d\n", number1 + number2);
			break;
		case '-': //45
			printf("%d\n", number1 - number2);
			break;
		case '*': //42
			printf("%d\n", number1 * number2);
			break;
		case '/': //47
			printf("%.2f\n", (double)number1 / (double)number2);
			break;
		default:
			printf("Rage quit.\n");
			break;
	}

	return 0;
}