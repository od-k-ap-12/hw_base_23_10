#pragma once
#include "Vehicle.h"
#include "Base.h"
class Truck: public Vehicle
{
	double load;
	double max_load;
public:
	Truck(int _max_load,double _max_petrol,Base& base);
	double getCurrentLoad();
	double getMaxLoad();
	void arrive(Base& base);
	bool leave(Base& base);
};

