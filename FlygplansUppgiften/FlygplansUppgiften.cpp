#include <iostream>
#include "List.h"
#include "Inputs.h"
#include "Plane.h"
#include "ListableItem.h"
using namespace std;

int main()
{
	unsigned int chans;
	List FlightList;
   cout << "Hej hur stor chans är det att ett flygplan vill landa?!\n";
   chans = ChansInput();
   for (int i = 0; true; i++)
   {
		if ((rand() % 100 + 1) <= chans)
		{
			cout << "det landa ett plan\n";
			FlightList.AddItem(new Plane);
		}
		cout << i << "\n";
		system("pause");
		system("cls");
		for (int i = 0; i < FlightList.NumberOfItemsInList; i++)
			cout << FlightList[i]->GetData();
		system("pause");

   }
   
}