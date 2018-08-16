//Ghozt
//Lab3A

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "person.h"

int log_roster(std::vector<Person>&, std::ofstream&);
int generate_roster(std::vector<Person>&);

int main()
{
	std::ofstream outfile("roster.txt");
	std::vector<Person> roster;

	int roster_size = generate_roster(roster);
	int logged_count = log_roster(roster, outfile);

	if (roster_size == logged_count)
		std::cout << "Roster logged successfully";
	else
		std::cout << "Roster size and logged count mismatch. Error!" << std::endl;

	roster.clear();

	std::cin.ignore();  // Pause before exiting
	std::cin.ignore();
	return 0;

}
//Arguments: std::vector<person>& roster - reference a vector containing the list of students in the class
//           std::ofstream& - a reference to the ofstream outfile object you will write too 
//Returns:  int count of the number of records written out 
//Purpose: write out the logic
int log_roster(std::vector<Person>& roster, std::ofstream& outfile)
{
	int count = 0; // Counter to return amount of record written
	if (outfile.is_open())
	{
		for (size_t i = 0; i < roster.size(); i++)  // Loop through size of roster
		{
			outfile << roster.at(i).showMe() << std::endl;
			count++;
		}

		std::cout << "File written" << std::endl;
	}
	else
	{
		std::cout << "Unable to open file…";
	}
	outfile.close();

	return count;  // Return total added
}

//Arguments: std::vector<Person>& roster - a reference to a vector that will contain the students you input 
//Returns: int count of the number of records input 
//Purpose: receive input and load the vector 
int generate_roster(std::vector<Person>& roster)
{
	int count = 0;  // Counter for number of records input 
	int amount = 0;  // user input for amount of people to insert into roster

	std::string name;
	std::string lastName;
	int age;
	std::string gender;
	Person currentPerson;

	// ask how many people to add
	std::cout << "How many people would you like to add to the roster?: ";
	std::cin >> amount;

	//loop to fill out each persons info
	for (int i = 0; i < amount; i++)  // Loop through desired amount of people to add
	{
		std::cout << "\nPerson #" << i+1 << std::endl;
		std::cout << "First name: ";
		std::cin >> name;

		std::cout << "Last name: ";
		std::cin >> lastName;

		std::cout << "Age: ";
		std::cin >> age;

		std::cout << "Gender ";
		std::cin >> gender;

		currentPerson.setValues(name, lastName, age, gender);  // Set values for current person object

		roster.push_back(currentPerson);  // Push new person object to back of roster

		count++;  // Increase counter
	}
	std::cout << std::endl;

	return count;  // Return total added

}