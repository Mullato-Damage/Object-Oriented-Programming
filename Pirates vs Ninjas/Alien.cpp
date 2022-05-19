#include "Alien.h"
//This is the aliens new hp or the amount of health he'll take when attack is called. This overrides the hp that is declered in the character parent class.
Alien::Alien(string name) :character(name) {
	this->hp = 100;
};

//The aliens method of attack that is displayed when he attacks.
void Alien::Firelasers() {
	cout << "Puny humans stand no chance!" << endl;
}
//The info that is displayed at the end of the game if the user asks for it.
void Alien::Help()
{
	cout << "The lord of the sky has arrived and shall lay waste to everyone!\n" << endl;
}