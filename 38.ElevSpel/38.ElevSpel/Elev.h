#pragma once
#include <string>
#include <time.h>
#include <stdlib.h>
using namespace std;

class Elev
{
public:
	void CreatingNewStudent();
	void GetInfo();
	void RandomName();
private:
	string Name;
	int Hunger = 0;
	int Tierd;
	int helth;
	int Smart;
	string FavoritClass;
	char Gender;
	bool Created = false;
};