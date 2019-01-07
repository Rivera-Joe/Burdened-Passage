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

	if (MenuChoice == 1) {
		void startGame();
	}
}
void startGame() {
	cout << "Name: Arthur Morgan";
	cout << "Race: Human";
	cout << "Class: Warrior";
	//Extra stuff
}
