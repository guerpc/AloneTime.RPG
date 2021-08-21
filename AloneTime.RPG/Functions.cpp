#include "Functions.h"

void inputActorStats(Actor* loadActor)
{
	int str, sta, agi;
	vector<string> statVals;
	auto tempActor = loadActor;
	string temp;

	cout << "Enter Str: " << endl;
	cin >> temp;
	statVals.push_back(temp);

	cout << "Enter Sta: " << endl;
	cin >> temp;
	statVals.push_back(temp);

	cout << "Enter Agi: " << endl;
	cin >> temp;
	statVals.push_back(temp);

	str = stoi(statVals.at(0));
	sta = stoi(statVals.at(1));
	agi = stoi(statVals.at(2));

	tempActor->setAllStats(str, sta, agi);
	loadActor = tempActor;

}

void write(string param)
{
	cout << param;
}

void writeLine(string param)
{
	cout << param << endl;
}

void attack(Actor* attacker, Actor* defender)
{
	auto tempActor1 = attacker;
	auto tempActor2 = defender;
	auto tempDefenderStats = defender->getStats();
	float a1Damage = tempActor1->getStats()->getStrength();
	float a2Defense = tempActor2->getStats()->getAgility();

	float lifeDamage = a1Damage - a2Defense;

	float resultingStam = tempActor2->getStats()->getStamina() - a2Defense;
	tempDefenderStats->setStamina(resultingStam);

	defender = tempActor2;
}

//takes a list of actors, positions 0 and 1 attack eachother based on highest agility
void combat(vector<Actor*>& combatActors)
{
	auto actor1 = combatActors[0];
	auto actor2 = combatActors[1];

	auto stats1 = actor1->getStats();
	auto stats2 = actor2->getStats();

	Actor* attk;
	Actor* def;

	if (stats1->getAgility() > stats2->getAgility())
	{
		attk = actor1;
		def = actor2;
	}
	else if (stats2->getAgility() > stats1->getAgility())
	{
		attk = actor2;
		def = actor1;
	}
	else
	{
		int randomize = rand() % 2;

		if (randomize == 0)
		{
			attk = actor1;
			def = actor2;
		}
		else
		{
			attk = actor2;
			def = actor1;
		}
	}
	while (stats1->isAlive() && stats2->isAlive())
	{
		attack(attk, def);

		writeLine("After Atack\n");
		writeLine("Defender's Health: ");
		writeLine(def->toString());
		writeLine("Attacker's Health: ");
		writeLine(attk->toString());

		swap(attk, def);
	}
}
