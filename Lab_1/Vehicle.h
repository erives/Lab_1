#include <string>


using namespace std;

class Vehicle {
private:
	string vehicleMake;
	string vehicleModel;
	unsigned int vehicleYear;
	float vehiclePrice;
	unsigned int vehicleMiles;


public:
	//Constructors to initialize objects
	Vehicle();
	Vehicle(string make, string model, int year, float price, int mileage);

	//function will print out the vehicle's details in a single line:
	// 1973 Ford Mustang $9500 113000
	void Display() const;

	//create and return a string in the form of "YEAR MAKE MODEL"
	//EX: "1970 Ford Mustang" 
	string GetYearMakeModel() const;

	//returns the price
	float GetPrice() const;








};
