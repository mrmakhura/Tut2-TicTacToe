#include <iostream>
#include <string> // this helps us to be able to use cout and string array
using namespace std;

int main()
{

	int arrTac[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	string arrTic[3][3] = { { "1", "2", "3" }, { "4", "5", "6" }, { "7", "8", "9" } };
	int iMove = 0;


	cout << "\t " << "   Tic Tac Toe " << endl << endl;

	///////////////////////////////////////////////////////////////////////////// Loop for displaying output
	cout << "\t" << " -----------------" << endl;
	for (int i = 0; i < 3; ++i)
	{
		cout << "\t";
		for (int j = 0; j < 3; ++j)
		{
			if ( j < 2)
				cout << "|  " << arrTic[i][j] << "  ";
			else
				cout << "|  " << arrTic[i][j] << "  |";

		}

		cout << endl;

		if (i < 2)
			cout << "\t" << ":-----+-----+-----:" << endl;	
		else 
			cout << "\t" << " -----------------" << endl << endl;
		
	}
	/////////////////////////////////////////////////////////////////////////////


	/////////////////////////////////////////////////////////////////////////////Sets position of X or O
	cout << "Player 1 , Place your move : " << endl;
	cin >> iMove;

	for (int i = 0; i < 3; ++i)


	{
		for (int j = 0; j < 3; ++j)
		{
			if (arrTac[i][j] == iMove)
				arrTac[i][j] = 0;
		}

	}
	/////////////////////////////////////////////////////////////////////////////


	/////////////////////////////////////////////////////////////////////////////Places X or O in its position
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			if (arrTac[i][j] == 0)
				arrTic[i][j] = "X";
			else if (arrTac[i][j] == 10)
				arrTic[i][j] = "O";
		}

	}
	/////////////////////////////////////////////////////////////////////////////

	
system("cls"); // clears the console

///////////////////////////////////////////////////////////////////////////// Loop for displaying output
cout << "\t " << "   Tic Tac Toe " << endl << endl;
cout << "\t" << " -----------------" << endl;
for (int i = 0; i < 3; ++i)
{
	cout << "\t";
	for (int j = 0; j < 3; ++j)
	{
		if (j < 2)
			cout << "|  " << arrTic[i][j] << "  ";
		else
			cout << "|  " << arrTic[i][j] << "  |";

	}

	cout << endl;

	if (i < 2)
		cout << "\t" << ":-----+-----+-----:" << endl;
	else
		cout << "\t" << " -----------------" << endl << endl;

}
/////////////////////////////////////////////////////////////////////////////




	return 0;


}
