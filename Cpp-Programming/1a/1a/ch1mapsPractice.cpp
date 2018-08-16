/*
Ghozt
Map Practice
*/
#include <iostream>
#include <map>
#include <string>

//using namespace std;

int printIt(std::map<std::string, std::string> officeMap);
int stillActive();

int main()
{
	int active = 1;  // used for entire app while loop
	int menuChoice;  // int for handling menu selections
	signed int newPosition;
	std::map<std::string, std::string> officeMap;
	officeMap.emplace("Tom Burright", "Janitor");

	std::string input_str;

	while (active == 1)
	{
		printIt(officeMap);  // call print function to display vector instead of writing loop each time

		// Display a fancy menu
		std::cout << "Menu" << std::endl;
		std::cout << "1.) Add person and job title" << std::endl;
		std::cout << "2.) Find person\n" << std::endl;

		std::cout << "Please select an option from above: ";

		std::cin >> menuChoice;  // Take user input

		switch (menuChoice)
		{
		case 1:
		{
			std::cin.clear();  // Clear input buffer
			system("cls");  // Clear screen to make it purdy
			std::cout << "Please enter their name: ";
			std::cin.ignore();  // IGNORE BULLSHIT NEWLINES THAT MESS std::cin UP D:
			std::string strName;  // initialize string for std::cin
			std::getline(std::cin, strName);  // get line from std::cin into input

			std::cin.clear();  // Clear input buffer
			std::cout << "Please enter their job title: ";
			std::string strTitle;  // initialize string for std::cin
			std::getline(std::cin, strTitle);  // get line from std::cin into input
	
			officeMap.emplace(strName, strTitle);  // Add number to end of vector

			std::cout << std::endl;  // because new line.
			printIt(officeMap);  // call print function to display vector instead of writing loop each time
			std::cin.clear();
			active = stillActive();  // check if they want to continue
			break;
		}
		case 2:
		{
			std::cin.clear();  // Clear input buffer
			std::cin.ignore();    // IGNORE BULLSHIT NEWLINES THAT MESS std::cin UP D:
			system("cls");  // Clear screen to make it purdy
			std::cout << "Please enter their name: ";

			std::string strName;  // initialize string for std::cin
			std::getline(std::cin, strName);  // get line from std::cin into input

			for (auto i = officeMap.cbegin(); i != officeMap.cend(); ++i)
			{
				if (i->first == strName)
				{
					std::cout << "\nFound them!" << std::endl;
					std::cout << "Name: " << i->first << " Job: " << i->second << "\n" << std::endl;
				}
			}

			std::cin.clear();
			std::cout << "Would you like to delete them?" << std::endl;
			std::cout << "1.) Yes" << std::endl;
			std::cout << "2.) No\n" << std::endl;

			std::cout << "Please select an option from above: ";
			std::cin >> menuChoice;

			if (menuChoice == 1)  // They want to continue
				officeMap.erase(strName);
			else  // Fin.
				return 0;

			system("cls");  // Clear screen to make it purdy

			printIt(officeMap);  // call print function to display vector instead of writing loop each time
			std::cin.clear();
			active = stillActive();  // check if they want to continue
			break;
		}

		default:
			std::cin.clear();
			system("cls");  // Clear screen to make it purdy
			std::cout << "FAIL.\n" << std::endl;
			break;
		}
	}

	return 0;
}

int printIt(std::map<std::string, std::string> officeMap)
{
	// Print vector loop function to save on writing code
	std::cout << "Office Roster: " << std::endl;

	for (auto i = officeMap.cbegin(); i != officeMap.cend(); ++i)
	{
		std::cout << "NAME: " << i->first << " JOB TITLE: " << i->second << "\n";
	}

	std::cout << "\n" << std::endl;

	return 0;
}

int stillActive()
{
	int menuChoice;
	std::cout << "Would you like to continue?" << std::endl;
	std::cout << "1.) Yes" << std::endl;
	std::cout << "2.) No\n" << std::endl;

	std::cout << "Please select an option from above: ";
	std::cin >> menuChoice;

	system("cls");  // Clear screen to make it purdy
	if (menuChoice == 1)  // They want to continue
		return 1;
	else  // Fin.
		return 0;
}