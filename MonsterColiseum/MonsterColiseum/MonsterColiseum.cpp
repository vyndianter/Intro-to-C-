#include <iostream>
#include <conio.h>
#include "Monsters.h"

using namespace std;

Orc Bob;
Skrit Stephen;
Human Jeremiah;
Gromp Froggy;




int main()
{

	Bob.setName = "Bob the Organised Orc";
	Bob.setHP = 50;
	Bob.setATKDMG = 8;
	Bob.setDEF = 3;
	Stephen.setName = "Stephen the stupid Skrit";
	Stephen.setHP = 25;
	Stephen.setATKDMG = 16;
	Stephen.setDEF = 1;
	Jeremiah.setName = "Jeremiah the Hearty Human";
	Jeremiah.setHP = 40;
	Jeremiah.setATKDMG = 12;
	Jeremiah.setDEF = 5;
	Froggy.setName = "Froggy the Groggy Gromp";
	Froggy.setHP = 70;
	Froggy.setATKDMG = 8;
	Froggy.setDEF = 2;



	system("PAUSE");
    return 0;
}

