//LAB 2A Practice
//Ghozt

#include <iostream> // Needed for IO
#include <fstream>  // Needed for file
#include <string>   // Needed for strings
#include <sstream>
#include <vector>

int main()
{
	std::ifstream file("demo.txt");
	std::string line;
	std::map<std::string std::int> myMap;
	if (file.is_open())
	{
		while (std::getline(file, line))
		{
			std::cout << line << std::endl;
	
			istringstream buf(line);

			for (std::string word; buf >> word; )
			{
				for (const auto& element : myMap)
				{
					if (element.first == word)
					{
						std::cout << "ALREADY EXISTS IN MAP!" << endl;
						//found_gundam = true;
					}
					else
					{
						std::cout << "doesn't exist in map" << endl;
						myMap.push_back(word);
					}
				}
			}

			
				
		}

		file.close();
	}
	else
	{
		std::cout << "Unable to open file…";
	}




	//for (string word; buf >> word; )
	//	v.push_back(word);



	return 0;
}