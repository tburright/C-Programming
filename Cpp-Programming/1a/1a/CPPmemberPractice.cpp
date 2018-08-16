#include <iostream>
#include <string>
class Car {
public:
	void set_values(int, std::string, std::string, std::string, std::string);

	void showMe() {
		std::cout << "Year: " << year << " | Make: " << make << " | Model: " << model << " | color: " << color << " | type: " << type << std::endl;
		//std::cout << "Year: " << year << std::endl;
	}
private:
	int year;
	std::string make;
	std::string model;
	std::string color;
	std::string type;
};


void Car::set_values(int a, std::string b, std::string c, std::string d, std::string e) {
	year = a;
	make = b;
	model = c;
	color = d;
	type = e;
}

//int Car::year;
//std::string Car::make;
//std::string Car::model;
//std::string Car::color;
//std::string Car::type;


int main() {
	Car Cr; // Create an instance of CyberBullet
	Cr.set_values(1, "Geo", "Metro", "red", "hatchback");

	std::cout << "Car: ";
	Cr.showMe();


	std::cin.ignore();
	std::cin.ignore();
	return 0;
}

//void Car::set_values(int, std::string, std::string, std::string, std::string)
//{
//}
