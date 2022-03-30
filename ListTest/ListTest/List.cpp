#include <iostream>
#include "List.h"

ListableItem* List::operator[](const unsigned int K ) // operator som ger en pekare till det element man väljer i listan
{
	ListableItem *Temp = StartPoint;
	for (int i = 0; i < K; i++)
		if(Temp->GetNext())
			Temp = Temp->GetNext();
	return Temp;
}


/*
*******************************************************************************************
i fall item är i mitten av listan det vill säga att den har både next och prev då kommer 
den att byta ut prevs next så att den pekar på Items Next 
det gör så att man byter ut den itemet som är i mitimellan två object i listan
*******************************************************************************************
 av något själ sparas ej prev pekare vilket leder till att dena funktin ej funkar som tänkt
*/
void List::Remove(ListableItem* Item) // funktion för att ta bort ett item ur listan 
{
	if (Item->GetPrev() && Item->GetNext())
	{
		ListableItem* TempPrev = Item->GetPrev();
		ListableItem* TempNext = Item->GetNext();
		TempPrev->SetNext(TempNext);
		TempNext->SetPrev(TempPrev);
	}
	else if (!Item->GetPrev()) // tar man bort det första elementet i listan efter som den ej har någon prev
	{
		StartPoint = Item->GetNext();
		Item->GetNext()->SetPrev(nullptr);
	}
	else if (!Item->GetNext()) // tar bort det sista elementet i listan efter som det ej har någon Next pekare
	{
		EndPoint = Item->GetNext();
		Item->GetNext()->SetPrev(nullptr);
	}
		
	ListableItem *Test = this;
	delete Item;
	NumberOfItemsInList--;
}

void List::AddItem(ListableItem* Temp) // lägger till ett item i listan
{
	if (!NumberOfItemsInList) // i fall listan är tom körs dena
	{
		StartPoint = Temp;
		EndPoint = Temp;
		Next = Temp;
	}
	else // anars så körs dena
	{
		EndPoint->SetNext(Temp);
		SetPrev(EndPoint);
		EndPoint = Temp;
	}
	NumberOfItemsInList++; // lägger till 1 i variabeln som håller koll på hur många items som ligger i listan
}