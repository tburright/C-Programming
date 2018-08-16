//Ghozt
//Lab3A

#include <iostream>
#include <sstream>
#include <string>

void func(Animal *xyz) { xyz->eat(); }

class Animal
{
public:
	virtual void eat() { std::cout << "I'm eating generic food."; }
};

class Cat : public Animal
{
public:
	void eat() { std::cout << "I'm eating a rat."; }
};


int main() {

	func(animal); // Outputs: "I'm eating generic food."
	func(cat);    // Outputs: "I'm eating a rat."

}

