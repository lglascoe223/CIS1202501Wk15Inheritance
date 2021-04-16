/*
 *Leslie Glascoe
 * CIS 1202-501
 * WK 15 Inheritance
 * 4/13/2020
 */
//This is the base class header file for this assignment
#ifndef VEHICLE_H
#define VEHICLE_H

#include<string>
using namespace std;

class Vehicle {

private:
	string manufacturer;
	int year;
public:
	Vehicle() { // default constructor
		manufacturer = "";
		year = 0;
	}
	Vehicle(string autoManufacturer, int autoYear) { //constructor
		manufacturer = autoManufacturer;
		year = autoYear;
	}
	void setManufacturer(string); //functions to get and set manufacturer and year and display info
	void setYear(int);
	string getManufacturer();
	int getYear();
	void displayInfo();
};
#endif

