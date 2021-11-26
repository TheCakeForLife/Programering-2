#include <iostream>
#include "Elev.h"
using namespace std;

int main()
{
    cout << "Hello World Elev!\n";

    eleve Student[30];

    for (int i = 0; i <= 29; i++)
    {
        cout << "\n\n";
        Student[i].CreatingNewStudent();
        Student[i].GetInfo();
        cout << "\n";

        
    }


}

bool MainGame()
{
    bool Win = false;
        while (Win == false)
        {

        }
        return Win;
}

