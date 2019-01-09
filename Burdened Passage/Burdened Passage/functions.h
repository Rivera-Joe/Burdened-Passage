#pragma once
#ifndef FUNCTIONS_H


void mainMenu();

void startGame();

class Player{

public:
	//name
	void setName(string cName);
	string getName();

	//hp
	void setHP(int health);
	int getHP();

	//damage
	void setDamage(int d);
	int getDamage();
	
};

// load game function
void loadGame();

// save game function
void saveGame();







#endif // !FUNCTIONS_H
