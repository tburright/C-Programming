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

void delay(int x)
{
	std::this_thread::sleep_for(std::chrono::milliseconds(x));
}

void typeIt(std::string it, int x, bool y)
{
	for (int i = 0; i < it.length(); i++)
	{
		std::cout << it[i];
		delay(x);
	}
	if (y == true)
		std::cout << std::endl;
}

int gamble()
{
	int v1 = rand() % 100;
	if (v1 % 2 == 0)
		return 1;
	else
		return 0;

}
