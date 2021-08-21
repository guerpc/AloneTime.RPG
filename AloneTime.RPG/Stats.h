#pragma once
#include <iostream>
#include<string>
using namespace std;

class Stats
{
private:
	float strength;
	float stamina;
	float agility;
public:
	float getStrength();
	float getStamina();
	float getAgility();

	void setStrength(float settingStrength);
	void setStamina(float settingStamina);
	void setAgility(float settingAgility);
	bool isAlive();
	string toString();
	Stats operator+(Stats stats);
	Stats();
	~Stats();
	//Stats(float str = 1, float sta = 1, float agi = 1);

};