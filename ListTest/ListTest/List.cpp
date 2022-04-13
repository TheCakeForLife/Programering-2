#include <iostream>
#include "List.h"

ListableItem* List::operator[](const unsigned int K ) // operator som ger en pekare till det element man väljer i listan
{
	ListableItem *Temp = StartPoint;
	for (int i = 0; i < K; i++)
		if(Temp->GetNext() != Temp)
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
	if (StartPoint == Item)
	{
		Item->GetNext()->SetPrev(Item->GetNext());
		StartPoint = Item->GetNext();
	}
	else if (EndPoint == Item)
	{
		Item->GetPrev()->SetNext(Item->GetPrev());
		EndPoint = Item->GetPrev();
	}
	else
	{
		Item->GetPrev()->SetNext(Item->GetNext());
		Item->GetNext()->SetPrev(Item->GetPrev());
	}
	delete Item;
	NumberOfItemsInList--;
}

void List::AddItemToPlace(ListableItem* NewItem, const unsigned int Spot, List TheList) // lägger till ett item i listan
{
	ListableItem *Temp = TheList[Spot];
	if (!Spot) // ifall 0 så skall den läggas först i listan
	{
		StartPoint = NewItem;
		Temp->SetPrev(NewItem);
		NewItem->SetPrev(NewItem);
		NewItem->SetNext(Temp);
	}
	else if(Temp->GetNext() == Temp)
		TheList.AddItem(NewItem);
	else
	{
		Temp->GetPrev()->SetNext(NewItem);
		NewItem->SetPrev(Temp->GetPrev());
		NewItem->SetNext(Temp);
		Temp->SetPrev(NewItem);
	}
	NumberOfItemsInList++;
}

void List::AddItem(ListableItem* Temp) // lägger till ett item i listan
{
	if (!NumberOfItemsInList) // i fall listan är tom körs dena
	{
		StartPoint = Temp;
		EndPoint = Temp;
		Temp->SetNext(Temp);
		Temp->SetPrev(Temp);
	}
	else // anars så körs dena
	{
		EndPoint->SetNext(Temp);
		Temp->SetPrev(EndPoint);
		Temp->SetNext(Temp);
		EndPoint = Temp;
	}
	NumberOfItemsInList++; // lägger till 1 i variabeln som håller koll på hur många items som ligger i listan
}