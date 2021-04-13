#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"
#include <string>
using namespace std;

class Car :public Vehicle {
private:
	int doors;
public:
	Car() :Vehicle() {
		doors = 0;
	}
	Car(string carManufacturer, int carYear, int carDoors) :Vehicle(carManufacturer, carYear)
	{
		doors = carDoors;
	}
	void setDoors(int);
	int getDoors();
	void displayInfo();
};
#endif