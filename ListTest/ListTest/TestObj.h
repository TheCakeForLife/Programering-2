/*
Test Object f�r att ha n�got att l�gga in i listan
*/


#pragma once
#include"ListableItem.h"
#include "string";
#include "iostream"
class TestObj : public ListableItem 
{
	public:
		std::string GetData() { return Name; };
		TestObj() {std::cin >> Name;}
	private:
		std::string Name;
};