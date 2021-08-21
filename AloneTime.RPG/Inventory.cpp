#include "Inventory.h"


vector<Actor> Inventory::getInventoryList()
{
	return inventoryList;
}
void Inventory::setInventoryList(vector<Actor> sInventory)
{
	inventoryList = sInventory;
}

/*#################NOT WORKING HERE!!!####################
//adding stats from all actors in a list and setting it to 1 temp actor
vector<Actor> Inventory::addStatsFromListItems()
{
	Actor tempActor;
	Stats* tempStats = new Stats;
	Stats addStats, sumStats;

	for (int i = 0; i < inventoryList.size(); i++)
	{
		tempStats = inventoryList.at(i).getStats();
	
		addStats = *tempStats;
		//overload operator used + stats.cpp line 49 Stats operator+(stats)
		sumStats = sumStats + addStats;
		tempStats = &sumStats;
	}
	tempActor.setAllStats(tempStats->getStrength(), tempStats->getStamina(), tempStats->getAgility());

	return inventoryList;
}*/