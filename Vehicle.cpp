#include "Vehicle.h"
#ifndef VEHICLE_CPP
#define VEHICLE_CPP
#include<iostream>

using namespace std;

Vehicle::Vehicle(string Manufacturer, int YearBuilt) {
	Manufacturer = manufacturer;
	YearBuilt = yearBuilt;
}
string Vehicle::getManufacturer() {
	return manufacturer;
}
void Vehicle::setManufacturer(string Manufacturer) {
	manufacturer = Manufacturer;
}
int Vehicle::getYearBuilt() {
	return yearBuilt;
}
void Vehicle::setYearBuilt(int YearBuilt) {
	yearBuilt = YearBuilt;
}
void Vehicle::displayInfo() {
	cout << "Manufacturer: " << manufacturer;
	cout << endl << "Year Built: " << yearBuilt << endl;
}

#endif