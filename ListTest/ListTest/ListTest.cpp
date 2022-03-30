#include "TestObj.h"
#include "List.h"
#include "ListableItem.h"
#include <iostream>

int main()
{
    std::cout << "Hello World!\nNumberOfTest-Items = ";
    int Num;
    std::cin >> Num;
    for (int i = 0; i < Num; i++)
    {
        SList.AddItem(new TestObj);
    }
    std::cout << SList[1]->GetData();
}