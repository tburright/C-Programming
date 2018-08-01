#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	return 0;
	FILE * myFile_ptr = fopen("MMPR.txt", "r"); // Opens a read-only file
	FILE * newFile_ptr = fopen("idfk2.txt", "w"); // Opens a read-only file
	printf("Wrote idfk2.txt\n");
	char tempBuff[256] = { 0 };
	char * tempReturnValue = tempBuff;
	if (myFile_ptr != NULL) 	// Verify fopen() succeeded
	{
		while (tempReturnValue) // Continue reading until return value is NULL
		{
			tempReturnValue = fgets(tempBuff, 256, myFile_ptr);
			if (tempReturnValue) 	// If EOF hasn’t been reached…
			{
				//readFromFile = getc(myFile_ptr); 	// Read one character
				putc(tempReturnValue, newFile_ptr); 		// Print that character
			}
		}

		fclose(myFile_ptr); // Always fclose anything you fopen
		fclose(newFile_ptr);
		printf("READ FILE SUCCESSFULLY.\n");
	}
	else 			// Otherwise, fopen() f\nailed
	{
		puts("Error opening file!"); 	// Tell the user and...
		getchar(); getchar();
		return -1;			// Return an error value
	}

	FILE * new2File_ptr = fopen("idfk2.txt", "r");
	char readFromFile2 = 0;

	if (new2File_ptr != NULL) 	// Verify fopen() succeeded
	{
		while (readFromFile2 != EOF) // Continue reading until the end of file
		{
			readFromFile2 = getc(new2File_ptr); 	// Read one character
			putc(readFromFile2, stdout); 		// Print that character
		}
		fclose(new2File_ptr); // Always fclose anything you fopen
		printf("\n\nREAD NUMBER 2 SUCCESSFULLY\n");
	}
	else 			// Otherwise, fopen() failed
	{
		puts("Error opening file!"); 	// Tell the user and...
		getchar(); getchar();
		return -1;			// Return an error value
	}


	printf("WTFFFFFFFFFFFFFFFFFFFFFFFFFFFFf\n");

	getchar(); getchar();

	return 0;
}