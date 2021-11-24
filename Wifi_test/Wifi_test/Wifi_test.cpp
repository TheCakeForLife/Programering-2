#include <iostream>
#include <string>
using namespace std;


bool StopSwitch(string *a )
{
    bool funka = true;
   
    if (*a == "Stop")
        *a = "potS\n";
    else
        funka = false;
    return funka;
}


int main()
{
    string input;
    string *p;

    cout << "Stop Switch!\n";

    cin >> input;

    p = &input;

    bool funka = StopSwitch(p);

    if (funka == true)
        cout << "det fungerar\n";
    else 
        cout << "det fungerar ej\n";

    cout << *p;


}

