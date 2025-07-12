#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

#include "Die.h"
#include "DiceHand.h"
#include "DiceConsole.h"

using namespace std;

void tester();

int main() {
	srand(time(0));

	tester();


	return 0;
}

void tester() {
	DiceHand hand(new Die[2], 2);
	DiceConsole console;

	int userChoice;
	bool end = false;

	while (!end) {
		console.displayDice(hand.getDice(), hand.getSizeOfHand());
		cout << "Would you like to reroll (1) or stay (2)?" << endl;
		cin >> userChoice;

		if (userChoice == 1) {
			hand.rollAllDice();
		}
		else if (userChoice == 2) {
			end = true;
		}
		else {
			cout << "Invalid choice, enter a (1) or (2)." << endl;
			cin >> userChoice;
		}
	}
	console.displayDice(hand.getDice(), hand.getSizeOfHand());
}


/*
//constant integer to simplify hand size declarations
const int HAND_SIZE = 5;

int main() {
	srand(time(0));

	//Exercise 2
	//instantiate 3 die
	Die die1, die2, die3;

	//set sides and face value for die 1
	die1.setFaceValue(6);
	//roll die 1
	die1.roll();
	//display die 1
	cout << die1.displayDie() << endl;
	
	//set sides and face value for die  2
	die2.setFaceValue(6);
	//roll die 2
	die2.roll();
	//display die 1
	cout << die2.displayDie() << endl;

	//set sides and face value for die 3
	die3.setFaceValue(6);
	//roll die 3
	die3.roll();
	//display die 1
	cout << die3.displayDie() << endl << endl;

	//Exercise 3
	//instantiate your hand
	DiceHand hand;
	//set the hand to be 5 dice
	hand.setSizeOfHand(HAND_SIZE);

	//array to store each instance the die object, just to avoid hardcoding each individual variable
	Die* diceArray = new Die[HAND_SIZE];
	//for loop to set # of sides and initial face value
	for (int i = 0; i < 5; ++i) {
		diceArray[i].setFaceValue(6);
	}

	//setting the dice pointer variable to the array. this allows my dice hand object to use this array
	hand.setDice(diceArray);

	//displays initial hand
	cout << hand.displayDieHand() << endl;

	//calls the rollAllDice() function and displays it
	hand.rollAllDice();
	cout << hand.displayDieHand() << endl;

	//rolls the first and last dice while leaving the values of the middle three, then displays it
	hand.rollDie(0);
	hand.rollDie(4);
	cout << hand.displayDieHand() << endl;

	return 0;
}
*/