#include <iostream>
#include <fstream>
#include <cstring>
#include "addSkill.h"
#include "commands.h"
#include "saveGame.h"

using namespace std;

void chapter0(player& main)
{
  cout << "\n\n\nChapter 0: Introduction to a world unknown" << endl << endl << endl;
	cout << "Hello " << main.name << " , welcome to the game. Type help\n\n";

	commandMode(command, main);  //allows character to use commands

	cout << "Let's go to Chapter 1\n\n";
	levelUp(main);	//level up before moving to chapter 1
	saveGame(main); //allows save to occur before

  chapter1(main);
}

void chapter1(player& main)
{
  cout << "\n\nChapter 1: Making new friends" << endl << endl;
  cout << "Now, " << main.name << " it is time to get back into the field, I have put you into"
      " command mode so that you can spend the skill point you just acquired by reaching level 1"
      ". Spend the skill buy using the addskill command. Remember to pick a skill that you intend"
      " to use a lot!\n" << endl;

  commandMode(command, main);

  cout << "\nGreat, now you are ready to go on your first mission, but first I will give you a few things. The first"
      << " is your Raspberry PI exploiter, it will let you go into command mode whenever you have power. The other"
      << " is a deer knife... I really hope you don't have to use that one." << endl << endl;

  commandMode(command, main);
  saveGame(main);
}
