
#include "Vehicle.h"
#include <string>
#include<iostream>
using namespace std;

int main() {
	Vehicle vehicle;
	string manufacturer;
	int year;
	cout << "Vehicle: " << endl;
	cout << "Enter the manufacturer: "; getline(cin, manufacturer);
	cout << endl;
	cout << "Enter the year built: "; cin >> year;
	cout << endl;
	vehicle.setManufacturer(manufacturer);
	vehicle.setYear(year);
	cout << "Vehicle Information: " << endl;
	cout << "Manufacturer: " << vehicle.getManufacturer() << endl;
	cout << "Year Built: " << vehicle.getYear();

	system("pause");
	return 0;

}