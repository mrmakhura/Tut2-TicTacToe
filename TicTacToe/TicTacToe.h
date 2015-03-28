#ifndef TicTacToe_H/// forget to put n
#define TicTacToe_H
#include <iomanip>

using namespace std;
class ToeClass
{
public :

	ToeClass();
	~ToeClass();

	void print();//prints message to inform who the winnwer is
	void move(const ToeClass&);// playes X or O of the player1 or player2
	void switchplayers();//switches between player1 and player2
	bool isWon();//checks to see if player1 or player 2 won
	void restart();//asks user if he or she wants to play again
	void setArrTac();//initialize arrTac
	void setArrTic();//initialize arrTic


	friend ostream &operator<<(ostream& , const ToeClass&);
	//friend istream &operator>>(istream& , ToeClass&);

private:
	
	int arrTac[3][3];
	string arrTic[3][3];
	int iMove = 0;
	int iPlay = 0;
	int iFlag = 0;
	int checkFlag = 0;
	int iPlayer1 = 1;
	int iPlayer2 = 0;


};

	ostream &operator<<(ostream& , const ToeClass&); // to print the table

	//istream &operator>>(istream& , ToeClass&);


#endif