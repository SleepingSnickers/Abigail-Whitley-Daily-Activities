#ifndef DICECONSOLE
#define DICECONSOLE

#include <iostream>
#include <string>
#include "Die.h"
#include "DiceHand.h"

using namespace std;

//this class 
class DiceConsole {
private:
	

public:
	void displayDie(Die* die);
	void displayDice(Die* dice, int size);
	int getUserChoice(string menu);
};

#endif