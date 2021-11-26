#pragma once
#include<string>
#include <time.h>
#include <stdlib.h>
#include <iostream> // ta bort senare

using namespace std;
class eleve
{
	private: 
	string Name;
	int Hunger = 0;
	int Tierd;
	int helth;
	int Smart;
	string FavoritClass;
	char Gender;
	bool Created = false;
	



public: void CreatingNewStudent()
	{
	if (Created == false)
	{
		srand(time(NULL));
		int Slump = rand() % 2;
		if (Slump == 1)
		{
			
			Gender = 'M';

		}
		else
		{
			
			Gender = 'F';
		}

		RandomName();
		string Classes[] = { "Matte","Svenska","Engelska","Mekatronik","Idrot","Programering","Kemi","Fusik","Teknik","Bild" };
		int Slump2 = rand() % 10;
		FavoritClass = Classes[Slump2];
		Tierd = rand() % 11;
		helth = rand() % 10 + 5;
		Hunger = rand() %6;
		Smart = rand() % 9 + 1;

		Created = true;

	}
	else
		cout << "Du har redan skapat dena Person";
}

private: void RandomName()
	 {
		 srand(time(NULL));
		 int Slump = rand() % 10;

		 string SurNames[] = { "Lundqvist","Person","Friman","Eld","Nilson","Andersson","Johanson","Tindvall","Larsson","Svenson" };

		 if (Gender == 'M')
		 {
			 string BoyNames[] = { "Bert","Hans","Viliam","Jonatan","Alfred","Kalson","Carl","Tony","Adrian","Simon" };
			 int Slump2 = rand() % 10;
			 Name = BoyNames[Slump] + " " + SurNames[Slump2];
		 }
		 else
		 {
			 string GirlNames[] = { "Tilda","Ema","Elsa","Nina","Natali","Julia","Elin","Karin","Amanda","Lisa" };
			 int Slump2 = rand() % 10;
			 Name = GirlNames[Slump] + " " + SurNames[Slump2];
		 }


	 }

public:	 void GetInfo()
	 {
		 cout << Name <<"\nStats\n"<< "FavoritClass --> " << FavoritClass << "\nSmart Scale--> "<<Smart<< "\nLevel of hungrynes --> " << Hunger << "\nSleapines--> " << Tierd<<"\n";
	 }
public:	void AddSleap(int TierdAdd)
	 {
		 Tierd += TierdAdd;
	 }


	 
};