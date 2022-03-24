#include"ListableItem.h"
ListableItem::ListableItem()
{
	Prev = nullptr;
	Next = nullptr;
}

ListableItem::ListableItem(ListableItem& Temp)
{
	Prev = Temp.Prev;
	Next = Temp.Next;
	Data = &Temp;
}

ListableItem* ListableItem::GetPrev()
{
	return Prev;
}
ListableItem* ListableItem::GetNext()
{
	return Next;
}

void ListableItem::SetPrev(ListableItem& Temp)
{
	Prev = Temp.Prev;
}
void ListableItem::SetNext(ListableItem& Temp)
{
	Next = Temp.Next;
}