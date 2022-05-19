#pragma once
#include "character.h"
#include <string>
#include <iostream>
//this tells the program that this is a class that derives from character, the parent class.
class Ninja :
    public character
{
public:
	//When Ninja is called, a name is required in the parentheses for it to be used. After that, the ninja will have a name through the program.
	Ninja(string name);

	//The ninjas method of attack that is displayed when he attacks.
	void ThrowStars();
	//The info that is displayed at the end of the game if the user asks for it.
	void Help();
};

