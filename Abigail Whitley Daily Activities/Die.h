#ifndef DIE
#define DIE
#include <iostream>
#include <string>

using namespace std;


//this class stores and displays the number sides on a die and the result of a roll, as well as implements the roll for a die
class Die {
private:
	const int numberOfSides;
	int faceValue;

public:
	//setters
	//void setNumberOfSides(int sides);
	void setFaceValue(int value);

	//getters
	int getNumberOfSides() const;
	int getFaceValue() const;

	//others
	//roll() method
	void roll();
	//method that returns a string describing the Die object
	string displayDie() const;

	//default constructor
	Die();
};

#endif