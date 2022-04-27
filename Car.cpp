
#include "Car.h"
#include "Vehicle.h"
#include <iostream>

using namespace std;

// Constructor
Car::Car(string m, int y, int n) : Vehicle(m,y) {
	numDoors = n;
}

// Getter for doors
int Car::getNumDoors() {
	return numDoors;
}

// Setter for doors
void Car::setNumDoors(int n) {
	numDoors = n;
}

// Displays all info
void Car::displayInfo() {
	Vehicle::displayInfo(); // Calls the parent info function
	cout << "Number of Doors: " << getNumDoors() << endl;
}

