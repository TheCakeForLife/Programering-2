#pragma once
#include <string>
using namespace std;
class File
{
public:
	bool WriteToFile(string NameOfFile, string Content);
	string* ReadFile(string NameOfFile);
	int NumberOfRowsInFile(string NameOfFile);
	string* DeCryptFile(string NameOfFile)
};