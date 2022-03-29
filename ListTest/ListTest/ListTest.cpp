#include "TestObj.h"
#include "List.h"
#include "ListableItem.h"
#include <iostream>

int main()
{
    std::cout << "Hello World!\nNumberOfTest-Items = ";
    int Num;
    std::cin >> Num;
    TestObj* TestArray = new TestObj[Num];
    for(int i = 0; i < Num; i++)
        SList.AddItem(TestArray[i]);
    SList.CoutList();
    SList[1]
}