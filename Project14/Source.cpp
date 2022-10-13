#include <iostream>
#include "Base.h"
#include "Bus.h"
#include "Truck.h"
#include "Vehicle.h"
using namespace std;

int main() {
	Base* base=new Base();
	Vehicle* bus = new Bus(50, 50, *base);
	base->Print();
	bus->leave(*base);
	cout << endl<<endl;
	base->Print();
	bus->arrive(*base);
	cout << endl << endl;
	base->Print();
	delete base;
	delete bus;
}