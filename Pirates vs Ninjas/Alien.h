#pragma once
#include "character.h"
#include <string>
#include <iostream>
//this tells the program that this is a class that derives from character, the parent class.
class Alien :
    public character
{
public:
	//When Alien is called, a name is required in the parentheses for it to be used. After that, the alien will have a name through the program.
	Alien(string name);
	//The aliens method of attack that is displayed when he attacks.
	void Firelasers();
	//The info that is displayed at the end of the game if the user asks for it.
	void Help();
};

