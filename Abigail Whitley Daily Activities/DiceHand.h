#ifndef DICEHAND
#define DICEHAND
#include <iostream>
#include <string>
#include "Die.h"

using namespace std;

//this class stores and displays the dice in a hand, as well as various rolling behaviors. It pulls behavior from the Die class by using Die objects as a member.
class DiceHand {
private:
	Die* dice;
	int sizeOfHand;

public:
	//setters
	void setDice(Die* dicePtr);
	void setSizeOfHand(int size);

	//getters
	Die* getDice() const;
	int getSizeOfHand() const;

	//other
	string displayDieHand() const;
	void rollDie(int dieNum);
	void rollAllDice();
	DiceHand();
	DiceHand(Die*, int);
	~DiceHand();
};

#endif
