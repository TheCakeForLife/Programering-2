#include "TestObj.h"
#include "List.h"
#include "ListableItem.h"
#include <iostream>
/*
* ***************************************************************
* Deta �r ett test program f�r att g�ra en egen list funkton 
* till flyplans upgiften som ej �r helt f�rdigt f�r tillf�let
* listans Add och [](index operator) funkar men Remov funkar 
* enbart f�r det f�rsta elementet i listan deta var s� l�ngt 
* jag hann tuv�r 
* ***************************************************************
*/


int main()
{
    List SList; 
    std::cout << "Hello World!\nNumberOfTest-Items = ";
    int Num,Num2;
    std::cin >> Num; // inmatnig av hur m�nga TestIstems Man vill l�gga till i listan
    for (int i = 0; i < Num; i++)
        SList.AddItem(new TestObj);
    std::cout << SList.NumberOfItemsInList << "\n"; // utmatnig av hur m�nga Saker som ligger i Listan
    for (int i = 0; i < SList.NumberOfItemsInList ; i++) // lop f�r att Skriva utt allt i ordnig Som ligger i listan
        std::cout << SList[i]->GetData() << "\n";
    std::cout <<  "vart ska den nya in ?\n";
    std::cin >> Num;
    SList.AddItemToPlace(new TestObj, Num, SList);
    for (int i = 0; i < SList.NumberOfItemsInList; i++) // lop f�r att Skriva utt det som fins kvar efter man har tagit bort n�got ur listan
        std::cout << SList[i]->GetData();
}