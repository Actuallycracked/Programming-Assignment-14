#include "Truck.h"
#include "Vehicle.h"
#include<iostream>

using namespace std;

// Constructor
Truck::Truck(string m, int y, int t) : Vehicle(m, y) {
	towCap = t;
}

// Getter for towing capacity
int Truck::getTowCap() {
	return towCap;
}

// Setter for towiong capacity
void Truck::setTowCap(int t) {
	towCap = t;
}

// Displays all info
void Truck::displayInfo() {
	Vehicle::displayInfo(); // Calls the parent info function
	cout << "Towing Capacity: " << getTowCap() << endl;
}