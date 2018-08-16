/*
Ghozt
Vector Practice
*/
#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <sstream>


using namespace std;

int printIt(vector<int> myVector, int option);
int stillActive();

int main()
{
	int active = 1;  // used for entire app while loop
	int menuChoice;  // int for handling menu selections
	signed int newNumber;  // handles add/subtract
	signed int newPosition;
	vector<int> myVector{ 3, 6, 7, 9, 11, 17, 22 };  // define our vector
	auto total = 0; // handles add/subtract
	string input_str;

	while (active == 1)
	{
		printIt(myVector, 0);  // call print function to display vector instead of writing loop each time

		// Display a fancy menu
		cout << "Menu" << endl;
		cout << "1.) Input numbers" << endl;
		cout << "2.) Add numbers" << endl;
		cout << "3.) Subtract numbers" << endl;
		cout << "4.) Delete last element" << endl;
		cout << "5.) Delete entire vector :[" << endl;
		cout << "6.) BONUS!!\n" << endl;

		cout << "Please select an option from above: ";

		cin >> menuChoice;  // Take user input

		switch (menuChoice)
		{
		case 1:
		{
			cin.clear();
			system("cls");  // Clear screen to make it purdy
			cout << "Please enter a list of numbers seperated by spaces to add to the vector: ";
			//cin >> newNumber;  // accept user input
			//myVector.emplace_back(newNumber);  // Add number to end of vector

			cin.ignore();  // IGNORE BULLSHIT NEWLINES THAT MESS CIN UP D:
			string input;  // initialize string for cin
			getline(cin, input);  // get line from cin into input
			stringstream stream(input);  // make string stream

			while (1)
			{
				int n;
				stream >> n;
				if (!stream)
					break;
				myVector.emplace_back(n);  // Add number to end of vector
			}

			cout << endl;  // because new line.
			printIt(myVector, 0);  // call print function to display vector instead of writing loop each time
			active = stillActive();  // check if they want to continue
			break;
		}
		case 2:
			cin.clear();
			system("cls");  // Clear screen to make it purdy
			cout << "Adding all numbers." << endl;
			printIt(myVector, 0);  // call print function to display vector instead of writing loop each time

			for (int i = 0; i < myVector.size(); ++i) // loop through entire vector
			{
				total += myVector.at(i);  // add each thing
			}

			cout << "Total is: " << total << endl;
			cout << endl;

			active = stillActive();  // check if they want to continue
			break;

		case 3:  // Subtract all numbers
			cin.clear();
			system("cls");  // Clear screen to make it purdy
			cout << "Subtracting all numbers." << endl;
			printIt(myVector, 0);  // call print function to display vector instead of writing loop each time

			for (int i = 0; i < myVector.size(); ++i) // loop through entire vector
			{
				total -= myVector.at(i);  // subtract each thing
			}

			cout << "Total is: " << total << endl;

			active = stillActive();  // check if they want to continue
			break;

		case 4:  // Remove last element
			cin.clear();
			system("cls");  // Clear screen to make it purdy
			printIt(myVector, 0);  // call print function to display vector instead of writing loop each time
			cout << "Removing last element.\n" << endl;
			cout << "New vector: \n";
			myVector.pop_back();
			printIt(myVector, 0);  // call print function to display vector instead of writing loop each time

			active = stillActive();  // check if they want to continue
			break;

		case 5:  // Clear entire vector
			cin.clear();
			system("cls");  // Clear screen to make it purdy
			printIt(myVector, 0);  // call print function to display vector instead of writing loop each time
			cout << "CLEARING ENTIRE VECTOR.\n" << endl;
			cout << "New vector: \n";
			myVector.clear();
			printIt(myVector, 0);  // call print function to display vector instead of writing loop each time

			active = stillActive();  // check if they want to continue
			break;

		case 6:  // BONUS
			// Display a fancy menu
			cin.clear();
			system("cls");  // Clear screen to make it purdy
			cout << "BONUS Menu" << endl;
			cout << "1.) Insert a new element at the back of vector" << endl;
			cout << "2.) Insert, at a specific element, an additonal number" << endl;
			cout << "3.) Delete a specific element\n" << endl;

			cout << "Please select an option from above: ";

			cin >> menuChoice;  // Take user input

			switch (menuChoice)
			{
			case 1:
				cin.clear();
				system("cls");  // Clear screen to make it purdy
				cout << "Please enter a number to add to the back of the vector: ";
				cin >> newNumber;  // accept user input
				myVector.emplace_back(newNumber);  // Add number to end of vector

				cout << endl;  // because new line.
				printIt(myVector, 0);  // call print function to display vector instead of writing loop each time
				active = stillActive();  // check if they want to continue
				break;

			case 2:
				cin.clear();
				system("cls");  // Clear screen to make it purdy
				printIt(myVector, 1);
				cout << "Please select a position: ";
				cin >> newPosition;  // accept user input

				cout << "Please enter the number to place in the position: ";
				cin >> newNumber;  // accept user input

				myVector.insert(myVector.begin() + newPosition, newNumber);  // Insert new number in position

				cout << endl;  // because new line.
				printIt(myVector, 0);  // call print function to display vector instead of writing loop each time
				active = stillActive();  // check if they want to continue
				break;

			case 3: 
				cin.clear();
				system("cls");  // Clear screen to make it purdy
				printIt(myVector, 1);
				cout << "Please select a position: ";
				cin >> newPosition;  // accept user input

				myVector.erase(myVector.begin() + newPosition);  // erase number as position

				cout << endl;  // because new line.
				printIt(myVector, 0);  // call print function to display vector instead of writing loop each time
				active = stillActive();  // check if they want to continue
				break;

			default:
				cin.clear();
				system("cls");  // Clear screen to make it purdy
				cout << "FAIL.\n" << endl;
				break;

			}

		default:
			cin.clear();
			system("cls");  // Clear screen to make it purdy
			cout << "FAIL.\n" << endl;
			break;
		}
	}

	return 0;
}

int printIt(vector<int> myVector, int option)
{
	// Print vector loop function to save on writing code
	cout << "My favorite numbers: ";

	if (option == 1) 
	{
		for (int i = 0; i < myVector.size(); ++i)
			cout << "[" << i << "]:" << myVector.at(i) << " ";
	}
	else
	{
		for (int i = 0; i < myVector.size(); ++i)
			cout << myVector.at(i) << " ";
	}
	cout << "\n" << endl;
	return 0;
}

int stillActive()
{
	int menuChoice;
	cout << "Would you like to continue?" << endl;
	cout << "1.) Yes" << endl;
	cout << "2.) No\n" << endl;

	cout << "Please select an option from above: ";
	cin >> menuChoice;

	system("cls");  // Clear screen to make it purdy
	if (menuChoice == 1)  // They want to continue
		return 1;
	else  // Fin.
		return 0;
}