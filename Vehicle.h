
#ifndef VEHICLE_H
#define VEHICLE_H
#include<iostream>

using namespace std;

class Vehicle
{
private:
	string manufacturer;
	int yearBuilt;

public:
	// Constructor
	Vehicle(string m, int y);

	// Getter for manufacturer
	string getManufacturer();

	// Setter for manufacturer
	void setManufacturer(string manufacturer);

	// Getter for year
	int getYearBuilt();

	// Setter for year
	void setYearBuilt(int YearBuilt);

	// Display class info
	void displayInfo();
};


#endif
