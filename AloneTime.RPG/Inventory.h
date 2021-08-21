#pragma once
#include "Actor.h"
#include<vector>
class Inventory
{

private:
	vector<Actor*>inventoryList;
public:
	vector<Actor*> getInventoryList();
	void setInventoryList(vector<Actor*> sInventory);
	//#################NOT WORKING HERE!!!####################
	void addStatsFromListItems(Actor &newAct);

};

