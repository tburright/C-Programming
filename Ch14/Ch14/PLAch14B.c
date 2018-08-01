//Ghozt
///*
//Requirments
//
//-Utilize headers for all declarations
//-Utilize proper naming schemas
//-Document code
//-Push code to Github
//--Use branching! Create a development branch and push to there. Merge when all requirments are met
//-Break your code out into functions
//-Utilize multiple C files if needed
//*/
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "Headers.h"


int main(void)
{
	/*
	Create a linked list, the struct members should contain the following:
    -Each students initals X
    -Each students favoriate musical artist X
    -Each students dream car X
    -Required data for linked list completion X
	*/
	node * CLASS01 = (node*)malloc(sizeof(node));  //head
	node * CLASS02 = (node*)malloc(sizeof(node));
	node * CLASS03 = (node*)malloc(sizeof(node));
	node * CLASS04 = (node*)malloc(sizeof(node));
	node * CLASS05 = (node*)malloc(sizeof(node));
	node * CLASS06 = (node*)malloc(sizeof(node));
	node * CLASS07 = (node*)malloc(sizeof(node));
	node * CLASS08 = (node*)malloc(sizeof(node));
	node * CLASS09 = (node*)malloc(sizeof(node));
	node * CLASS10 = (node*)malloc(sizeof(node));  //tail
	// node * CLASS11 = (node*)malloc(sizeof(node));  //template for AddNode()?

	//head
	strcpy(CLASS01->student_initials, "AAA");
	strcpy(CLASS01->music_artist, "Adele");
	strcpy(CLASS01->dream_car, "Audi A4");
	CLASS01->next_node = CLASS02;

	//node2
	strcpy(CLASS02->student_initials, "BBB");
	strcpy(CLASS02->music_artist, "Bruno Mars");
	strcpy(CLASS02->dream_car, "BMW Z3");
	CLASS02->next_node = CLASS03;

	//node3
	strcpy(CLASS03->student_initials, "CCC");
	strcpy(CLASS03->music_artist, "Coldplay");
	strcpy(CLASS03->dream_car, "Chevy Cobalt");
	CLASS03->next_node = CLASS04;

	//node4
	strcpy(CLASS04->student_initials, "DDD");
	strcpy(CLASS04->music_artist, "Destinys Child");
	strcpy(CLASS04->dream_car, "Dodge Durango");
	CLASS04->next_node = CLASS05;

	//node5
	strcpy(CLASS05->student_initials, "EEE");
	strcpy(CLASS05->music_artist,"Eve 6");
	strcpy(CLASS05->dream_car, "Epic Torq");
	CLASS05->next_node = CLASS06;

	//node6
	strcpy(CLASS06->student_initials, "FFF");
	strcpy(CLASS06->music_artist, "Five Finger Death Punch");
	strcpy(CLASS06->dream_car, "Ford Fiesta");
	CLASS06->next_node = CLASS07;

	//node7
	strcpy(CLASS07->student_initials, "GGG");
	strcpy(CLASS07->music_artist, "Godsmack");
	strcpy(CLASS07->dream_car, "GMC Granite");
	CLASS07->next_node = CLASS08;

	//node8
	strcpy(CLASS08->student_initials, "HHH");
	strcpy(CLASS08->music_artist, "Hanson");
	strcpy(CLASS08->dream_car, "Hyundai Hellion");
	CLASS08->next_node = CLASS09;

	//node9
	strcpy(CLASS09->student_initials, "III");
	strcpy(CLASS09->music_artist, "IVY");
	strcpy(CLASS09->dream_car, "Infiniti IPL");
	CLASS09->next_node = CLASS10;

	//tail
	strcpy(CLASS10->student_initials, "ZZZ");
	strcpy(CLASS10->music_artist, "ZZ Top");
	strcpy(CLASS10->dream_car, "Zenos E10");
	CLASS10->next_node = NULL;

	/*
	Create a menu allowing for the following :
		-Print out of all students and all of their data
		-Print out of all students and only one of their data members on request of user(ex.print out all students and their fav car)
		-Print out of only a specific student(This one can be challanging)
	*/
	printf("Welcome!\n");

	while (active == 1)  //While loop to continue menu until user is finished (active set on 'would you like to continue?' menu
	{
		//Print default menu
		//menuChoice = "";
		printf("\nMenu:\n");
		printf("\t1.) Print out of all students and all of their data.\n");
		printf("\t2.) Print out of all students with select data.\n");
		printf("\t3.) Print out one specific student.\n");
		printf("\t4.) Bonus stuff!\n\n");
		printf("\t5.) Jk, didn't really want to run this. Please exit.\n\n");
		printf("Please enter an option from above (1-5): ");

		//Take menu input as decimal
		while (scanf(" %d", &menuChoice) != 1)
		{
			clear_stream(stdin);  //Prevents non-decimal
		}

		printf("\nYou chose %d\n\n", menuChoice);

		//Huge switch for Allllll the menu trees
		switch (menuChoice) {

		// Print out of all students and all of their data
		case 1: 

			printf("Full student data list:\n");
			printList(CLASS01, 1, NULL);
			break;

		// Print out of all students with select data
		case 2: 

			//Narrowing down for "select data"
			printf("\t1.) Print out of all students and their favorite musical artist.\n");
			printf("\t2.) Print out of all students and their dream car.\n\n");
			printf("Please enter an option from above (1-2): ");

			while (scanf("%2d", &menuChoice)!= 1)
			{
				clear_stream(stdin);  //Prevents non-decimal
			}

			printf("\nYou chose %d\n\n", menuChoice);
			menuChoice = menuChoice + 20;  //Increase 20 for function schema
			printf("Select student data list:\n");

			if (menuChoice == 21)  // Print out of all students and their favorite musical artist
			{
				printList(CLASS01, 21, NULL);
			}
			else if (menuChoice == 22)  //Print out of all students and their dream car
			{
				printList(CLASS01, 22, NULL);
			}
			break;

		// Print out of only a specific student
		case  3: 

			printf("Please enter the uppercase intials you would like to search for: ");

			while (scanf("%3s", &initialsSearch) != 1)
			{
				clear_stream(stdin);  //Prevents non-decimal
			}

			printf("\nYou entered %s\n", initialsSearch);
			printf("\nSearching for initials specified:\n");
			printList(CLASS01, 3, initialsSearch);
			break;

		case 4: // Bonus

			//menuChoice = "";
			printf("\t1.) [UNDER CONSTRUCTION] Add additonal students to the end of the list.\n");
			printf("\t2.) Remove student at the end.\n");
			printf("\t3.) Remove a specific student.\n\n");
			printf("Please enter an option from above (1-3): ");

			while (scanf(" %d", &menuChoice) != 1)
			{
				clear_stream(stdin);  //Prevents non-decimal
			}

			printf("\nYou chose %d\n\n", menuChoice);

			switch (menuChoice) {

			//Add additonal students to the end of the list
			case 1:
			//	printf("Please enter their 3 cuppercase initials: ");
			//	while (scanf(" %3s", &student_initials) != 1)
			//	{
			//	}

			//	printf("Please enter their 3 cuppercase initials: ");
			//	while (scanf(" %s", &music_artist) != 1)
			//	{
			//	}

			//	printf("Please enter their 3 cuppercase initials: ");
			//	while (scanf(" %s", &dream_car) != 1)
			//	{
			//	}

			//	printf("%s %s %s\n", student_initials, music_artist, dream_car);
			//	menuChoice = menuChoice + 40;
			//	printList(CLASS01, 41, NULL);
			//	printList(CLASS01, 1, NULL);
			//	//addNode(CLASS10, student_initials, music_artist, dream_car);
				printf("This one is broken :(\n\n");
				break;

			// Remove student at the end
			case 2:
				// TODO- convert lowercase to uppercase
				//printf("Please enter their 3 cuppercase initials: ");

				//while (scanf(" %3s", &student_initials) != 1)
				//{
				//	clear_stream(stdin);  //Prevents non-decimal
				//}

				//printf("%s \n", student_initials);
				menuChoice = menuChoice + 40;
				printList(CLASS01, menuChoice, NULL);
				printf("Printing your new list:\n");
				printList(CLASS01, 1, NULL);
				break;

			//Remove a specific student
			case 3:
				printf("Please enter their 3 cuppercase initials: ");

				while (scanf(" %3s", &student_initials) != 1)
				{
					clear_stream(stdin);  //Prevents non-decimal
				}

				printf("%s \n", student_initials);
				menuChoice = menuChoice + 40;
				printList(CLASS01, menuChoice, student_initials);
				printf("Printing your new list:\n");
				printList(CLASS01, 1, NULL);
				break;

			default:
				printf("Invalid option.\n\n");
				break;
			}
			break;

		case 5:
			return 0;

		default:
			printf("Invalid option.\n\n");
			break;
		}

		printf("Would you like to continue?\n");
		printf("\t1.) Yes.\n");
		printf("\t2.) No.\n\n");
		printf("Please enter an option from above (1-2): ");

		while (scanf(" %d", &menuChoice) != 1)
		{
			clear_stream(stdin);  //Prevents non-decimal
		}

		if (menuChoice == 2)  //2 = they want to quit
		{
			active = 0;  //Continues loop
			//menuChoice = "";
		}

	}
	return 0;
	
}

