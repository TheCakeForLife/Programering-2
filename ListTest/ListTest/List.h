#include "ListableItem.h"
#pragma once
/*
	Lista Som kan f�rvara ListableItem som i deta program �r test obj men det kan vara en massa
	object Som kan ha �rvt ListableItem 
*/

class List : public ListableItem
{
	public:
	unsigned int NumberOfItemsInList = 0;
	void AddItem(ListableItem *Temp);
	void Remove(ListableItem* Item);
	ListableItem* operator[](const unsigned int i);
	std::string GetData() { return "DontWorkINList"; }
	private:
	ListableItem* StartPoint = nullptr;
	ListableItem* EndPoint = nullptr;
	
};

