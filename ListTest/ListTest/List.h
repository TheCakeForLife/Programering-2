
#include "ListableItem.h"
#pragma once
static unsigned int NumberOfItemsInList = 0;

class List : private ListableItem
{
	public:
	List();
	int* GetData(int x) = 0;
	std::string* GetData(std::string x) = 0;
	void AddItem(ListableItem &Temp);
	void CoutList();
	private:
	ListableItem StartPoint;
	private:
		
};
static List SList;