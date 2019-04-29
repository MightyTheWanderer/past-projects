#include <iostream>
#include <ctime>
using namespace std;

const int rows = 20;
const int columns = 20;
int numofships = 20;
int board[rows][columns];
void init_board();
void display_board();
int ships_standing();
void randomizeships();
bool target(int, int);


int main()
{
	srand(time(NULL));
	init_board();
	randomizeships();
	int x, y;
	char Answer = 'Y';
	while (Answer == 'Y')
	{
		cout << "Enter potential(x [spacebar] y) position of enemy ship" << endl; // PRINT “Enter potential (x,y) position of enemy ship “
		cin >> x >> y;  // GET Target 
		if (target(x, y)) // IF Target = True 
			cout << "really? you sunk my battle ship my guy" << endl;  // THEN PRINT “really? you sunk my battle ship my guy!”
		else
			cout << "no ship here my guy" << endl;  // ELSE PRINT “no ship hear my guy”
		cout << "ships still standing: " << ships_standing() << endl; // Based on ship standing counter in ships_standing function
		if (ships_standing == 0)//IF ships_standing = 0 PRINT “WINNER ALL SHIPS  SUNK”.
		{
			cout << " WINNER ALL SHIPS SUNK " << endl;
			return 0;
		}
		cout << "Continue (Y or N)? " << endl;// PRINT “Continue ‘Y’ or ‘N’ ?” 
		cin >> Answer; // GET Answer
	}
	// IF Answer = ‘Y’ THEN PRINT “GAME OVER QUITTER!

	cout << "GAME OVER QUITTER!!!!" << endl; // THEN PRINT “GAME OVER QUITTER!
	cout << "remaining board" << endl;
	display_board();
	// ELSE PRINT “Enter potential (x,y) position of enemy ship “
   //GET Target …(repeat steps 1 - 8)

	return 0; // STOP
}
void init_board() // set elements to postions in board array
{
	{
		for (int i = 0; i < rows; i++)
		{
			for (int x = 0; x < columns; x++)
			{
				board[i][x] = 0;
			}
		}
	}
}
void display_board() // display board array with set elements
{
	for (int i = 0; i < rows; i++)
	{
		for (int x = 0; x < columns; x++)
		{
			cout << board[i][x] << " ";
		}
		cout << endl;
	}
}
bool target(int x, int y) // bool function to test if target equals randomized element in the matrix
{

	if (board[x][y] == 1)
	{
		board[x][y] = 2;
		return true;
	}
	return false;

}
int ships_standing()// for loop counter function that increases counter based on ships left in array
{
	int standing = 0;


	for (int x = 0; x < rows; x++)
	{
		for (int y = 0; y < columns; y++)
		{
			if (board[x][y] == 1)
				standing++;
		}
	}

	return standing;
}
void randomizeships()// randomly places ships in binary array as "1"s
{
	int i = 0;
	while (i < numofships)
	{
		int x = rand() % rows;
		int y = rand() % columns;
		if (board[x][y] != 1)
		{
			i++;
			board[x][y] = 1;
		}
	}
}