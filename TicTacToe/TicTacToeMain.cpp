#include <iostream>
#include <string> // this helps us to be able to use cout and string array
#include <stdexcept> // for catching invalid entry
#include "TicTacToe.h"

using namespace std;

int main()
{
	ToeClass Game1;//create game 1
	cout << Game1;//display game 1's table by using overload extraction
	Game1.move(Game1);//play the game
	Game1.restart();//asks user if he or she wants to play again

	return 0;
}