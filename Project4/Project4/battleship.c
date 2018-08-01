//BattleSship Demo
//Group Alpha
//Zackery Vering
//Will Kreiser
//Tom Burright

// -Use dimensional arrays to replicate a single player’s game piece from Hasbro’s board game “Battleship”
// -Initialize one of the arrays with your ship placement
// -Print both arrays to stdout in a human - readable format

#include <stdio.h>

int main()
{
	int rows = 10;
	int columns = 10;
	// Fancy output arrays
	char letters[] = { "ABCDEFGHIJK" };
	char numbers[] = { "1 2 3 4 5 6 7 8 9 10" };

	printf("  ");

	// Initialize one of the arrays with your ship placement
	// Ship: H3:H5
	char mapBoard[10][10] = {
		{ '~', '~', '~', '~', '~', '~', '~', '~', '~', '~' },
		{ '~', '~', '~', '~', '~', '~', '~', '~', '~', '~' },
		{ '~', '~', '~', '~', '~', '~', '~', '~', '~', '~' },
		{ '~', '~', '~', '~', '~', '~', '~', '~', '~', '~' },
		{ '~', '~', '~', '~', '~', '~', '~', '~', '~', '~' },
		{ '~', '~', '~', '~', '~', '~', '~', '~', '~', '~' },
		{ '~', '~', '~', '~', '~', '~', '~', '~', '~', '~' },
		{ '~', '~', 'X', 'X', 'X', '~', '~', '~', '~', '~' },
		{ '~', '~', '~', '~', '~', '~', '~', '~', '~', '~' },
		{ '~', '~', '~', '~', '~', '~', '~', '~', '~', '~' },
	};

	// Display numbers on top side
	printf("%s\n", numbers);

	// For loop to display board human-readable
	for (int i = 0; i < rows; i++)	// loop through rows
	{
		for (int j = 0; j < columns; j++)	// loop through columns
		{
			if (j == 0)		// Display letters on left side
			{
				printf("%c", letters[i]);
			}
			printf(" %c", mapBoard[i][j]);
			if (j == 9)		// Add newline to form square board game
			{
				printf("\n");
			}
		}
	}

	return 0;
}