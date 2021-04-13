#ifndef TRUCK_H
#define TRUCK_H
#include"Vehicle.h"
#include<string>

using namespace std;

class Truck : public Vehicle {

private:
	float towing;
public:
	Truck() :Vehicle() {
		towing = 0;
	}

	Truck(string carManufacturer, int carYear, float truckTowing) :Vehicle(carManufacturer, carYear) {

		towing = truckTowing;
	}
	void setTowing(float);
	float getTowing();
	void displayInfo();
};
#endif
