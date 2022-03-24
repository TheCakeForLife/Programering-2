#include "List.h"

List::List()
{
	NumberOfItemsInList = 0;
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