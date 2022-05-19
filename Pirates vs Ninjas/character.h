#pragma once
#include <iostream>
using namespace std;
//The parent class that Ninja, Pirate, and Alien call from.
class character
{
	//The public section that holds easy access data
public:
	//When a character is called, a name is required in the parentheses for it to be used. After that, the characters will have a name through the program.
	character(string name);
	//This fuction will be called when a character's name needs to be displayed. The data or name will be taken from the private area, which was put their by the "character(string name)" above.
	string getName();
	//This function will explain how the users health is decreased and what happens when it goes below 0. It can't be used unless an integar is placed in the parentheses, or the hit as it's declaced. 
	//A characters "Attack" function will be placed there 99% of the time.
	void loseHealth(int hit);
	//this is a pure virtual function. This function declares what a characters attack or hp is. This is how much damage a character does to anothers health.
	virtual int Attack();
	//This is the Help function that te child characters will call on and use.
	void Help();
	//This is my health getter, which will retrieve the health from the private sector and allow the player to know how much health they have.
	int getHealth();
	//This is the first talk function, which is called on in the main function. It can be called on with any staement in the parentheses.
	void Talk(string stuffToSay) {
		cout << "Shadow: I, the silence and the shadow." << endl;
		cout << "Captain Carng: I love deblunes!" << endl;
	};
	//This is the second talk function and is called on in the third round. It only works if a name and statement is placed in the parentheses.
	void Talk(string name, string stuffToSay) {
		cout << "Shadow: Your pride is disgraceful" << endl;
		cout << "Captain Carng: COME AT ME PJ'S!!" << endl;
	};

private:
	//This is found in the Talk functions and is where a statement is put in so the function can be used.
	string stuffToSay;
	//The characters name that is kept here and stored so that the names can be called on repeatedly.
	string name;
	//The health data that is stored here and constantly updated.
	int health;
protected:
	//hp is the integar that is found in the attack function and that is overidden by the other character classes.
	int hp;
};

