#include <iostream>
#include<iomanip>
#include <fstream>
using namespace std;
void init_board(char[][3]);
void display_board(char[][3]);
bool ask(char[][3], char a);
char player = 'X';
void switchxo();
char playwin(char[][3]);
void validmove(char[][3]);
void validinput(char[][3]);
int main()
{
	char board[3][3];
	int i = 0;
	init_board(board);
	display_board(board);
	while (1)
	{
		i++;
		validmove(board);

		display_board(board);
		if (playwin(board) == 'X')
		{
			cout << "X wins!" << endl;
			break;
		}
		else if (playwin(board) == 'O')
		{
			cout << "O wins!" << endl;
			break;
		}
		else if (playwin(board) == '/' && i == 9)
		{
			cout << "It's a tie both of you trash!" << endl;
			break;
		}
		switchxo();
	}
	return 0;
}
void init_board(char ttt[3][3])
{
	ttt[0][0] = '1';
	ttt[0][1] = '2';
	ttt[0][2] = '3';
	ttt[1][0] = '4';
	ttt[1][1] = '5';
	ttt[1][2] = '6';
	ttt[2][0] = '7';
	ttt[2][1] = '8';
	ttt[2][2] = '9';
}
void display_board(char ttt[3][3])
{
	cout << ttt[0][0] << " | " << ttt[0][1] << " | " << ttt[0][2] << endl;
	cout << "----------" << endl;
	cout << ttt[1][0] << " | " << ttt[1][1] << " | " << ttt[1][2] << endl;
	cout << "----------" << endl;
	cout << ttt[2][0] << " | " << ttt[2][1] << " | " << ttt[2][2] << endl;
}
bool ask(char ttt[3][3], char a)
{
	char board[3][3];
	bool isCorrect = true;

	if (a == 1)
	{
		if (ttt[0][0] == '1')
			ttt[0][0] = player;
		else
		{
			isCorrect = false;
		}
	}
	else if (a == 2)
	{
		if (ttt[0][1] == '2')
			ttt[0][1] = player;
		else
		{
			isCorrect = false;
		}
	}
	else if (a == 3)
	{
		if (ttt[0][2] == '3')
			ttt[0][2] = player;
		else
		{
			isCorrect = false;
		}
	}
	else if (a == 4)
	{
		if (ttt[1][0] == '4')
			ttt[1][0] = player;
		else
		{
			isCorrect = false;
		}
	}
	else if (a == 5)
	{
		if (ttt[1][1] == '5')
			ttt[1][1] = player;
		else
		{
			isCorrect = false;
		}
	}
	else if (a == 6)
	{
		if (ttt[1][2] == '6')
			ttt[1][2] = player;
		else
		{
			isCorrect = false;;
		}
	}
	else if (a == 7)
	{
		if (ttt[2][0] == '7')
			ttt[2][0] = player;
		else
		{
			isCorrect = false;
		}
	}
	else if (a == 8)
	{
		if (ttt[2][1] == '8')
			ttt[2][1] = player;
		else
		{
			isCorrect = false;
		}
	}
	else if (a == 9)
	{
		if (ttt[2][2] == '9')
			ttt[2][2] = player;
		else
		{
			isCorrect = false;
		}
	}

	return isCorrect;
}
void validmove(char board[][3])
{
	int a;
	cout << "now its player: " << player << " turn. " << "Press an available number(numberonly) on board: ";
	cin >> a;
	if (a != 1 && a != 2 && a != 3 && a != 4 && a != 5 && a != 6 && a != 7 && a != 8 && a != 9)
	{
		cout << "invalid entry" << endl;
		cin >> a;
	}
	while (!ask(board, a))
	{
		cout << "space already in use try again" << endl;
		cin >> a;
	}
}

void switchxo()
{
	if (player == 'X')
		player = 'O';
	else
		player = 'X';
}

char playwin(char ttt[3][3])
{
	// player X
	if (ttt[0][0] == 'X' && ttt[0][1] == 'X' && ttt[0][2] == 'X')
		return 'X';
	if (ttt[1][0] == 'X' && ttt[1][1] == 'X' && ttt[1][2] == 'X')
		return 'X';
	if (ttt[2][0] == 'X' && ttt[2][1] == 'X' && ttt[2][2] == 'X')
		return 'X';

	if (ttt[0][0] == 'X' && ttt[1][0] == 'X' && ttt[2][0] == 'X')
		return 'X';
	if (ttt[0][1] == 'X' && ttt[1][1] == 'X' && ttt[2][1] == 'X')
		return 'X';
	if (ttt[0][2] == 'X' && ttt[1][2] == 'X' && ttt[2][2] == 'X')
		return 'X';

	if (ttt[0][0] == 'X' && ttt[1][1] == 'X' && ttt[2][2] == 'X')
		return 'X';
	if (ttt[2][0] == 'X' && ttt[1][1] == 'X' && ttt[0][2] == 'X')
		return 'X';

	// player O
	if (ttt[0][0] == 'O' && ttt[0][1] == 'O' && ttt[0][2] == 'O')
		return 'O';
	if (ttt[1][0] == 'O' && ttt[1][1] == 'O' && ttt[1][2] == 'O')
		return 'O';
	if (ttt[2][0] == 'O' && ttt[2][1] == 'O' && ttt[2][2] == 'O')
		return 'O';

	if (ttt[0][0] == 'O' && ttt[1][0] == 'O' && ttt[2][0] == 'O')
		return 'O';
	if (ttt[0][1] == 'O' && ttt[1][1] == 'O' && ttt[2][1] == 'O')
		return 'O';
	if (ttt[0][2] == 'O' && ttt[1][2] == 'O' && ttt[2][2] == 'O')
		return 'O';

	if (ttt[0][0] == 'O' && ttt[1][1] == 'O' && ttt[2][2] == 'O')
		return 'O';
	if (ttt[2][0] == 'O' && ttt[1][1] == 'O' && ttt[0][2] == 'O')
		return 'O';

	return '/';
}