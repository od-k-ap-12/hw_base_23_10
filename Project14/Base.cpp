#include "Base.h"
#include <iostream>
using namespace std;
int Base::people_on_base = 70;
int Base::vehicles_on_base = 0;
double Base::petrol_on_base = 150;
double Base::goods_on_base = 5;

int Base::GetPeople()
{
	return people_on_base;
}

int Base::GetVehicles()
{
	return vehicles_on_base;
}

double Base::GetPetrol()
{
	return petrol_on_base;
}

double Base::GetGoods()
{
	return goods_on_base;
}

void Base::ChangePeople(int p)
{
	people_on_base = p;
}

void Base::ChangeVehicles(int v)
{
	vehicles_on_base = v;
}

void Base::ChangePetrol(double p)
{
	petrol_on_base = p;
}

void Base::ChangeGoods(double g)
{
	goods_on_base = g;
}

void Base::Print()
{
	cout << "People: " << people_on_base << endl << "Petrol: " << petrol_on_base << endl << "Vehicles: " << vehicles_on_base << endl << "Goods: " << goods_on_base;
}
