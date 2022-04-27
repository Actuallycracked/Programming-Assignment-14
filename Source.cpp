// Marcus Rowe
// CIS 1202
// April 26, 2022

#include<iostream>
#include<string>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int main() {

	// Variables
	string m; // Manufacturer
	int y; // Year
	int d; // Doors
	int t; // Towing Capacity

	// Getting vehicle data
	cout << "Vehicle Program" << endl;
	cout << "Vehicle: " << endl;
	cout << "Enter the manufacturer: ";
	getline(cin, m); // Takes user imput for the manufacturer
	cout <<  "Enter the year built: ";
	cin >> y; //  Takes user imput for the year

	// Creates class object for Vehicle
	Vehicle vehicle(m, y);

	// Stores and displays information about the vehicle
	vehicle.setManufacturer(m);
	vehicle.setYearBuilt(y);
	vehicle.displayInfo();

	// Getting car data
	cout << endl << "Car: " << endl << "Enter the manufacturer: "; 
	cin.ignore();
	getline(cin, m); // Takes user imput for the manufacturer
	cout <<  "Enter the year built:";
	cin >> y; // Takes user imput for the year
	cout <<  "Enter the number of doors: ";
	cin >> d; // Takes user imput for the number of doors

	// Creates class object for Car
	Car car(m, y, d);

	// Stores and displays information about the car
	car.setNumDoors(d);
	car.displayInfo();

	// Getting truck data
	cout << endl << "Truck: " << endl << "Enter the manufacturer: ";
	cin.ignore();
	getline(cin, m); // Takes user imput for the manufacturer
	cout <<  "Enter the year built:";
	cin >> y; // Takes user imput for the year
	cout <<  "Enter the towing capacity: ";
	cin >> t; // Takes user imput for the towing capacity

	// Creates class object for Truck
	Truck truck(m, y, t);

	// Stores and displays information about the truck
	truck.setTowCap(t);
	truck.displayInfo();

	cout << endl;
	return 0;
}