#include <string>
#pragma once

class ListableItem
{
	public:
	ListableItem();
	ListableItem(ListableItem& Temp);
	ListableItem* GetPrev();
	ListableItem* GetNext();
	void SetPrev(ListableItem& Temp);
	void SetNext(ListableItem& Temp);
	virtual std::string* GetData(std::string x) = 0;
	virtual int* GetData(int x) = 0;
	
	private:
	ListableItem* Prev;
	ListableItem* Next;
	ListableItem* Data;
};