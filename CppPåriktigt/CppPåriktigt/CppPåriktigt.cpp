#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>

#include <string>


using namespace std;
int main()
{
	string Input;
	string output;

	cout << "Hej skriv in vad du vill kryptera!";
	cin >> Input;

	for (int i = 0; sizeof Input >= i; i++)
	{
		int C = 1 + Input[i];
		output[i] = C;
	}
	cout << output;


}

