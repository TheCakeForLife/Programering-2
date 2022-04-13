#include <iostream>
#include "List.h"

ListableItem* List::operator[](const unsigned int K ) // operator som ger en pekare till det element man v�ljer i listan
{
	ListableItem *Temp = StartPoint;
	for (int i = 0; i < K; i++)
		if(Temp->GetNext() != Temp)
			Temp = Temp->GetNext();
	return Temp;
}


/*
*******************************************************************************************
i fall item �r i mitten av listan det vill s�ga att den har b�de next och prev d� kommer 
den att byta ut prevs next s� att den pekar p� Items Next 
det g�r s� att man byter ut den itemet som �r i mitimellan tv� object i listan
*******************************************************************************************
 av n�got sj�l sparas ej prev pekare vilket leder till att dena funktin ej funkar som t�nkt
*/
void List::Remove(ListableItem* Item) // funktion f�r att ta bort ett item ur listan 
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

void List::AddItemToPlace(ListableItem* NewItem, const unsigned int Spot, List TheList) // l�gger till ett item i listan
{
	ListableItem *Temp = TheList[Spot];
	if (!Spot) // ifall 0 s� skall den l�ggas f�rst i listan
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

void List::AddItem(ListableItem* Temp) // l�gger till ett item i listan
{
	if (!NumberOfItemsInList) // i fall listan �r tom k�rs dena
	{
		StartPoint = Temp;
		EndPoint = Temp;
		Temp->SetNext(Temp);
		Temp->SetPrev(Temp);
	}
	else // anars s� k�rs dena
	{
		EndPoint->SetNext(Temp);
		Temp->SetPrev(EndPoint);
		Temp->SetNext(Temp);
		EndPoint = Temp;
	}
	NumberOfItemsInList++; // l�gger till 1 i variabeln som h�ller koll p� hur m�nga items som ligger i listan
}