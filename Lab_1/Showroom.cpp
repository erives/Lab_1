#include "pch.h"
#include "Showroom.h"
#include "Vehicle.h"
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
void Showroom::AddVehicle(const Vehicle& v)
{
	if (vehicles.size()< maxCapacity) {
		vehicles.emplace_back(v);
	}
	else {
		cout << "Showroom is full! Cannot add " << v.GetYearMakeModel << endl;
	}
	
}

void Showroom::ShowInventory() const
{
	for(int i = 0; i < vehicles.size(); i++ )

}


//Accessors 


