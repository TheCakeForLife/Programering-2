#include <string>
#pragma once
using namespace std;
class File
{
public:
	bool WriteToFile(string NameOfFile, string Content);
	bool WriteIntToFile(string NameOfFile, int* Content, unsigned int ArraySize);
	string* ReadFile(string NameOfFile);
	int NumberOfRowsInFile(string NameOfFile);
	int* ReadIntFromFile(string NameOfFile);
	string* DeCryptFile(string NameOfFile, int Seed);
	bool InCryptToFile(string NameOfFile, string Content, int Seed);
	int* StringToInt(string Str);
};