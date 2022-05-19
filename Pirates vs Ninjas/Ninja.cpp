#include "Ninja.h"
//This is the ninjas new hp or the amount of health he'll take. This overrides the hp that is declered in the character parent class.
Ninja::Ninja(string name) :character(name) {
	this->hp = 25;
};

//The ninjas method of attack that is displayed when he attacks.
void Ninja::ThrowStars() {
	cout << "I throw my shuriken star with precision." << endl;
}
//The info that is displayed at the end of the game if the user asks for it.
void Ninja::Help()
{
	cout << "Ninjas stick to the shadows and attack from a distance, so they'll use throwing stars." << endl;
}
