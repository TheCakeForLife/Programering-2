#include <iostream>
#include "Elev.h"
#include <Windows.h>
using namespace std;

int main()
{
    int S;
    do
    {
        cout << "How many students? ";
        cin >> S;
    }
    while (S < 1);
    Elev* Student = new Elev[S];
    for (int i = 0; i<S; i++)
        Student[i].GetInfo();
    delete[] Student;
}