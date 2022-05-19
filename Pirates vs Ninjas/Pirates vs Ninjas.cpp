// Pirates vs Ninjas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
//All of my headers that will be called on for data
#include "character.h"
#include "GameStructure.h"
#include "Ninja.h"
#include "Pirate.h"
#include "Alien.h"
//This is used so that I don't have to type "std::" repeatedly.
using namespace std;
//This is our actual game, in it's own function so that it can hold its own data and use it's own loops, without messing with the while loop in the main function.
void Warpath() {
	//The initials for GameStructure, which makes it easier to call on.
	GameStructure GS;
	//This is what I use for the while loop when I need the user to give an input for if they want it to restart or end the game.
	int EndGame;
	//The name and initial for the basic character
	character c("JonDough");
	//The name and initial for the Ninja
	Ninja nj("Shadow");
	//The name and initial for the Pirate
	Pirate prt("Captain Carng");
	//The name and initial for the Alien
	Alien al("Flb'org");

	//This intigar will tll us which round we're on as the fight goes on.
	int round = 1;
	//This while loop will repeat until a character loses all of their health.
	while (true) {
		//When round turns to 3, this will display the characters banter.
		if (round == 3) {
			c.Talk("Shadow","Bloodbath");
		}
		//The round integar will be displayed here.
		cout << "Round " << round << ", fight!!!" << endl;
		//This calls on the TurnRoll in GameStructure, where a characters turn is decided. The if loop decides what occurs when the random umber gives a 1 or 0 as a signal.
		if (GS.TurnRoll()) {
			//If a 1 is returned, or the number is greater than or equal to 5, the ninja will attack.
			//This will display the ninjas name
			cout << nj.getName() << " attacks.\n";
			//This calls on the ThrowStars function in Ninja, which is their weapon.
			nj.ThrowStars();
			//This means that pirate will lose as much health as ninja has for hp, which is 25.
			prt.loseHealth(nj.Attack());
		}
		//If the first staement isn't true or if a 0 is returned instead of a 1, then this will occur, which means that the pirate will attack.
		else {
			//This displays the pirates name.
			cout << prt.getName() << " attacks.\n";
			//This calls on the UseSword function from the Pirate class. This is the pirates prefered method of attack.
			prt.UseSword();
			//This means that the Ninja loses as much health as the pirate has for hp, which is 25.
			nj.loseHealth(prt.Attack());
		}
		//This calls of the RandomRoll function in GameStructure. If a signal or a 1 is returned, it plays this rare scenario.
		if (GS.RandomRoll()) {
			//The aliens name is displayed
			cout << "Oh no.... anything but " << al.getName() << "! " << endl;
			cout << "This was supposed to be a fair fight, but the king of the sky has risen." << endl;
			//The basic character's name is displayed.
			cout << "It was nice knowing all of you wonderful fighters and viewers. This is " << c.getName() << " signing off, RIP." << endl;
			//Aliens method of attack is shown.
			al.Firelasers();
			//These two lines shows both the pirate and Ninja losng as much health as the Alien has for hp, which is 100. This random roller is here so that the health is already calculated before they attack.
			nj.loseHealth(al.Attack());
			prt.loseHealth(al.Attack());
		}
		//These two if loops will scan the new health and see if any of the characters are at 0. If any of them are at 0, the loop will break and go back to the main funtion, when the user will be asked to leave or restart the game.
		if (nj.getHealth() <= 0){
			cout << nj.getName() << " was consumed by the darkness!" << endl;
			break;
		}
		if (prt.getHealth() <= 0) {
			cout << prt.getName() << " has sunk with his ship!" << endl;
			break;
		}
		//If both characters still have health, their health is displayed and the loop is back at the top.
		cout << nj.getName() << "'s health is now " << nj.getHealth() << "." << endl;
		cout << prt.getName() << "'s health is now " << prt.getHealth() << ". \n" << endl;
		//This the program to add a number to the round every time a round or the loop starts over.
		round++;
	}
}

int main()
{
	GameStructure GS;
	int EndGame;
	character c("JonDough");
	Ninja nj("Shadow");
	Pirate prt("Captain Carng");
	Alien al("Flb'org");
   //This while loop will ask the user if they'll want to restart of exit. the "again = '1'" tells the program that if the user hits 1, when "again" shows up, it'll start over at the top of that loop. 
	char again = '1';
	while (again == '1') {
		//This displays all of the character names, health, and hp.
		cout << "Through deadly silence and deafening arg's, land and sea shall meet and collide into a ferocious war.\n";
		cout << "I'm your host, " << c.getName() << ", and here you'll witness the wrath of the Ninjas and Pirates as they face off." << endl;
		cout << "*This is a demo fighting game.\nThis game doesn't require any inputs, just your attention and a nice bag of popcorn. Enjoy the show.*" << endl;
		cout << "Here are our warriors: " << nj.getName() << " & " << prt.getName() << endl;
		cout << nj.getName() << " has a health of " << nj.getHealth() << " and a attack power of " << nj.Attack() << "." << endl;
		cout << prt.getName() << " has a health of " << prt.getHealth() << " and a attack power of " << prt.Attack() << "." << endl;
		cout << "Equal amounts of power, lets hope it's just as equal of a fight!" << endl;
		cout << "Now let's see who attacks first...\n" << endl;
		//This calls on the first talk function, before the fight starts, which gives the characters a bit of dialogue.
		c.Talk("Silence before the storm");
		//This calls on the warpath function at the top, which holds the major parts of the game.
		Warpath();
		//This is the end of the loop, where the user is asked if the want to restart or end the program.
		cout << "You can now make the choice to 1.restart 2.quit or 3.help \nchoose the number that corresponds with what you want to do." << endl;
		cin >> EndGame;
		//Like I explained above, if the user puts 1 for restart, it goes to the top when the again integar is declared in the while loop.
		if (EndGame == 1) {
			again;
		}
		//If the user inputs 2, they want to exit, which exit(0) does once it's called.
		else if (EndGame == 2) {
			cout << "Goodbye" << endl;
			exit(0);
		}
		//This comes up whenever the user puts in anything but 1 or 2. The help message will appear for each character.
		else {
			cout << "Here's info on the characters" << endl;
			nj.Help();
			prt.Help();
			al.Help();
			again;
		}
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
