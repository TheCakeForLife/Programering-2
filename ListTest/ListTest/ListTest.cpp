#include "TestObj.h"
#include "List.h"
#include "ListableItem.h"
#include <iostream>
/*
* ***************************************************************
* Deta är ett test program för att göra en egen list funkton 
* till flyplans upgiften som ej är helt färdigt för tillfälet
* listans Add och [](index operator) funkar men Remov funkar 
* enbart för det första elementet i listan deta var så långt 
* jag hann tuvär 
* ***************************************************************
*/


int main()
{
    List SList; 
    std::cout << "Hello World!\nNumberOfTest-Items = ";
    int Num,Num2;
    std::cin >> Num; // inmatnig av hur många TestIstems Man vill lägga till i listan
    for (int i = 0; i < Num; i++)
        SList.AddItem(new TestObj);
    std::cout << SList.NumberOfItemsInList << "\n"; // utmatnig av hur många Saker som ligger i Listan
    for (int i = 0; i < SList.NumberOfItemsInList ; i++) // lop för att Skriva utt allt i ordnig Som ligger i listan
        std::cout << SList[i]->GetData() << "\n";
    std::cout <<  "vart ska den nya in ?\n";
    std::cin >> Num;
    SList.AddItemToPlace(new TestObj, Num, SList);
    for (int i = 0; i < SList.NumberOfItemsInList; i++) // lop för att Skriva utt det som fins kvar efter man har tagit bort något ur listan
        std::cout << SList[i]->GetData();
}