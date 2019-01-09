#include "functions.h"
#include <string>
#include <iostream>

using namespace std;

void mainMenu() {
	string name;
	cin >> name;
	int MenuChoice;


	cout << "\t\t\t\tBurdened Passage - C++ Project \n\n\n" << endl;
	cout << "1- New Game\n";
	cout << "2- Load Game\n";
	cout << "3- Exit Game\n";
	cout << "What would you like to do? "; cin >> MenuChoice;

	switch (MenuChoice) {
	case 1:
		//startGame();
		break;
	case 2:
		//send player to new function
		break;
	case 3:
		break;

	}
}
void startGame() {
	cout << "Name: Arthur Morgan";
	cout << "Race: Human";
	cout << "Class: Warrior";
	//Extra stuff
}
//******************* Classes *********

class Player {
private:
	string name;
	int hp;
	int damage;

public:
	//name
	void setName(string cName) {

		name = cName;
	}

	string getName() {
		
		return name;
	}

	//hp
	void setHP(int health) {

		hp = health;
	}

	int getHP() {

		return hp;
	}

	//damage
	void setDamage(int d) {
		damage = d;
	}

	int getDamage() {

		return damage;
	}

};