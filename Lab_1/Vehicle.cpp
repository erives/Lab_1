#include "Vehicle.h"
#include <string>
#include <iostream>


using namespace std;

Vehicle::Vehicle() {
	vehicleMake = "COP3503";
	vehicleModel = "Rust Bucket";
	vehicleYear = 1900;
	vehiclePrice = 0.0;
	vehicleMiles = 0;

}

Vehicle::Vehicle(string make, string model, int year, float price, int mileage) {
	vehicleMake = make;
	vehicleModel = model;
	vehicleYear = year;
	vehiclePrice = price;
	vehicleMiles = mileage;

}

void Vehicle::Display() const {
	cout << vehicleMake << " " << vehicleModel << " " << vehicleYear << " " << vehiclePrice << " " << vehicleMiles << endl;

}

string Vehicle::GetYearMakeModel() const {
	return vehicleYear + " " + vehicleMake + " " + vehicleModel;

}

float Vehicle::GetPrice() const {
	return vehiclePrice;
}
