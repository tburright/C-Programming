#pragma once
#include <iostream>
#include <chrono>
#include <thread>
#include <string.h>
#include "mecha.h"
//#include <conio.h>
#include <stdlib.h>

void delay(int x);
void typeIt(std::string it, int x, bool y);
void fancyMech2();

// Sleep function
void delay(int x)
{
	std::this_thread::sleep_for(std::chrono::milliseconds(x));
}

// Write out char by char with a delay
void typeIt(std::string it, int x, bool y)
{
	for (auto i = 0; i < it.length(); i++)
	{
		std::cout << it[i];
		delay(x);
	}
	if (y == true)
		std::cout << std::endl;
}

// Used for special abilities
int gamble()
{
	int v1 = rand() % 100;
	if (v1 % 2 == 0)
		return 1;
	else
		return 0;
}

// print out fancy ascii mech
void fancyMech2()
{
	std::cout << "\t	          "; std::cout << "	          ";
	typeIt("----             ----", 1, 1);
	std::cout << "\t	         "; std::cout << "	         ";
	typeIt("|oooo|           |oooo|", 1, 1);
	std::cout << "\t	         "; std::cout << "	         ";
	typeIt("|oooo|           |oooo|", 1, 1);
	std::cout << "\t	         "; std::cout << "	         ";
	typeIt("|oooo| /-------\\ |oooo|", 1, 1);
	std::cout << "\t	        "; std::cout << "	        ";
	typeIt("(|*ooo|/\\  | |  /\\|ooo*|)", 1, 1);
	std::cout << "\t	          "; std::cout << "	          ";
	typeIt("----| /-------\\ |----", 1, 1);
	std::cout << "\t	        "; std::cout << "                ";
	typeIt("/--\\| | / \\ | / \\ | |/--\\ ", 1, 1);
	std::cout << "\t	     "; std::cout << "	             ";
	typeIt("___/\\ || ||  /---\\  || | | /\\___", 1, 1);
	std::cout << "\t	   "; std::cout << "	           ";
	typeIt("/\\\\__/\\-/|_|\\--|\\_/|--/|_|\\-/\\__//\\ ", 1, 1);
	std::cout << "\t	  "; std::cout << "	          ";
	typeIt("| /          0=\\o---o/=0          \\ |", 1, 1);
	std::cout << "\t	  "; std::cout << "	          ";
	typeIt("|-|             \\o_o/             |-|", 1, 1);
	std::cout << "\t	  "; std::cout << "	          ";
	typeIt("(=)            |=====|            (=)", 1, 1);
	std::cout << "\t	  "; std::cout << "	          ";
	typeIt("|-|        _ __ |---| __ _        |-|", 1, 1);
	std::cout << "\t	 "; std::cout << "          	 ";
	typeIt("/---\\     /| |||=======||| |\\     /---\\ ", 1, 1);
	std::cout << "\t	 "; std::cout << "	         ";
	typeIt("|<0>|     || |||=======||| ||     |<0>|", 1, 1);
	std::cout << "\t	 "; std::cout << "	         ";
	typeIt("\\---/      \\|_|--      --|_|/     \\---/", 1, 1);
	std::cout << "\t	  "; std::cout << "                ";
	typeIt("|o|        ||            ||       |o|", 1, 1);
	std::cout << "\t	            "; std::cout << "	            ";
	typeIt("/||            ||\\ ", 1, 1);
	std::cout << "\t	          "; std::cout << "	          ";
	typeIt("/--||\\          /||--\\ ", 1, 1);
	std::cout << "\t	          "; std::cout << "	          ";
	typeIt("|====|          |====|", 1, 1);
	std::cout << "\t	          "; std::cout << "	          ";
	typeIt("\\_||_/          \\_||_/", 1, 1);
	std::cout << "\t	           "; std::cout << "	           ";
	typeIt("/||\\            /||\\ ", 1, 1);
	std::cout << "\t	           "; std::cout << "	           ";
	typeIt("||||            ||||", 1, 1);
	std::cout << "\t	          "; std::cout << "	          ";
	typeIt("//--\\\\          //--\\\\", 1, 1);
	// Nobody will notice his shorter legs O.o
	//std::cout << "";
	//typeIt("	          ||  ||          ||  ||", 1, 1);
	//std::cout << "                  ";
	//typeIt("||  ||          ||  ||", 1, 1);
	std::cout << "\t                  "; std::cout << "                ";
	typeIt("\\|  |/          \\|  |/", 1, 1);
	std::cout << "\t                  "; std::cout << "                ";
	typeIt("/\\__/\\          /\\__/\\ ", 1, 1);
	std::cout << "\t               "; std::cout << "                ";
	typeIt("__ /====\\ __    __ /====\\ _", 1, 1);
	std::cout << "\t              "; std::cout << "                ";
	typeIt("/_/==|__|==\\_\\  /_/==|__|==\\_\\ ", 1, 0);

	delay(1000);  // Make them stare at the pic a bit longer
}

