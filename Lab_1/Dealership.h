#pragma once
#include <string>
#include <vector>
#include "Showroom.h"

using namespace std;

class Dealership
{
private:
	string dealershipName;
	unsigned int maxCapacity;
	vector<Showroom> showrooms;

public:
	//constructor
	Dealership();

	Dealership(string name, unsigned int capacity);

	~Dealership();

	//behaviors
	
	void AddShowroom(const Showroom &s);

	float GetAverageprice() const;

	void ShowInventory() const;
};

