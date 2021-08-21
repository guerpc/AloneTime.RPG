#include "Character.h"

Inventory Character::getInventory()
{
	return inventory;

}
void Character::setInventory(Inventory sInventory)
{
	inventory = sInventory;
}
Inventory Character::getEquipment() 
{
	return equipment;
}
void Character::setEquipment(Inventory sEquipment)
{
	equipment = sEquipment;
}
/*#################NOT WORKING HERE!!!####################
void Character::addGearStats(Stats &tempStats, Inventory &equipment)
{
	Inventory tempEquipment = equipment;
	tempEquipment.addStatsFromListItems();

	equipment = tempEquipment;
}*/
/*
Character::Character()
{
	Actor();

}

Character::~Character()
{
	//~Actor();
}*/