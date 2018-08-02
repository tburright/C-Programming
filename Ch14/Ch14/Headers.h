#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED



//Just in case NULL was undefined
#ifndef NULL
#define NULL ((void*) 0)
#endif

//Meat and potatoes
typedef struct Student90COS
{
	char student_initials[4];
	char music_artist[35];
	char dream_car[35];
	struct Student90COS * next_node;
}node;

//strcpy(CLASS04->student_initials, "DDD");
//CLASS04->music_artist = "Destinys Child";
//CLASS04->dream_car = "Dodge Durango";
//CLASS04->next_node = CLASS05;

// char * find_the_word(char * sentence_ptr, char * searchWord_ptr, int * errorCode_ptr);
void printList(node *n, int menuchoice, char *initials);
void clear_stream(char *in);

#endif