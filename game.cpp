#include <iostream>
#include <fstream>
#include <cstring>
#include "addSkill.h"
#include "commands.h"
#include "saveGame.h"
#include "chapters.h"

using namespace std;

struct player
{
	char name[50];
	int level;
	int chealth;
	int mhealth;
	int attack;
	int stealth;
	int speed;
	int luck;
	int charisma;
	int skillPoints;
	int chapter;
};

int main()
{
	int lorn;
	char loadingGameName[64];
	player main;
	ifstream fin;

	int loadIsSuccessful = 0;

	while(loadIsSuccessful == 0)
	{

		cout << "Load game (1)\nNew Game  (2)\nExit      (3)\nChoice: ";
		cin >> lorn;

		if(lorn == 1)
			{
				loadIsSuccessful = 1;
				cout << "Character name to be loaded: ";
				cin >> loadingGameName;
				fin.open(loadingGameName);
				if(!fin)
				{
					cout << "Failed to load character, name is case sensitive\n\n";
					loadIsSuccessful = 0;
				}

			}
			else if (lorn == 2)
				loadIsSuccessful = 1;
			else if (lorn == 3)
				return 0;
			else
				cout << "Please chose select 1, 2, or 3\n\n";
		}

	if(lorn == 1)
		{
			fin >> main.name >> main.level >> main.chealth >> main.mhealth >> main.attack >> main.stealth >> main.speed >> main.luck
				>> main.charisma >> main.chapter >> main.skillPoints;
			clearScreen();
			fin.close();
			cout << "Welcome back to the game " << main.name << ". You left off at chapter " << main.chapter
				<< ". Let's get you back to there.";

				if (main.chapter == 0) //decides the level an existing character goes to
					goto Zero;
				if (main.chapter == 1)
					goto One;
		}


	if(lorn == 2)
	{
		cout << "New Character's Name: ";
		cin >> main.name;
		clearScreen();

		main.level = 0;
		main.chealth = 5;
		main.mhealth = 5;
		main.attack = 5;
		main.stealth = 5;
		main.speed = 5;
		main.luck = 5;
		main.charisma = 5;
		main.chapter = 0;
		main.skillPoints = 0;

		chapter0(main);
	}



			QuitGame: //this is where the player will go when they quit the game, includes save method

	saveGame(main);

	return 0;
}
