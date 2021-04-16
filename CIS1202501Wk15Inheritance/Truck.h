/*
 *Leslie Glascoe
 * CIS 1202-501
 * WK 15 Inheritance
 * 4/13/2020
 */
//This is a derived class from the Vehicle class

#ifndef TRUCK_H
#define TRUCK_H
#include"Vehicle.h" //base class needed
#include<string>

using namespace std;

class Truck : public Vehicle {

private:
	float towing;
public:
	Truck() :Vehicle() { //default constructor
		towing = 0;
	}

	Truck(string carManufacturer, int carYear, float truckTowing) :Vehicle(carManufacturer, carYear) { // constructor

		towing = truckTowing;
	}
	void setTowing(float); // functions to get and set towing capacity and display info
	float getTowing();
	void displayInfo();
};
#endif
