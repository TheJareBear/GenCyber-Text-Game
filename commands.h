#include <iostream>
#include <fstream>
#include <cstring>
#include "addSkill.h"

using namespace std;


void functionChooser(char command[], player& main)
{
	if (strcmp(command, "stats") == 0)
		readStats(main);
	else if (strcmp(command, "help") == 0)
		help();
	else if (strcmp(command, "continue") == 0)
		return;
	else if (strcmp(command, "addskill") == 0)
		{
			if (main.skillPoints > 0)
				addSkill(main);
			else
				cout << "Sorry you have to have a skillpoint to use that command\n";
		}
	else if (strcmp(command, "clear") == 0)
		{
			int i;
			for(i = 0; i < 100; i++)
				cout << endl << endl;
		}
	else
		cout << "command not recognized\n";
}


void readStats(player main)
{
	cout << "Name: " << main.name << "   Level: " << main.level << endl << "Health: " << main.chealth <<'/'<<main.mhealth
		<< "   Attack: " << main.attack << endl << "Stealth: " << main.stealth << "   Speed: " << main.speed << endl
		<< "Luck: " << main.luck << "   Charisma: " << main.charisma << endl << "Skill Points: " << main.skillPoints << endl;
}
void help()
{
	cout << "stats: Prints current health and skills of the player\n";
	cout << "addskill: Adds Skill Point to one stat\n";
	cout << "continue: quit command mode and continue the game\n";
	cout << "exit: save and quit the game\n\n";

}

void clearScreen()
{
	int i;
	for(i = 0; i < 100; i++)
		cout << endl << endl;
}



//this just to keep the commands going

void commandMode(player& main)
{
char command[64];

	cout << "COMMAND MODE" << endl;
	int commandMode = 1;

	while(commandMode)
	{
		cout << "$ ";
		cin >> command;
		functionChooser(command, main);

		if (strcmp(command, "continue") == 0)
			commandMode = 0;
	}
}
