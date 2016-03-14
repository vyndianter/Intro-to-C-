#pragma once

class Monster
{
public:
	void setName(char* value);
	char* getName();
	void setHP(int value);
	int getHP();
	void setATKDMG(int value);
	int setATKDMG();
	void setDEF(int value);
	int getDEF();

private:
	char* name;
	int HP;
	int ATKDMG;
	int DEF;
};

class Orc : public Monster
{
public:


};

class Skrit : public Monster
{
public:


};

class Human : public Monster
{
public:


};

class Gromp : public Monster
{
public:


};