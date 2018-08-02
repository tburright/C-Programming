#include "Headers.h"


int strTest;  //strcmp test results
int strTestCount = 0;  //Counter

/*
Prints out a list starting at node n

EXAMPLE
Stident initialt: AAA
-Favorite music artist: Adele
-Dream car: Audi A4
*/
void printList(node *n, int menuChoice, char initials[4])
{
	printf("==============================================================\n");
	printf("==============================================================");
	if (menuChoice == 1)  //Print full list
	{
		while (n != NULL)
		{
			printf("\nStudent initials: %s \n\t-Favorite music artist: %s \n\t-Dream car: %s\n", n->student_initials, n->music_artist, n->dream_car);
			n = n->next_node;
		}
	}
	else if (menuChoice == 21)  //Print students and music artists
	{
		while (n != NULL)
		{
			printf("\nStudent initials: %s \n\t-Favorite music artist: %s\n", n->student_initials, n->music_artist);
			n = n->next_node;
		}
	}
	else if (menuChoice == 22)  //Print students and dream car
	{
		while (n != NULL)
		{
			printf("\nStudent initials: %s \n\t-Dream car: %s\n", n->student_initials, n->dream_car);
			n = n->next_node;
		}
	}
	else if (menuChoice == 3)  //Search for one person
	{
		while (n != NULL)
		{
			strTest = strcmp(n->student_initials, initials);  //strcmp to check if current initials match search string
			if (strTest == 0)
			{
				printf("Student initials: %s \n\t-Favorite music artist: %s \n\t-Dream car: %s\n", n->student_initials, n->music_artist, n->dream_car);
				strTestCount++;  //Counter to know if we found any
				break;
			}
			n = n->next_node;
		}
		if (strTestCount == 0)
			printf("\nNone found :(\n\n");
	}
	else if (menuChoice == 42)  //Remove students at the end
	{
		while (n->student_initials != NULL)
		{
			if (n->next_node != NULL)
			{
				if (n->next_node->next_node == NULL)
				{
					printf("\nREMOVED SUCCESSFULLY\n");
					n->next_node = NULL;
					break;
				}
				n = n->next_node;
			}
			else
			{
				printf("\nONLY ONE LEFT!");  //Last one in the list
				break;
			}
		}
	}
	else if (menuChoice == 43)  //Remove a specific student
	{
		while (n->next_node != NULL)
		{
			strTest = strcmp(n->next_node->student_initials, initials);
			if (strTest == 0)
			{
				printf("\nFOUND %s\n", initials);
				n->next_node = n->next_node->next_node;
				strTestCount++;
			}
			n = n->next_node;
		}
	}
	printf("==============================================================\n");
	printf("==============================================================\n\n");

	return;
}

void clear_stream(char *in)
{
	//Other options from Will 3 hours too late -.-
	//while ((c = getchar()) != ‘\n’ && c != EOF) { }

	int chars;
	do
		chars = getc(in);
	while (chars != '\n' && chars != EOF);
}