#pragma once
#include <string>
#include <time.h>
#include <stdlib.h>
using namespace std;

class Elev
{
public:
	Elev();
	~Elev();
	void GetInfo();
	
private:
	void RandomName();
	string Name;
	int Hunger;
	int Tierd;
	int helth;
	int Smart;
	string FavoritClass;
	char Gender;
};