#include "Vehicle.h"
#include <iostream>
using namespace std;
Vehicle::Vehicle(double _tank_volume,Base& base)
{
	petrol_amount = 0;
	tank_volume = _tank_volume;
	base.ChangeVehicles(base.GetVehicles() + 1);
}

double Vehicle::getTankVolume()
{
	return tank_volume;
}

double Vehicle::getPetrolAmount()
{
	return petrol_amount;
}

void Vehicle::arrive(Base& base)
{
	base.ChangeVehicles(base.GetVehicles() + 1);
	petrol_amount = 0;
}

bool Vehicle::leave(Base& base)
{
	if (base.GetPetrol() >= tank_volume) {
		base.ChangeVehicles(base.GetVehicles() - 1);
		petrol_amount = tank_volume;
		base.ChangePetrol(base.GetPetrol() - tank_volume);
		return true;
	}
	else {
		cout << "Can't leave!";
		return false;
	}
}
