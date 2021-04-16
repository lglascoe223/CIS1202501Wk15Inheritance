/*
 *Leslie Glascoe
 * CIS 1202-501
 * WK 15 Inheritance
 * 4/13/2020
 */
//This is a derived class from the vehicle class

#ifndef CAR_H
#define CAR_H
#include "Vehicle.h" // base class needed
#include <string>
using namespace std;

class Car :public Vehicle {
private:
	int doors;
public:
	Car() :Vehicle() { // default constructor
		doors = 0;
	}
	Car(string carManufacturer, int carYear, int carDoors) :Vehicle(carManufacturer, carYear) // constructor
	{
		doors = carDoors;
	}
	void setDoors(int); // function to get and set doors and display info
	int getDoors();
	void displayInfo();
};
#endif