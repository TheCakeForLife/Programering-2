#pragma once
#include <string>
#include "ListableItem.h"

class Plane : public ListableItem
{
public:
	std::string GetData();
	Plane();
private:
	std::string FlightName;
};