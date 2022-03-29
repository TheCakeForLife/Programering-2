#include <string>
#include "ListBase.h"
#pragma once

class ListableItem : public ListBase
{
	public:
	ListableItem();
	ListableItem(ListableItem& Temp);
	ListableItem* GetPrev();
	ListableItem* GetNext();
	void SetPrev(ListableItem* Temp);
	void SetNext(ListableItem* Temp);
	std::string GetData() { return "DontWork"; }
	private:
	ListableItem* Prev;
	ListableItem* Next;
};