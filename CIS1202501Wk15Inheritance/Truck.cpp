#include "Truck.h"
#include "Vehicle.h"
#include <string>
#include<iostream>

using namespace std;

void Truck::setTowing(float capacity) {

	towing = capacity;
}

float Truck::getTowing() {

	return towing;
}
void Truck::displayInfo() {

	cout << "Vehicle Information: " << endl;
	cout << "Manufacturer: " << getManufacturer() << endl;
	cout << "Year Built: " << getYear() << endl;
	cout << "Towing Capacity: " << getTowing() << endl;
	cout << endl;
}