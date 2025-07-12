#include <iostream>
#include <string>
#include "Die.h"
#include "DiceHand.h"

DiceHand::DiceHand() : DiceHand(new Die[5], 5) {

}

DiceHand::DiceHand(Die* dicePtr, int size) {
	sizeOfHand = size;
	//allocating the memory for new dice
	dice = dicePtr;
}

DiceHand::~DiceHand() {
	delete[] dice;
}

void DiceHand::setDice(Die* dicePtr) {
	dice = dicePtr;
}

void DiceHand::setSizeOfHand(int size) {
	sizeOfHand = size;
}

Die* DiceHand::getDice() const {
	return dice;
}

int DiceHand::getSizeOfHand() const {
	return sizeOfHand;
}

//dieNum works the same as i in the previous for loop
void DiceHand::rollDie(int dieNum) {
	//if statement is used here because I'm only rolling a single die
	if (dieNum >= 0 && dieNum < sizeOfHand) {
		dice[dieNum].roll();
	}
}

void DiceHand::rollAllDice() {
	//for loop is used here because I'm rolling thru all of the dice in my hand
	for (int i = 0; i < sizeOfHand; i++) {
		dice[i].roll();
	}
}