//Ghozt
//Lab3A

#include <iostream>
#include <sstream>
#include <string>

class Person {
public:
	void setValues(std::string, std::string, int, std::string);

	std::string showMe() {  // member function to return Person data
		std::stringstream ss;  // Stringstream for handeling long string
		ss << "First Name: " << name << " | Last Name: " << lastName << " | Age: " << age << " | Gender: " << gender;
		std::string s = ss.str();  // Load string with stringstream
		std::cout << s << "\n" << std::endl;  // Dsplay for fun
		return s;
	}
private:
	std::string name;
	std::string lastName;
	int age;
	std::string gender;
};

void Person::setValues(std::string a, std::string b, int c, std::string d) {
	name = a;
	lastName = b;
	age = c;
	gender = d;
}