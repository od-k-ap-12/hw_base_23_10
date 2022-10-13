#pragma once
class Base
{
	static int people_on_base;
	static int vehicles_on_base;
	static double petrol_on_base;
	static double goods_on_base;
public:
	int GetPeople();
	int GetVehicles();
	double GetPetrol();
	double GetGoods();
	void ChangePeople(int p);
	void ChangeVehicles(int v);
	void ChangePetrol(double p);
	void ChangeGoods(double g);
	void Print();
};

