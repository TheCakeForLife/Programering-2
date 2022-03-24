#pragma once
#include"ListableItem.h"
#include "string";
#include "iostream"
class TestObj : public ListableItem 
{
	public:
		TestObj()
		{
			std::cin >> Name;
		}
		std::string* GetData();
	private:
		std::string Name;
};