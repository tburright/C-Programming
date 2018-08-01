//PERFORMANCE LAB: CONTENT COPY (LINE-BY-LINE)
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	FILE * myFile_ptr = fopen("MMPR.txt", "r"); // Opens a read-only file
	char tempBuff[256] = { 0 };
	char * tempReturnValue = tempBuff;
	if (myFile_ptr != NULL) 	// Verify fopen() succeeded
	{
		while (tempReturnValue) // Continue reading until return value is NULL
		{
			tempReturnValue = fgets(tempBuff, 256, myFile_ptr);
			if (tempReturnValue) 	// If EOF hasn’t been reached…
			{
				puts(tempBuff);	// …print the buffer
			}
		}

		fclose(myFile_ptr); // Always fclose anything you fopen
		printf("\n\nFile read successfully.\n");
	}
	else 			// Otherwise, fopen() failed
	{
		puts("Error opening file!"); 	// Tell the user and...
		getchar(); getchar();
		return -1;			// Return an error value
	}

	getchar();
	return 0;
}