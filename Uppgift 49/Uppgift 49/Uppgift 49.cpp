#include <iostream>
using namespace std;

bool Cirkel(int *Diameter,int *Arean, int *Omkretsen)
{
   bool ItRan = true;
   const double PI = 3.14159265358979323846;
   *Arean = (*Diameter / 2)*(*Diameter / 2) * PI ;
   *Omkretsen = *Diameter * PI;

   return ItRan;
 
}

int main()
{
    int Arean;
    int Omkretsen;

    int input;
    cout << "Skriv in en Diameter\n";
    cin >> input;
  
    if (Cirkel(&input, &Arean, &Omkretsen) == true)
    {
        cout << "Bollens Area --> " << Arean << "\n";
        cout << "Bollens Omkrets --> " << Omkretsen << "\n";
        cout << "Bollens diameter --> " << input << "\n";

    }
    else
        cout << "Det Blev Fel!!";



}


