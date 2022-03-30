#include <string>
#pragma once
// bass klass till List och man anv�nder den f�r att l�gga p� det object som skall kunna l�ggas in i listor
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