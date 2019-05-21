#include <string> 
#include <vector>
#include "Vehicle.cpp"

using namespace std;


class Showroom
{

private:

	string showRoomName;
	vector<Vehicle> vehicles;
	unsigned int maxCapacity;


public:
	//constructors
	Showroom();
	Showroom(string name, unsigned int capacity);

	//accessors
	const vector<Vehicle>& GetVehicleList() const {};

	//behavior functions
	void AddVehicle(const Vehicle& v);
	void ShowInventory() const;


};

