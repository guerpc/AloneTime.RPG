#include "Stats.h"
float Stats::getStrength()
{
	return strength;
}

float Stats::getStamina()
{
	return stamina;
}

bool Stats::isAlive()
{
	return getStamina() > 0;
}

float Stats::getAgility()
{
	return agility;
}

void Stats::setStrength(float settingStrength)
{
	strength = settingStrength;
}
void Stats::setStamina(float settingStamina)
{
	stamina = settingStamina;
}
void Stats::setAgility(float settingAgility)
{
	agility = settingAgility;
}


string Stats::toString()
{
	string temp;

	string str = to_string(this->getStrength());
	string sta = to_string(this->getStamina());
	string agi = to_string(this->getAgility());

	temp = "Strength: " + str + "\n" + "Stamina: " + sta + "\n"
		+ "Agility: " + agi + "\n";
	return temp;
}

Stats operator+(Stats stats) 
{
	Stats statAdd;
	statAdd.setStrength(stats.getStrength());
	statAdd.setStamina(stats.getStamina());
	statAdd.setAgility(stats.getAgility());
	return statAdd;
}

Stats::Stats()
{
	strength = 0;
	stamina = 0;
	agility = 0;
}

Stats::~Stats()
{
}

/*
Stats::Stats(float str = 1, float sta = 1, float agi = 1)
{
	strength = str;
	stamina = sta;
	agility = agi;
}*/

