#include <string>
using namespace std;
#pragma once
class User
{
	private:
		string Username;
		string Password;
	public:
		User();
		User(string Username, string Password);
};