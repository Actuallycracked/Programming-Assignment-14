#include "Vehicle.h"
#ifndef VEHICLE_CPP
#define VEHICLE_CPP
#include<iostream>

using namespace std;

// Constructor
Vehicle::Vehicle(string m, int y) {
	manufacturer = m;
	yearBuilt = y;
}

// Getter for manufacturer
string Vehicle::getManufacturer() {
	return manufacturer;
}

// Setter for manufacturer
void Vehicle::setManufacturer(string m) {
	manufacturer = m;
}

// Getter for year
int Vehicle::getYearBuilt() {
	return yearBuilt;
}

// Setter for year
void Vehicle::setYearBuilt(int y) {
	yearBuilt = y;
}

// Display manufacturer and year
void Vehicle::displayInfo() {
	cout << "Vehicle Info:" << endl;
	cout << "Manufacturer: " << getManufacturer();
	cout << endl << "Year Built: " << getYearBuilt() << endl;
}

#endif