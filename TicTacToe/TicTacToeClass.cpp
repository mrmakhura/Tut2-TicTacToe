#include <iostream>
#include <iomanip>
#include <string>
#include "TicTacToe.h"

using namespace std;

ToeClass::ToeClass()
{
	setArrTac();
	setArrTic();
}

ToeClass::~ToeClass()
{}

void ToeClass::setArrTac()
{
	int iNum = 0;
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			++iNum;
			arrTac[i][j] = iNum;
		}
	}
}

void ToeClass::setArrTic()
{
	int iNum = 0;
	string sNum;
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			++iNum;
			sNum =to_string(iNum);
			arrTic[i][j] = sNum;
		}
	}

}

bool ToeClass::isWon()
{
	///////////////////////////////////////////////////////////////////////////// Before switching , see who won

	for (int i = 0; i < 3; ++i) //////// checks horizontal
	{
		int j = 0;
		if (arrTac[i][j] == arrTac[i][j + 1] && arrTac[i][j] == arrTac[i][j + 2])
		{
			iPlay = 10;
			checkFlag = 1;
			return true;
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
				return true;
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
			return true;
		}
	}


	if (checkFlag == 0) //////// checks left diaoginal 
	{
		int i = 0;
		int	j = 0;

		if (arrTac[i][j + 2] == arrTac[i + 1][j + 1] && arrTac[i][j + 2] == arrTac[i + 2][j])
		{
			iPlay = 10;
			checkFlag = 1;
			return true;
		}

	}

	if (checkFlag == 0)
	{
		return false;
	}

}
void ToeClass::switchplayers()
{
	if ( isWon()==false) /// check if nobody won , if so switch users
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
void ToeClass::move(const ToeClass&v)
{
	//ToeClass v;//When i do this i am sort of opening a new game within the main game and also re-initializes the arrays each time i play

	while (iPlay < 9)
	{
		
		++iPlay;
		iFlag = 0;
		if (iPlayer1 == 1)
		{
			//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////Checks if user has entered a character
			while (cout << "Player 1 , Place your move :  " && !(cin >> iMove))
			{
				cin.clear(); // clear bad input flag
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');//discards input
				cout << " The move you have eneter is INVALID !!! Please try place your move again." << endl;
			}

			//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////Sets position of X or O
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

			/////////////////////////////////////////////////////////////////////////////Chexks to see if the entered value is valid or if it has already been played
			while (iFlag == 0)
			{
				//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////Checks if user has entered a character
				while (cout << " The move you have enetered eithier deos not exist or it has been already played " << "Please try again *" << endl << "Player 1 , Place your move :  " && !(cin >> iMove))
				{
					cin.clear(); // clear bad input flag
					cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					cout << " The move you have eneter is INVALID !!! Please try place your move again." << endl;
				}

				//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////Sets New Position of X or O
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
				while (cout << " The move you have enetered eithier deos not exist or it has been already played " << " Please try again *" << endl << "Player 2 , Place your move :  " && !(cin >> iMove))
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
								arrTac[i][j] = 10;
								iFlag = 1;
							}

						}

					}
			}
		}
		/////////////////////////////////////////////////////////////////////////////Places X or O in its position - move
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

		system("cls");

		cout << v;

		switchplayers();
	}

	print();
}
void ToeClass::print()
{

	if (iPlayer1 == 1 && isWon())
	{
		cout << "sorry player 2, PLAYER 1 WON !!!!!!!!!!!!!!!!!!!" << endl;
	}
	else if (iPlayer2 == 1 && isWon())
	{
		cout << "WoW PLAYER 2 YOU WON \\(^^)/ , next time player 1" << endl;
	}
	else
	{
		cout << "That Was a Very Intense Game NOBODY Won " << endl;
	}

}

void ToeClass::restart()
{
	string sAns;

	cout << "DO YOU WANT TO PLAY AGAIN ? ,PRESS [Y] FOR YES OR [N] FOR NO : ";
	cin >> sAns;

	if (sAns == "y" || sAns == "Y")
	{
		system("cls");
		ToeClass NewGame;
		cout << NewGame;
		NewGame.move(NewGame);
		NewGame.restart();
	}
	else if (sAns == "n" || sAns == "N")
	{
		cout << "GAME OVER SEE YOU LATER ALIGATOR"<<endl;
	}
	else
	{
		cout << "You have entered an invalid entry, Please try again !!";
		restart();
	}

}

ostream &operator<<(ostream& os, const ToeClass &v)
{
	os << "\t " << "   Tic Tac Toe " << endl << endl;
	os << "\t" << " -----------------" << endl;
	for (int i = 0; i < 3; ++i)
	{
		cout << "\t";
		for (int j = 0; j < 3; ++j)
		{
			if (j < 2)
				os << "|  " << v.arrTic[i][j]<< "  ";
			else
				os << "|  " << v.arrTic[i][j] << "  |";

		}

		os << endl;

		if (i < 2)
			os << "\t" << ":-----+-----+-----:" << endl;
		else
			os << "\t" << " -----------------" << endl << endl;
	}

		return os;

}

