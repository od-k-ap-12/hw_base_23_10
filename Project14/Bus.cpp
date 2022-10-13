#include "Bus.h"
#include <iostream>
using namespace std;

Bus::Bus(int _max_people, double _max_petrol, Base& base):Vehicle(_max_petrol,base)
{
	people = 0;
	max_people = _max_people;
}

int Bus::getPeopleCount()
{
	return people;
}

int Bus::getMaxPeople()
{
	return max_people;
}

void Bus::arrive(Base& base)
{
	base.ChangeVehicles(base.GetVehicles() + 1);
	petrol_amount = 0;
	base.ChangePeople(base.GetPeople() + (people+1));
}

bool Bus::leave(Base& base)
{
	if (base.GetPetrol() >= tank_volume) {
		base.ChangeVehicles(base.GetVehicles() - 1);
		petrol_amount += tank_volume;
		base.ChangePetrol(base.GetPetrol() - tank_volume);
		if (base.GetPeople() >= max_people+1) {
			people = max_people;
			base.ChangePeople(base.GetPeople() - (max_people+1));
		}
		else {
			people += base.GetPeople();
			base.ChangePeople(0);
		}
		return true;
	}
	else {
		cout << "Can't leave!";
		return false;
	}
}
