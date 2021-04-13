#include "Vehicle.h"
#include <string>
#include<iostream>

using namespace std;

void Vehicle::setManufacturer(string name) {
	manufacturer = name;
}
void Vehicle::setYear(int y) {
	year = y;
}
string Vehicle::getManufacturer() {
	return manufacturer;
}
int Vehicle::getYear() {
	return year;
}