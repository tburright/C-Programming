/*
Ghozt
*/
#include <iostream>
#include <string>   // for string class
using namespace std;

int main()
{
	string myString("Hewwo World");  // Define new string
	auto mySubStr = myString.substr(0, 5);  // Create substr with just "Hewwo"

	cout << "String:...................." << myString << std::endl;  // Print myString(Hewwo World) string
	cout << "String length:............." << myString.length() << std::endl;  // Print length of myString
	cout << "SubString:................." << mySubStr << std::endl;  //print subsstr(hewwo)
	cout << "The \"r\" is located at pos: " << myString.find("r") << std::endl;  // Search for "r"
	cout << "New substring:............." << mySubStr.append(" Ghozt") << std::endl;  //Append() name to substr

	return 0;
}
