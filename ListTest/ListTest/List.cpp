#include "List.h"

List::List()
{
	NumberOfItemsInList = 0;
}

ListableItem List::operator[](unsigned int K)
{
	ListableItem *Temp = StartPoint;
	ListableItem *Temp2;
	if (K > 0)
		for (int i = 0; i < K; i++)
		{
			Temp2 = Temp->GetNext();
			Temp = Temp2;
		}
	else
		return *Temp;
	return *Temp;
}

void List::AddItem(ListableItem* Temp)
{
	if (!NumberOfItemsInList)
	{
		StartPoint = Temp;
	}
	else
	{
		ListableItem* ItemToTest(StartPoint);
		ListableItem* NewTemp = ItemToTest;

		while (true)
		{
			if (!ItemToTest->GetNext())
			{
				ItemToTest->SetNext(Temp);
				ItemToTest->SetPrev(NewTemp);
				NumberOfItemsInList++;
				return;
			}
			else
			{
				NewTemp = Temp;
				ItemToTest = ItemToTest->GetNext();
			}
		}
	}
	NumberOfItemsInList++;
}