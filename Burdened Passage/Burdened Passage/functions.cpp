#include "functions.h"
#include <string>
#include <iostream>
#include <fstream>


using namespace std;

void mainMenu() {
	
	
	

	int MenuChoice;


	cout << "\t\t\t\tBurdened Passage - C++ Project \n\n\n" << endl;
	cout << "1- New Game\n";
	cout << "2- Load Game\n";
	cout << "3- Exit Game\n";
	cout << "What would you like to do? "; cin >> MenuChoice;

	switch (MenuChoice) {
	case 1:
		startGame();
		break;
	case 2:
		//send player to new function
		break;
	case 3:
		break;

	}
}

//**********game functions*********

//start game
void startGame() {
	cout << "Please enter a name:\n";
	Player p;

	string plrName;
	cin >> plrName;

	p.setName(plrName);

	//Extra stuff
}

//load game

void loadGame() {

	string fileName;
	cout << "\n\nWhat was the name of your file?\n";
	cin >> fileName;
	ifstream loadFile;
	loadFile.open(fileName + ".txt");
	string line;
	if (loadFile.is_open) {
		string name;
		int hp;
		int damage;
		loadFile >> name;
		loadFile >> hp;
		loadFile >> damage;
		
		//loadfile brings in stats
		loadFile.close();
	}
	
	else {
		cout << "\nUnable to locate file.\n"
			<< "What would you like to do?: \n"
			<< "1 - Search another name\n"
			<< "2 - Start new game\n"
			<< "3 - Exit game\n";
		int choice;
		cin >> choice;
		switch (choice) {
		case 1:
			loadGame();
			break;
		case 2:
			startGame();
			break;
		case 3:
			break; // may need to look at this one. should end the program
		}
	}





}

// save game

void saveGame() {

	cout << "What would you like to name your save file?";
	string saveName;
	cin >> saveName;
	ofstream saveFile;


	saveFile.open(saveName + ".txt");
	if(saveFile.is_open){
		string name;
		int hp;
		int damage;

		saveFile << name;
		saveFile << hp;
		saveFile << damage;

		saveFile.close();
	}
	else {
		cout << "Unable to save game";
		// needs more code here********************************************
	}
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

