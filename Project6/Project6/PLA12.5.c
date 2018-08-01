#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main(void)
{
	FILE *myFile_ptr;
	char firstN[30];
	char middleN[30];
	char lastN[30];
	char username[35] = { 0 };
	int totalStudents = 0;

	printf("How many students?:");
	scanf("%d", &totalStudents); // Input how many total students to loop

	if (totalStudents <= 0 || !totalStudents)
	{
		printf("Enter a real number.\n");
		return 0;
	}

	printf("Please enter First Middle and Last names and press enter between each students full name.\n");

	if ((myFile_ptr = freopen("roster.txt", "a", stdout)) == NULL) // opening file a second times writes stdout to file
	{
		printf("Cannot open file.\n");
		return 0;
	}

	for (int i = 0; i < totalStudents; i++)
	{
		scanf("%s %s %s", &firstN, &middleN, &lastN); // Request first, middle, last
		if (!firstN || !middleN || !lastN)	// Something is missing. Errorrrrrrrr!
		{
			fclose(myFile_ptr);
			printf("Please enter First Middle and Last name next time. Bye!\n");
			return 0;
		}

		sprintf(username, "%c%c%s", firstN[0], middleN[0], lastN); // combine first letter of first name, first letter of middle name, and last name
		printf("%s %s %s has a username of %s.\n", firstN, middleN, lastN, username); // printf into file
	}

	fclose(myFile_ptr); // All done. Close file.

	getchar();
	return 0;
}