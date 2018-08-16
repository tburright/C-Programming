//LAB 2B
//Ghozt
/*example output


	1                
	2                
	3                
	4                
   [A]     [B]     [C]

Select a source tower [A, B, C]:
a
Select a destination tower [A, B, C]:
c


	2                
	3                
	4               1
   [A]     [B]     [C]

Select a source tower [A, B, C]:

*/

#include <iostream>
#include <stack>

int Setup(std::stack<int>& tower, int n);
void Hanoi(std::stack<int>& source, std::stack<int>& dest, std::stack<int>&, int n);
void display2(std::stack<int> towerA, std::stack<int> towerB, std::stack<int> towerC, int total);

static int numMoves = 0;

int main()
{
	std::stack<int> TowerA;
	std::stack<int> TowerB;
	std::stack<int> TowerC;
	std::stack<int> temp;
	int n;
	char srcChoice;
	char dstChoice;

	std::cout << "How many steps would you like?: ";
	std::cin >> n;
	std::cout << std::endl;

	n = Setup(TowerA, n);  // Fill towerA with total discs

	std::cout << "Number of steps to solve: " << n << std::endl;
	std::cout << std::endl;

	while (TowerC.size() != n)  // Loop until all discs on TowerC
	{
		display2(TowerA, TowerB, TowerC, n);  // Fancy display

		std::cout << "Select a source tower [A, B, C]: " << std::endl;
		std::cin >> srcChoice;

		std::cout << "Select a destination tower [A, B, C]: " << std::endl;
		std::cin >> dstChoice;

		if ((srcChoice == 'a' || srcChoice == 'A') && (dstChoice == 'b' || dstChoice == 'B'))
			Hanoi(TowerA, TowerB, temp, 0);
		if ((srcChoice == 'a' || srcChoice == 'A') && (dstChoice == 'c' || dstChoice == 'C'))
			Hanoi(TowerA, TowerC, temp, 0);

		if ((srcChoice == 'b' || srcChoice == 'B') && (dstChoice == 'a' || dstChoice == 'A'))
			Hanoi(TowerB, TowerA, temp, 0);
		if ((srcChoice == 'b' || srcChoice == 'B') && (dstChoice == 'c' || dstChoice == 'C'))
			Hanoi(TowerB, TowerC, temp, 0);

		if ((srcChoice == 'c' || srcChoice == 'C') && (dstChoice == 'a' || dstChoice == 'A'))
			Hanoi(TowerC, TowerA, temp, 0);
		if ((srcChoice == 'c' || srcChoice == 'C') && (dstChoice == 'b' || dstChoice == 'B'))
			Hanoi(TowerC, TowerB, temp, 0);
	}


	std::cout << "*************You win!*************\n" << std::endl;

	display2(TowerA, TowerB, TowerC, n);

	std::cout << "*************You win!*************\n" << std::endl;

	std::cout << numMoves << " Total moves." << std::endl;

	std::cin.ignore();
	std::cin.ignore();
	return 0;

}

//Arguments: std::stack<int>& towerA - a stack container that will be setup with a number of discs 
//           int n - a number that represents the number of discs to load on to the tower stack
//Return     the number of discs that were loaded on to the tower 
//Functionality: Load a number of discs in ascending order on to the stack 
int Setup(std::stack<int>& tower, int n)
{
	for (auto i = n; i > 0; i--)
	{
		tower.push(i);
	}

	return n;
}

//Arguments: std::stack<int>& source - the tower that discs will be moved from
//           std::stack<int>& dest - the twoer that discs will be moved to 
//           std::stack<int>& temp - a tower that can hold discs 
//           int n - the number of discs on the source tower
//Return     none
//Functionality: Move a tower from source to another tower. 
void Hanoi(std::stack<int>& source, std::stack<int>& dest, std::stack<int>& temp, int n)
{
	system("cls");  // Clear screen to make it purdy
	
	if (source.size() == 0)  // Empty source stack...
	{
		std::cout << "EMPTY SOURCE\n" << std::endl;
		return;
	}

	if (dest.size() == 0)  // Nothing in dest. Just send it
	{
		std::cout << std::endl;
		dest.push(source.top());  // Push source disc onto dest
		source.pop();  // Remove source
		numMoves++;  // Counter for total turns
		return;
	}

	int x = source.top();
	int y = dest.top();

	if (x > y)
	{
		std::cout << "Invalid move!\n" << std::endl;
	}
	else
	{
		std::cout << std::endl;
		dest.push(source.top());  // Push source disc onto dest
		source.pop();  // Remove source
		numMoves++;  // Counter for total turns
		return;
	}
	
}

void display2(std::stack<int> towerA, std::stack<int> towerB, std::stack<int> towerC, int total)
{
	// Set temp stacks to manipulate for display
	std::stack<int> tempTowerA;
	std::stack<int> tempTowerB;
	std::stack<int> tempTowerC;

	tempTowerA = towerA;
	tempTowerB = towerB;
	tempTowerC = towerC;

	for (int i = total; i > 0; i--)
	{
		//Building each level of tower
		// Old fancy single line....
		//std::cout << "\t" << (tempTowerA.size() == i ? (tempTowerA.top()) : false) << "\t" << (tempTowerB.size() == i ? (tempTowerB.top()) : false) << "\t" << (tempTowerC.size() == i ? (tempTowerC.top()) : false) << std::endl;
		
		// New and ugly but better output :( Fills voids with ' ' in tower instead of zero's
		std::cout << "\t";  // Output tab for vertical tower format
		if (tempTowerA.size() == i)  // Is this tower this height?
			std::cout << tempTowerA.top();
		else
			std::cout << " ";
		std::cout << "\t";
		if (tempTowerB.size() == i)  // Is this tower this height?
			std::cout << tempTowerB.top();
		else
			std::cout << " ";
		std::cout << "\t";
		if (tempTowerC.size() == i)   // Is this tower this height?
			std::cout << tempTowerC.top();
		else
			std::cout << " ";
		std::cout << std::endl;

		// Cleanup
		if (tempTowerA.size() == i)
			tempTowerA.pop();
		if (tempTowerB.size() == i)
			tempTowerB.pop();
		if (tempTowerC.size() == i)
			tempTowerC.pop();

	}
	std::cout << "       " << "[A]" << "     " << "[B]" << "     " << "[C]" << std::endl;
	std::cout << std::endl;

	return;
}