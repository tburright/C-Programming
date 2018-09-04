//Ghozt
//ch 15 Output! PLA
#define _CRT_SECURE_NO_WARNINGS	
#include <string.h>
#include <errno.h>
#include <stdio.h>
#include <assert.h>

void error_reporting(int currErrno);

int main(void)
{
	int currentErrno = 0;
	char currentChar = 0;
	int selection;
	char fileName[15] = { 0 };

	printf("1.) Open missing file\n");
	printf("2.) Open read-only file for writing\n");
	printf("3.) Open file by name\n");
	printf("4.) intentional Assert fail\n");

	printf("Make a selection: ");

	scanf("%d", &selection);

	if (selection == 1) {
		// Open an existing file 
		FILE * weirdFile = fopen("C:\\Temp\\TR-Test-Input-File.txt", "r");
		// Store the errno
		currentErrno = errno;

		if (!weirdFile)
		{
			// Print an error message utilizing the string associated with the errno
			error_reporting(currentErrno);

			// Immediately utilize errno as the return value
			return currentErrno;
		}
	}
	else if (selection == 2)
	{
		// Open a locked file
		FILE * lockedFile = fopen("locked.txt", "w");
		// Store the errno
		currentErrno = errno;

		if (!lockedFile)
		{
			// Print an error message utilizing the string associated with the errno
			error_reporting(currentErrno);

			// Immediately utilize errno as the return value
			return currentErrno;
		}
	}
	else if (selection == 3)
	{
		printf("\nType either \"good.txt\" or \"bad.txt\": ");
		scanf("%s", &fileName);

		// Check for anything other than our 1 good file
		assert(fileName != "good.txt");
		// Open a locked file
		FILE * theFile = fopen(fileName, "r");
		// Store the errno
		currentErrno = errno;

		if (!theFile)
		{
			// Print an error message utilizing the string associated with the errno
			error_reporting(currentErrno);

			// Immediately utilize errno as the return value
			return currentErrno;
		}
		else
		{
			// Utilize feof() to read a file char by char until the end
			while (!feof(theFile))
			{
				currentChar = getc(theFile);	// Read a char and...
				putchar(currentChar);			// ...print a char
			}
		}
		return 0;
	}

	assert(selection < 3);

	return 0;
}

void error_reporting(int currErrno)
{
	if (currErrno)
	{
		printf("\n\nError!\n");
		printf("Error Number: %d\n", currErrno);
		printf("Error String: %s\n", strerror(errno));
	}

	return;
}