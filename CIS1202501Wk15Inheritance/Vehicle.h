#ifndef VEHICLE_H
#define VEHICLE_H

#include<string>
using namespace std;

class Vehicle {

private:
	string manufacturer;
	int year;
public:
	Vehicle() {
		manufacturer = "";
		year = 0;
	}
	Vehicle(string autoManufacturer, int autoYear) {
		manufacturer = autoManufacturer;
		year = autoYear;
	}
	void setManufacturer(string);
	void setYear(int);
	string getManufacturer();
	int getYear();
};
#endif

