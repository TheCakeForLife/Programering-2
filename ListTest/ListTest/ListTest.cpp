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
    for (int i = 0; i < Num; i++)
    {
        TestObj* TestSingel = &TestArray[i];
        std::cout << TestSingel << "\n";
        SList.AddItem(TestSingel);
    }
    std::cout << SList[1].GetData();
}