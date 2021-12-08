#include <iostream>
#include "Elev.h"
#include <Windows.h>
using namespace std;

int main()
{
    cout << "Hello World Elev!\n";
    Elev Student[30];
    for (int i = 0; i<30; i++)
    { 
        Student[i].CreatingNewStudent();
        cout << "\n";
        Student[i].GetInfo();
    }
    system("pause");
}