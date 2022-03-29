#include <string>
#include "ListBase.h"
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
	private:
	ListableItem* Prev;
	ListableItem* Next;
};