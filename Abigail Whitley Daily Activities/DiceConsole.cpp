#include <iostream>
#include <string>
#include "Die.h"
#include "DiceHand.h"
#include "DiceConsole.h"

void DiceConsole::displayDie(Die* die) {
	cout << "A " << die->getNumberOfSides() << "-sided die showing " << die->getFaceValue() << endl;
}

void DiceConsole::displayDice(Die* dice, int size) {
	for (int i = 0; i < size; i++) {
		cout << "Die " << (i + 1) << ": ";
		displayDie(&dice[i]);
	}
}

int DiceConsole::getUserChoice(string menu) {
	int choice;

	cout << menu << "Enter choice: " << endl;
	cin >> choice;
	
	return choice;
}