#pragma once
#ifndef FUNCTIONS_H


void mainMenu();

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









#endif // !FUNCTIONS_H
