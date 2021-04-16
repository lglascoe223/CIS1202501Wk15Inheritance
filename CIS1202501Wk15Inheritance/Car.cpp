/*
 *Leslie Glascoe
 * CIS 1202-501
 * WK 15 Inheritance
 * 4/13/2020
 */

#include"Car.h"
#include"Vehicle.h"
#include<string>
#include<iostream>
using namespace std;

void Car::setDoors(int d) {
	doors = d;
}
int Car::getDoors(){
	return doors;
}
void Car::displayInfo() {
	cout << "Vehicle Information: " << endl;
	cout << "Manufacturer: " << getManufacturer() << endl;
	cout << "Year Built: " << getYear() << endl;
	cout << "Doors: " << getDoors();
	cout << endl;
}