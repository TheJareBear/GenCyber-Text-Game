#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

void saveGame(player& main)
{
	ofstream fout;
	fout.open(main.name);
	fout << main.name << endl << main.level << endl << main.chealth << endl << main.mhealth << endl << main.attack << endl
			<< main.stealth << endl << main.speed << endl << main.luck << endl << main.charisma << endl << main.chapter
				<< endl << main.skillPoints;
	fout.close();

	cout << "Game Saved for " << main.name << endl << endl;
}

void levelUp(player& main)
{
	main.chapter++;
	main.level++;
	main.skillPoints += main.level;
}
