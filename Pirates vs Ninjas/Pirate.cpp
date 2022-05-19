#include "Pirate.h"
//This is the pirates new hp or the amount of health he'll take. This overrides the hp that is declered in the character parent class.
Pirate::Pirate(string name) :character(name) {
	this->hp = 25;
};

//The pirates method of attack that is displayed when he attacks.
void Pirate::UseSword() {
	cout << "I swing my sword with burning rage!" << endl;
}
//The info that is displayed at the end of the game if the user asks for it.
void Pirate::Help()
{
	cout << "Pirates charge at the enemy, so their swords are their greatest tool." << endl;
}