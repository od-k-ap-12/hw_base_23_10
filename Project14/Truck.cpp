#include "Truck.h"
#include <iostream>
using namespace std;
Truck::Truck(int _max_load,double _max_petrol,Base& base):Vehicle(_max_petrol,base)
{
	load = 0;
	max_load = _max_load;
}

double Truck::getCurrentLoad()
{
	return load;
}

double Truck::getMaxLoad()
{
	return max_load;
}

void Truck::arrive(Base& base)
{
	base.ChangeVehicles(base.GetVehicles() + 1);
	petrol_amount = 0;
	base.ChangeGoods(base.GetGoods() + load);
	base.ChangePeople(base.GetPeople() + 1);
}

bool Truck::leave(Base& base)
{
	if (base.GetPetrol() >= tank_volume && base.GetPeople()>0) {
		base.ChangeVehicles(base.GetVehicles() - 1);
		petrol_amount += tank_volume;
		base.ChangePetrol(base.GetPetrol() - tank_volume);
		base.ChangePeople(base.GetPeople() - 1);
		if (base.GetGoods() >= max_load) {
			load = max_load;
			base.ChangeGoods(base.GetGoods() - max_load);
		}
		else {
			load += base.GetGoods();
			base.ChangeGoods(0);
		}
		return true;
	}
	else {
		cout << "Can't leave!";
		return false;
	}
}
