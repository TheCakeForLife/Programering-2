#include "ListableItem.h"
#pragma once
static unsigned int NumberOfItemsInList = 0;

class List : private ListableItem
{
	public:
	List();
	void AddItem(ListableItem *Temp);
	ListableItem* operator[](unsigned int i);
	std::string GetData() { return "DontWork"; }
	private:
	ListableItem * StartPoint = nullptr;
	ListableItem* EndPoint = nullptr;
};
static List SList;