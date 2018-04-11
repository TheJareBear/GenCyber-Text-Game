#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

void addSkill(player& main)
{
	char skill[16];
	success = 0;
	while(success == 0)
	{
			success = 1;
			cout << "Which skill would you like to put a point into(health, attack, stealth, speed, luck, or charisma)\n";
			cin >> skill;
			if (strcmp(skill, "health") == 0)
			{
				main.chealth++;
				main.mhealth++;
				main.skillPoints--;
			}
			else if (strcmp(skill, "attack") == 0)
			{
				main.attack++;
				main.skillPoints--;
			}
			else if (strcmp(skill, "stealth") == 0)
			{
				main.stealth++;
				main.skillPoints--;
			}
			else if (strcmp(skill, "speed") == 0)
			{
				main.speed++;
				main.skillPoints--;
			}
			else if (strcmp(skill, "luck") == 0)
			{
				main.luck++;
				main.skillPoints--;
			}
			else if (strcmp(skill, "charisma") == 0)
			{
				main.charisma++;
				main.skillPoints--;
			}
			else
			{
				cout << "Sorry, that is not a recognized skill category. Make sure you spell corectly\n\n";
				success = 0;
			}
	}

	cout << "Great you added one point to " << skill << endl;
}
