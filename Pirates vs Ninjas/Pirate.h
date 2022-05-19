#pragma once
#include "character.h"
#include <iostream>
#include <string>
//this tells the program that this is a class that derives from character, the parent class.
class Pirate :
    public character
{
public:
	//When Pirate is called, a name is required in the parentheses for it to be used. After that, the pirate will have a name through the program.
	Pirate(string name);

	//The pirates method of attack that is displayed when he attacks.
	void UseSword();
	//The info that is displayed at the end of the game if the user asks for it.
	void Help();
};

