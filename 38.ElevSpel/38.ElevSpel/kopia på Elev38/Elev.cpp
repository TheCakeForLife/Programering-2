#include <iostream>
#include "Elev.h"
using namespace std;


Elev::Elev()
{
	Gender = (rand() % 2 ? 'M' : 'F'); //Vilkorsoperatorn används
	RandomName();
	string Classes[] = { "Matte","Svenska","Engelska","Mekatronik","Idrot","Programering","Kemi","Fusik","Teknik","Bild" };
	FavoritClass = Classes[rand() % 10];
	Tired = rand() % 11;
	helth = rand() % 10 + 5;
	Hunger = rand() % 5;
	Smart = rand() % 9 + 1;
}

Elev::~Elev()
{
	cout << Name << " Dog\n";
}

void Elev::RandomName()
{
	string SurNames[] = { "Lundqvist","Person","Friman","Eld","Kalson","Andersson","Johanson","Tindvall","Larsson","Svenson" };
	if (Gender == 'M')
	{
		string BoyNames[] = { "Bert","Hans","Viliam","Jonatan","Alfred","Kalson","Carl","Tony","Adrian","Simon" };
		Name = BoyNames[rand() % 10] + " " + SurNames[rand() % 10];
		return;
	}
	string GirlNames[] = { "Tilda","Ema","Elsa","Nina","Natali","Julia","Elin","Karin","Amanda","Lisa" };
	Name = GirlNames[rand() % 10] + " " + SurNames[rand() % 10];
}

void Elev::GetInfo()
{
	cout << Name << "\nStats\n" << "FavoritClass --> " << FavoritClass << "\nSmart Scale--> " << Smart << "\nLevel of hungrynes --> " << Hunger << "\nSleapines--> " << Tired << "\n\n";
}