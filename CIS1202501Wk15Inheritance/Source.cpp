/*
 *Leslie Glascoe
 * CIS 1202-501
 * WK 15 Inheritance
 * 4/13/2020
 */

#include "Vehicle.h" // header file needed for this assignment
#include"Car.h" // header file needed
#include"Truck.h" // header file needed
#include <string>
#include<iostream>
using namespace std;

int main() {

	Vehicle vehicle; // instance of the Vehicle class
	Car car; // instance of the Car class
	Truck truck; // instance of the Truck class
	string manufacturer; //to hold manufacturer name
	int year; // to hold year made
	int doors; // to hold number of doors
	float towing; // to hold towing capacity

	cout << "Vehicle Program" << endl;
	cout << endl;
	cout << "Vehicle: " << endl;
	cout << "Enter the manufacturer: "; getline(cin, manufacturer); //get user input for manufacutrer and year
	cout << "Enter the year built: "; cin >> year;
	cout << endl;
	vehicle.setManufacturer(manufacturer); //sets the manufactuer in the Vehicle class
	vehicle.setYear(year); // sets the year in the vehicle class
	vehicle.displayInfo(); //displays info of vehicle class
	cout << endl;
	
	cin.ignore();

	cout << "Car:" << endl;
	cout << "Enter in the Manufacturer: "; getline(cin, manufacturer); //gets user input for manufacturer,year , and number of doors
	cout << "Enter the year built: "; cin >> year; 
	cout << "Enter the number of doors: "; cin >> doors;
	cout << endl;
	car.setManufacturer(manufacturer); //sets manufacturer in car class
	car.setYear(year); // sets year in car class
	car.setDoors(doors); // sets number of doors in car class
	car.displayInfo(); // displays car class info
	cout << endl;

	cout << "Truck:" << endl;
	cin.ignore();
	cout << "Enter in the Manufacturer: "; getline(cin, manufacturer); //get the users input for the manufacturer, 
	cout << "Enter the year built: "; cin >> year;                     //the year and the towing capacity
	cout << "Enter the towing capacity: "; cin >> towing;
	cout << endl;
	truck.setManufacturer(manufacturer); //sets the manufacturer in truck class
	truck.setYear(year); // sets the year in truck class
	truck.setTowing(towing); // sets the towing capacity in the truck class
	cout << endl;

	system("pause");
	return 0;

}