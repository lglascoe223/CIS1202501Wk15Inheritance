/*
 *Leslie Glascoe
 * CIS 1202-501
 * WK 15 Inheritance
 * 4/13/2020
 */

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
void Vehicle::displayInfo() {
	cout << "Vehicle Information: " << endl;
	cout << "Manufacturer: " << getManufacturer() << endl;
	cout << "Year Built: " << getYear();
	cout << endl;
}