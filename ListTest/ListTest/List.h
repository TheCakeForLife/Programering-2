
#include "ListableItem.h"
#pragma once
static unsigned int NumberOfItemsInList = 0;

class List : private ListableItem
{
	public:
	List();
	void GetData() {};
	void AddItem(ListableItem &Temp);
	void CoutList();
	ListableItem operator[](unsigned int i);
	private:
	ListableItem StartPoint;
};
static List SList;