
#include "Vehicle.h"
#include"Car.h"
#include <string>
#include<iostream>
using namespace std;

int main() {
	Vehicle vehicle;
	Car car;
	string manufacturer;
	int year;
	int doors;
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
	//cin.ignore();
	cout << endl;
	car.setManufacturer(manufacturer);
	car.setYear(year);
	car.setDoors(doors);
	car.displayInfo();
	cout << endl;
	system("pause");
	return 0;

}