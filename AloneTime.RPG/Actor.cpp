#include "Actor.h"

int Actor::getID()
{
	return id;
}

Stats* Actor::getStats()
{
	return stats;
}

void Actor::setID(int settingID)
{
	id = settingID;
}

void Actor::setAllStats(float str, float sta, float agi)
{
	this->stats->setStrength(str);
	this->stats->setStamina(sta);
	this->stats->setAgility(agi);
}

string Actor::getDescription()
{
	return description;
}

void Actor::setDescription(string sDescription)
{
	description = sDescription;
}

string Actor::toString()
{
	string temp;

	string sID = to_string(this->getID());
	string stringStats = this->stats->toString();

	temp = "Actor ID: " + sID + "\n" + "Stats\n" + stringStats;

	return temp;
}

Actor::Actor()
{
	//auto defaultStats = new Stats();
	Stats* dstats = new Stats();
	dstats->setStrength(0);
	dstats->setStamina(0);
	dstats->setAgility(0);
	id = 0;
	stats = dstats;
	description = "No Description\n";
}


Actor::Actor(int paramID = 1, float paramStr = 2, float paramSta = 2, float paramAgi = 2 )
{
	Stats paramStats;

	paramStats.setStrength(paramStr);
	paramStats.setStamina(paramSta);
	paramStats.setAgility(paramAgi);
	id = paramID;
	stats = &paramStats;
}

//Actor::Actor(int paramID = 1, float paramStr = 2, float paramSta = 2, float paramAgi = 2 )
//{
//	Stats paramStats;
//
//	paramStats.setStrength(paramStr);
//	paramStats.setStamina(paramSta);
//	paramStats.setAgility(paramAgi);
//	id = paramID;
//	stats = &paramStats;
//}


Actor::~Actor()
{
	delete stats;
}