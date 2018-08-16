//LAB 2B
//Ghozt

/*example output


	1       0       0
	2       0       0
	3       0       0
	4       0       0
   [A]     [B]     [C]

Select a source tower [A, B, C]:
a
Select a destination tower [A, B, C]:
c


*/

#include <iostream>
#include <stack>
#include <vector>

int Setup(std::stack<int>& tower, int n);
void Hanoi(std::stack<int>& source, std::stack<int>& dest, std::stack<int>&, int n);
void display(std::stack<int> tower);
void display2(std::stack<int> towerA, std::stack<int> towerB, std::stack<int> towerC);

static int numMoves = 0;
char srcChoice;
char dstChoice;

int main()
{
	std::stack<int> TowerA;
	std::stack<int> TowerB;
	std::stack<int> TowerC;
	std::stack<int> temp;
	int n;

	std::cout << "How many steps would you like?: ";
	std::cin >> n;
	std::cout << std::endl;
	//int n = 3;      //Number of discs 

	n = Setup(TowerA, n);
	//Hanoi(TowerA, TowerB, TowerC, n);
	std::cout << "Number of steps to solve: " << n << std::endl;
	std::cout << std::endl;

	while (TowerC.size() != n)
	{
		display2(TowerA, TowerB, TowerC);

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

		//display2(TowerA, TowerB, TowerC);
	}


	std::cout << "*************You win!*************\n" << std::endl;
	display2(TowerA, TowerB, TowerC);
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
	for (auto i = n; i > 0; i--)  // Fill tower A
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
	
	if (source.size() == 0)  // Empty source tower.... nothing to move
	{
		std::cout << "EMPTY SOURCE\n" << std::endl;
		return;
	}

	if (dest.size() == 0)  // empty Destination, so just move it there
	{
		std::cout << std::endl;
		dest.push(source.top());  // Push the top of the source to the top of dest
		source.pop();  // Remove the source item
		numMoves++;  // Counter for total moves
		return;
	}

	int x = source.top();
	int y = dest.top();

	if (x > y)  // Check if legal move. Is the source bigger than the destination?
	{
		std::cout << "Invalid move!\n" << std::endl;
	}
	else
	{
		std::cout << std::endl;
		dest.push(source.top());  // Push the top of the source to the top of dest
		source.pop();  // Remove the source item
		numMoves++;  // Counter for total moves
		return;
	}
	
}

//Arguments: std::stack<int>& tower - a tower that has discs to dispay
//Return     none
//Functionality: Display the contents of a tower
void display(std::stack<int> tower)
{
	std::stack<int> tempStack;
	tempStack = tower;

	for (int i = tower.size(); i > 0; i--)
	{
		int x = tempStack.top();
		std::cout << x << " ";
		tempStack.pop();
	}

	std::cout << std::endl;

	return;
}

void display2(std::stack<int> towerA, std::stack<int> towerB, std::stack<int> towerC)
{
	int largest = 1;
	std::stack<int> tempTowerA;
	tempTowerA = towerA;
	std::stack<int> tempTowerB;
	tempTowerB = towerB;
	std::stack<int> tempTowerC;
	tempTowerC = towerC;

	if ((towerA.size() >= towerB.size()) && (towerA.size() >= towerC.size()))
		largest = towerA.size();

	if ((towerB.size() >= towerA.size()) && (towerB.size() >= towerC.size()))
		largest = towerB.size();

	if ((towerC.size() >= towerA.size()) && (towerC.size() >= towerB.size()))
		largest = towerC.size();

	for (int i = largest; i > 0; i--)
	{

		std::cout << "\t" << (tempTowerA.size() == i ? (tempTowerA.top()) : false) << "\t" << (tempTowerB.size() == i ? (tempTowerB.top()) : false) << "\t" << (tempTowerC.size() == i ? (tempTowerC.top()) : false) << std::endl;
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