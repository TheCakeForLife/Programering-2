#include "Plane.h"
#include <string>
#include <iostream>

Plane::Plane()
{
	char name[4];
	for (int i = 0; i < 4; i++)
		name[i] = (65 + rand() % 26);
	std::string FlightNumber = name;
	FlightName = FlightNumber;
}

std::string Plane::GetData()
{
	return FlightName;
}

