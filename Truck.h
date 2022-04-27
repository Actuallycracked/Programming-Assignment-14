#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"
#include<iostream>

using namespace std;

// Creates inherited class from vehicle
class Truck : public Vehicle
{
private:
	int towCap;

public: 
	// Constructor
	Truck(string m, int y, int t);

	// Getter for towing capacity
	int getTowCap();

	// Setter to set towing capacity
	void setTowCap(int t);

	// Displays all info
	void displayInfo();

};

#endif
