#include "List.h"

List::List()
{
	NumberOfItemsInList = 0;
}

ListableItem* List::operator[](unsigned int K)
{
	ListableItem Temp = *StartPoint;
	for (int i = 0; i > K; i++)
		Temp = *Temp.GetNext();
	return &Temp;
}

void List::AddItem(ListableItem* Temp)
{
	if (!NumberOfItemsInList)
	{
		StartPoint = Temp;
		EndPoint = Temp;
	}
	else
	{
		EndPoint->SetNext(Temp);
		SetPrev(EndPoint);
		EndPoint = Temp;
	}
	NumberOfItemsInList++;
}