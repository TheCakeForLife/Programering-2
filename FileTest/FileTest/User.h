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
		User(string Username, string Password);
};