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
		cout << "En chans beh�ver vara i mellan 1 - 100 f�r att funka!";
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
		cout << "du beh�ver skriva in ett hel tal";
		cin >> input;
	}
	return input;
}