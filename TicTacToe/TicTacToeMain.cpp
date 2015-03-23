#include <iostream>
#include <string> // this helps us to be able to use cout and string array
#include <stdexcept> // for catching invalid entry
using namespace std;

int main()
{

	int arrTac[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	string arrTic[3][3] = { { "1", "2", "3" }, { "4", "5", "6" }, { "7", "8", "9" } };
	int iMove = 0;
	int iPlay = 0;
	int iFlag = 0;
	int checkFlag = 0;
	int iPlayer1 = 1;
	int iPlayer2 = 0;


	cout << "\t " << "   Tic Tac Toe " << endl << endl;



	///////////////////////////////////////////////////////////////////////////// Loop for displaying output
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

	while (iPlay < 9)
	{/////////////////////////////////////////////////////////////////////////////Sets position of X or O
		++iPlay;
		iFlag = 0;
		if (iPlayer1 == 1)
		{
			//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////Checks if user has entered a character
			while (cout << "Player 1 , Place your move :  " && !(cin >> iMove))
			{
				cin.clear(); // clear bad input flag
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				cout << " The move you have eneter is INVALID !!! Please try place your move again." << endl;
			}

			//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
			for (int i = 0; i < 3; ++i)
			{
				for (int j = 0; j < 3; ++j)
				{
					if (arrTac[i][j] == iMove)
					{
						arrTac[i][j] = 0;
						iFlag = 1;
					}

				}

			}
			/////////////////////////////////////////////////////////////////////////////
			while (iFlag == 0)
			{
				//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////Checks if user has entered a character
				while (cout << " The move you have enetered eithier deos not exist or it has been already played!"<<"Please try again *" << endl << "Player 1 , Place your move :  " && !(cin >> iMove))
				{
					cin.clear(); // clear bad input flag
					cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					cout << " The move you have eneter is INVALID !!! Please try place your move again." << endl;
				}

				//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				for (int i = 0; i < 3; ++i)
				{
					for (int j = 0; j < 3; ++j)
					{
						if (arrTac[i][j] == iMove)
						{
							arrTac[i][j] = 0;
							iFlag = 1;
						}

					}

				}
			}
		}	
		else if (iPlayer2 == 1)
		{
			//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////Checks if user has entered a character
			while (cout << "Player 2 , Place your move :  " && !(cin >> iMove))
			{
				cin.clear(); // clear bad input flag
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');//discards input
				cout << " The move you have eneter is INVALID !!! Please try place your move again." << endl;
			}

			//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

			for (int i = 0; i < 3; ++i)
			{
				for (int j = 0; j < 3; ++j)
				{
					if (arrTac[i][j] == iMove)
					{
						arrTac[i][j] = 10;
						iFlag = 1;
					}

				}

			}
			/////////////////////////////////////////////////////////////////////////////
			while (iFlag == 0)
			{
				//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////Checks if user has entered a character
				while (cout << " The move you have enetered eithier deos not exist or it has been already played!" <<" Please try again *" << endl << "Player 2 , Place your move :  " && !(cin >> iMove))
				{
					cin.clear(); // clear bad input flag
					cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					cout << " The move you have eneter is INVALID !!! Please try place your move again." << endl;
				}

				//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				for (int i = 0; i < 3; ++i)

				for (int i = 0; i < 3; ++i)
				{
					for (int j = 0; j < 3; ++j)
					{
						if (arrTac[i][j] == iMove)
						{
							arrTac[i][j] = 10;
							iFlag = 1;
						}

					}

				}
			}
		}
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
			///////////////////////////////////////////////////////////////////////////// Before switching to see who won

			for (int i = 0; i < 3; ++i) //////// checks horizontal
			{
				int j = 0;
				if (arrTac[i][j] == arrTac[i][j + 1] && arrTac[i][j] == arrTac[i][j + 2])
				{
					iPlay = 10;
					checkFlag = 1;
					break;
				}
			}

			if (checkFlag == 0) //////// checks vertical 
			{
				for (int i = 0; i < 3; ++i)
				{
					int j = 0;
					if (arrTac[j][i] == arrTac[j + 1][i] && arrTac[j][i] == arrTac[j + 2][i])
					{
						iPlay = 10;
						checkFlag = 1;
						break;
					}
				}
			}

			if (checkFlag == 0) //////// checks right diaoginal 
			{
				int i = 0;
				int	j = 0;

				if (arrTac[i][j] == arrTac[i + 1][j + 1] && arrTac[i][j] == arrTac[i + 2][j + 2])
				{
					iPlay = 10;
					checkFlag = 1;
				}
			}

		
			if (checkFlag == 0) //////// checks left diaoginal 
			{
				int i = 0;
				int	j = 0;

				if (arrTac[i][j+2] == arrTac[i +1][j + 1] && arrTac[i][j+2] == arrTac[i + 2][j] )
				{
				iPlay = 10;
				checkFlag = 1;
				}
		
			}

			/////////////////////////////////////////////////////////////////////////////////////Switch between users

			if (checkFlag == 0) /// check if nobody won , if so switch users
			{
				if (iPlayer1 == 1)
				{
					iPlayer1 = 0;
					iPlayer2 = 1;
				}
				else
				{
					iPlayer1 = 1;
					iPlayer2 = 0;
				}

			}
		
			

	}

	if (iPlayer1 == 1 && checkFlag == 1)
	{
		cout << "sorry player 2, PLAYER 1 WON !!!!!!!!!!!!!!!!!!!" << endl;
	}
	else if (iPlayer2 == 1 && checkFlag == 1)
	{
		cout << "WoW PLAYER 2 YOU WON \\(^^)/ , next time player 1" << endl;
	}
	else
	{
		cout << "That Was a Very Intense Game NOBODY Won " << endl;
	}



	return 0;
}