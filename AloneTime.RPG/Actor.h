#pragma once
#include "Stats.h"
#include <iostream>
#include<string>

using namespace std;
class Actor
{
private:
	int id;
	Stats* stats = new Stats;
	string description;
public:
	int getID();
	Stats* getStats();

	void setID(int settingID);
	//void setStats(Stats settingStats);
	void setAllStats(float str, float sta, float agi);
	
	string getDescription();
	void setDescription(string sDescription);

	string toString();

	Actor();
	Actor(int paramID, float paramStr, float paramSta, float paramAgi);
	~Actor();
};