#pragma once
#include "Base.h"
class Vehicle
{
protected:
	double petrol_amount;
	double tank_volume;
public:
	Vehicle(double _tank_volume, Base& base);
	double getTankVolume();
	double getPetrolAmount();
	virtual void arrive(Base& base);
	virtual bool leave(Base& base);
};

