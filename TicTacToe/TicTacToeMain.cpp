#include <iostream>
#include <string> // this helps us to be able to use cout and string array
#include <limits> // for catching invalid entry
using namespace std;

int main()
{

	int arrTac[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	string arrTic[3][3] = { { "1", "2", "3" }, { "4", "5", "6" }, { "7", "8", "9" } };
	int iMove = 0;
	int iPlay = 0;
	int iFlag = 0;
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
	
	while (iPlay < 9)
	{/////////////////////////////////////////////////////////////////////////////Sets position of X or O
		++iPlay;
		iFlag = 0;
		if (iPlayer1 == 1)
		{
			cout << "Player 1 , Place your move : " << endl;
			cin >> iMove;

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
				cout << " The move you have eneter eithier deos not exist or it has been already played \n So, Please try place your move again : " << endl;
				cin >> iMove;

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

			////Check for character , use try catch
		}
		else if (iPlayer2==1)
		{
			cout << "Player 2 , Place your move : " << endl;
			cin >> iMove;

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
				cout << " The move you have eneter eithier deos not exist or it has been already played \n So, Please try place your move again : " << endl;
				cin >> iMove;

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

			////Check for character , use try catch
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
			/////////////////////////////////////////////////////////////////////////////

			/////////////////////////////////////////////////////////////////////////////////////Switch between users
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

	

	return 0;


}
