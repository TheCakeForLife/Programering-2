#include <iostream>
#include "List.h"

ListableItem* List::operator[](const unsigned int K ) // operator som ger en pekare till det element man v�ljer i listan
{
	ListableItem *Temp = StartPoint;
	for (int i = 0; i < K; i++)
		if(Temp->GetNext())
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
	if (Item->GetPrev() && Item->GetNext())
	{
		ListableItem* TempPrev = Item->GetPrev();
		ListableItem* TempNext = Item->GetNext();
		TempPrev->SetNext(TempNext);
		TempNext->SetPrev(TempPrev);
	}
	else if (!Item->GetPrev()) // tar man bort det f�rsta elementet i listan efter som den ej har n�gon prev
	{
		StartPoint = Item->GetNext();
		Item->GetNext()->SetPrev(nullptr);
	}
	else if (!Item->GetNext()) // tar bort det sista elementet i listan efter som det ej har n�gon Next pekare
	{
		EndPoint = Item->GetNext();
		Item->GetNext()->SetPrev(nullptr);
	}
		
	ListableItem *Test = this;
	delete Item;
	NumberOfItemsInList--;
}

void List::AddItem(ListableItem* Temp) // l�gger till ett item i listan
{
	if (!NumberOfItemsInList) // i fall listan �r tom k�rs dena
	{
		StartPoint = Temp;
		EndPoint = Temp;
		Next = Temp;
	}
	else // anars s� k�rs dena
	{
		EndPoint->SetNext(Temp);
		SetPrev(EndPoint);
		EndPoint = Temp;
	}
	NumberOfItemsInList++; // l�gger till 1 i variabeln som h�ller koll p� hur m�nga items som ligger i listan
}