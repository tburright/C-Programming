//Tom Burright
//Stuxnet 2.0

#include <stdio.h>

int main(void)
{
	//Task i: Declare and zeroize an int array with a dimension equal to the number of students + 1
	int classAge[13] = { 0 }; //zeroize?

							  //Task ii: Set index 0 with the age* of the instructor
	classAge[0] = 75;

	//Task iii: Fill the elements of the array with the ages* of the students starting with index 1
	//classAge[1] = 18;
	//classAge[2] = 19;
	//classAge[3] = 20;
	//classAge[4] = 21;
	//classAge[5] = 22;
	//classAge[6] = 23;
	//classAge[7] = 24;
	//classAge[8] = 25;
	//classAge[9] = 26;
	//classAge[10] = 27;
	//classAge[11] = 28;
	//classAge[12] = 29;

	//////////////NEW FOR LOOP! :D //////////////////
	for (int i = 1; i > 13; i++)
	{
		classAge[i] = 17 + i;
	}

	///////////////////////////////////////////


	//Task iv: Print the array
	printf("Class ages-\n");
	for (int i = 0; i < 13; i++) {
		if (i == 0) {
			printf("Teacher: %d \n", classAge[i]);
		}
		else {
			printf("Student: %d \n", classAge[i]);
		}
	}

	//Task 2 i: Declare and initialize a char array with your favorite saying
	//Task 2 iii: Separate each word in the array with a new line character ('\n' or decimal value 10)
	char faveQuote[40] = { "I\nlove\nyou\nlike\na\nfat\nkid\nloves\ncake." };

	//task 2 ii: Ensure the last index is set to nul ('\0')
	faveQuote[40] = '\0';

	printf("\nMy favorite quote-\n");
	printf("%s \n", faveQuote);

	return 0;
}