#pragma once
#include "Vehicle.h"
#include "Base.h"
class Bus:public Vehicle
{
	int people;
	int max_people;
public:
	Bus(int _max_people, double _max_petrol,Base& base);
	int getPeopleCount();
	int getMaxPeople();
	void arrive(Base& base);
	bool leave(Base& base);
};

