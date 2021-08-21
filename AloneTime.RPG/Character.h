#pragma once
#include "Actor.h"
#include"Inventory.h"
class Character : public Actor
{
private:
    Inventory inventory;
    Inventory equipment;
public:

    Inventory getInventory();
    void setInventory(Inventory sInventory);
    Inventory getEquipment();
    void setEquipment(Inventory sEquipment);

    void addGearStats(Stats& tempStats, Inventory& equipment);
    void settingCharacterStats(Inventory& equipment);//#################NOT WORKING HERE!!!####################

    
    Character();

    ~Character();
};

