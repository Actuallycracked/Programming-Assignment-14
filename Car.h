#pragma once
#ifndef CAR_H
#define CAR_H
#include<iostream>
#include "Vehicle.h"

using namespace std;

// Creates an inherited class from vehicle
class Car : public Vehicle
{
private: 
	int numDoors;

public:
	// Constructor
	Car(string m, int y, int n);

	// Getter for doors
	int getNumDoors();

	// Setter for doors
	void setNumDoors(int numDoors);

	// Display all info
	void displayInfo();
};

#endif