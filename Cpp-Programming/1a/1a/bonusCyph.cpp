//CryptoGraham
//Ghozt

#include <iostream>
#include <fstream>  // Needed for file
#include <string>

int main()
{
	std::ofstream file("secret.txt");
	std::string userInput;
	std::string result;
	int count;
	if (file.is_open())
	{
		std::cout << "Enter your super secret string: ";
		std::cin >> userInput;

		std::cout << "Enter your secret number: ";
		std::cin >> count;


		for (int i = 0; i<userInput.length(); i++)
		{

			if (isupper(userInput[i]))
				result += char(int(userInput[i] + count - 65) % 26 + 65);
			else
				result += char(int(userInput[i] + count - 97) % 26 + 97);
		}

		file << userInput << std::endl;
		file << result;

		std::cout << "File written" << std::endl;
		file.close();
	}
	else
	{
		std::cout << "Unable to open file…";
	}

	std::cin.ignore();
	std::cin.ignore();
	return 0;
}