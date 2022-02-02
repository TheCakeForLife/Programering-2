#pragma once
#include <string>
using namespace std;
class User
{
	private:
		string Username;
		string Password;
	public:
	User();
	bool WriteToFile(string NameOfFile, string Content);
	bool ReadFile(string NameOfFile);
};