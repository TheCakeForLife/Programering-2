#pragma once
#include <string>
#include <iostream>

using namespace std;

int ChansInput()
{
	int input;
	cin >> input;
	while (!cin || input < 1 ||input > 100)
	{
		cin.clear();
		cin.ignore();
		cout << "En chans behöver vara i mellan 1 - 100 för att funka!";
		cin >> input;
	}
	return input;
}

int IntInput()
{
	int input;
	cin >> input;
	while (!cin)
	{
		cin.clear();
		cin.ignore();
		cout << "du behöver skriva in ett hel tal";
		cin >> input;
	}
	return input;
}