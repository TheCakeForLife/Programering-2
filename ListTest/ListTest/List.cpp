#include "List.h"

List::List()
{
	NumberOfItemsInList = 0;
}

ListableItem List::operator[](unsigned int K)
{
	ListableItem* Temp = &StartPoint;
	ListableItem *Temp2;
	if (K > 0)
		for (int i = 0; i < K; i++)
		{
			Temp2 = Temp->GetNext();
			Temp = Temp2;
		}
	else
		return *Temp;
}

void List::AddItem(ListableItem& Temp)
{
	if(!NumberOfItemsInList)
	{
		Temp.SetPrev(Temp);
		StartPoint = Temp;
	}
	else 
		if (!StartPoint.GetNext())
				StartPoint.SetNext(Temp);
		else
		{
			ListableItem ItemToTest(StartPoint);
			ListableItem *NewTemp = &ItemToTest;			
			while (NewTemp->GetNext())
				NewTemp = NewTemp->GetNext();
			NewTemp->SetNext(Temp);
		}
	NumberOfItemsInList++;
}

void List::CoutList()
{
	ListableItem ItemToTest(StartPoint);
	ListableItem* NewTemp = &ItemToTest;
	while (NewTemp->GetNext())
	{
		NewTemp = NewTemp->GetNext();
	}	
}