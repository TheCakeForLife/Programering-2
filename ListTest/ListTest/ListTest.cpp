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
    SList.AddItem(TestArray[0]);
    SList.CoutList();
}