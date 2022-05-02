#include <string>
#pragma once
// bass klass till List och man använder den för att lägga på det object som skall kunna läggas in i listor
class ListableItem
{
	public:
	ListableItem();
	virtual std::string GetData() = 0;
	ListableItem* GetPrev();
	ListableItem* GetNext();
	void SetPrev(ListableItem* Temp);
	void SetNext(ListableItem* Temp);
	protected:
		ListableItem* Prev = nullptr;
		ListableItem* Next = nullptr;
};