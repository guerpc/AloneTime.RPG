#pragma once
#include<iostream>
#include <string>
#include "Character.h"
#include "Inventory.h"
#include "Actor.h"
#include "Stats.h"

void inputActorStats(Actor* loadActor);
void write(string param);
void writeLine(string param);
void attack(Actor* attacker, Actor* defender);
void combat(vector<Actor*>& combatActors);