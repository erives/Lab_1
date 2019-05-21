#include "pch.h"
#include "Dealership.h"
#include <iostream>





//constructors
Dealership::Dealership()
{
	dealershipName = "Generic Dealership";
	maxCapacity = 0;
	showrooms;
}

Dealership::Dealership(string name, unsigned int capacity)
{
	dealershipName = name;
	maxCapacity = capacity;
}

Dealership::~Dealership()
{
}

//behaviors

void Dealership::AddShowroom(const Showroom &s)
{
	if (showrooms.size() < maxCapacity) {
		showrooms.emplace_back(s);
	}
	else {
		cout << "Dealership is full, can't add another showroom!" << endl;
	}

}

float Dealership::GetAverageprice() const
{
	return 0.0f;
}

void Dealership::ShowInventory() const
{

}



