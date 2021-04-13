



#include "Vehicle.h"
#include"Car.h"
#include"Truck.h"
#include <string>
#include<iostream>
using namespace std;

int main() {

	Vehicle vehicle;
	Car car;
	Truck truck;
	string manufacturer;
	int year;
	int doors;
	float towing;

	cout << "Vehicle Program" << endl;
	cout << endl;
	cout << "Vehicle: " << endl;
	cout << "Enter the manufacturer: "; getline(cin, manufacturer);
	cout << "Enter the year built: "; cin >> year;
	cout << endl;
	vehicle.setManufacturer(manufacturer);
	vehicle.setYear(year);
	vehicle.displayInfo();
	cout << endl;
	cout << endl; 
	cin.ignore();
	cout << "Car:" << endl;
	cout << "Enter in the Manufacturer: "; getline(cin, manufacturer);
	cout << "Enter the year built: "; cin >> year; 
	cout << "Enter the number of doors: "; cin >> doors;
	cout << endl;
	car.setManufacturer(manufacturer);
	car.setYear(year);
	car.setDoors(doors);
	car.displayInfo();
	cout << endl;
	cout << "Truck:" << endl;
	cin.ignore();
	cout << "Enter in the Manufacturer: "; getline(cin, manufacturer);
	cout << "Enter the year built: "; cin >> year;
	cout << "Enter the towing capacity: "; cin >> towing;
	cout << endl;
	truck.setManufacturer(manufacturer);
	truck.setYear(year);
	truck.setTowing(towing);
	truck.displayInfo();
	cout << endl;


	system("pause");
	return 0;

}