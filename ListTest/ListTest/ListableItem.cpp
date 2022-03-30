#include"ListableItem.h"
ListableItem::ListableItem()
{
	Prev = nullptr;
	Next = nullptr;
}

ListableItem* ListableItem::GetPrev()
{
	return Prev;
}
ListableItem* ListableItem::GetNext()
{
	return Next;
}

void ListableItem::SetPrev(ListableItem* Temp)
{
	Prev = Temp;
}
void ListableItem::SetNext(ListableItem* Temp)
{
	Next = Temp;
}