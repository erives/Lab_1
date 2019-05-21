#include "pch.h"
#include "Showroom.h"
#include <string>
#include <vector>

using namespace std;

//Constructors
Showroom::Showroom()
{
	showRoomName = "Unnamed Showroom";
	maxCapacity = 0;

}


Showroom::Showroom(string name, unsigned int capacity)
{
	showRoomName = name;

	maxCapacity = capacity;
}

//Behvior Functions
void Showroom::addVehicle(const Vehicle& v)
{
	if (vehicles.size() < maxCapacity) {
		vehicles.emplace_back(v);
	}
	else {
		cout << "Showroom is full! Cannot add " << v.GetYearMakeModel << endl;
	}
	
}

void Showroom::showInventory() const
{

}


//Accessors 


