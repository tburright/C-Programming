//LAB 2A Practice
//Ghozt

//Example output:
/*

[Text file contents : ]
the big red dog
blah cat bleh dog
something dog dish
cat the the the
[End of file contents]

"the": 4
"dog" : 3
"cat" : 2
"big" : 1
"blah" : 1
"bleh" : 1
"dish" : 1
"red" : 1
"something" : 1

*/

#include <iostream> // Needed for IO
#include <fstream>  // Needed for file
#include <string>   // Needed for strings
#include <sstream>
#include <map>

int main()
{
	std::ifstream file("demo.txt");  // File input
	std::string line;
	std::map<std::string, int> myMap;
	int counter = 0;  // Used for counting max occurances

	if (file.is_open())
	{
		std::cout << "[Text file contents:]" << std::endl;
		while (std::getline(file, line))  // While there is a line being read
		{
			std::cout << line << std::endl;  // Print the line

			std::istringstream buf(line);  // Stringstream line

			for (std::string word; buf >> word; )  // For each word in the string
			{

				if (myMap.size() == 0)  // Map has no data
					myMap.emplace(word, 1);  //Write first word
				else
				{
					std::map<std::string, int>::iterator it = myMap.find(word);  // iterate find word
					if (it == myMap.end())  // Made it to the end and didn't find the word in myMap
					{
						myMap.emplace(word, 1);  // Add word to map with 1 occurance
					}
					else
					{
						++myMap[word];  // Already in map. Increase count.
						if (myMap[word] > counter)  // check if it's the "highest score"
							counter = myMap[word];
					}
				}
			}
		}

		std::cout << "[End of file contents]\n" << std::endl;  // Fancy output formatting
		file.close();  // Close file
		
		for (auto i = myMap.cbegin(); i != myMap.cend(); i++)  // Loop through as many times as there are keys in map
		{
			for (auto x = myMap.cbegin(); x != myMap.cend(); ++x) // Secondary loop to check each item value against counter
			{
				if (x->second == counter)  // does the current key->second (total count) equal the iterator(counter)?
					std::cout << "\"" << x->first << "\"" << ": " << x->second << std::endl;  // Cout Output
			}
			counter--;
		}
	}
	else
	{
		std::cout << "Unable to open file…";
	}

	std::cin.ignore();  // Pause before exiting
	
	return 0;
}