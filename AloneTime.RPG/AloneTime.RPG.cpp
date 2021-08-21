#pragma once

#include <iostream>
#include "Actor.h"
#include "Stats.h"
#include "vector"
#include "Functions.h"
#include "Inventory.h"

using namespace std;


int main()
{
	//Actor a1(99, 22, 33, 44);
	//Actor *a1;
	//Actor *a2;


	/*
	auto a1 = new Actor();
	auto a2 = new Actor();
	*/
	auto a1 = new Actor();
	auto a2 = new Actor();
	a1->setID(1);
	a2->setID(2);
	vector<Actor*> actorsList;
	cout << "actor 1" << endl;
	cout << a1->toString();
	cout << "actor 2" << endl;
	cout << a2->toString();
	cout << endl;

	cout << "Actor 1 Stats: " << endl;
	inputActorStats(a1);
	cout << "Actor 2 Stats: " << endl;
	inputActorStats(a2);
	actorsList.push_back(a1);
	cout << endl;
	actorsList.push_back(a2);
	cout << endl;

    combat(actorsList);

	delete a1;
	delete a2;

	return 0;
}
