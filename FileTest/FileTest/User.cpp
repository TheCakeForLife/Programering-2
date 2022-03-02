#pragma once
#include <iostream>
#include <string>
#include "User.h"
#include "File.h"
using namespace std;

User::User(string Username, string Password)
{
    this->Password = Password;
    this->Username = Username;
}

User::User()
{
    while (true)
	{
        cout << "Username:\n";
        cin >> Username;
        cout << "\nPassword:\n";
        cin >> Password;
        string* Lines = Fstream.ReadFile("Users.txt");
        bool NotTaken = true;
        int Rows = Fstream.NumberOfRowsInFile("Users.txt");
        for (int i = 0; i < Rows; i += 2)
            if ( Username == Lines[i])
                NotTaken = false;
        if (NotTaken)
        {
            Fstream.WriteToFile("Users.txt", Username);
            Fstream.WriteToFile("Users.txt", Password);
            delete [] Lines;
            return;
        }
        system("cls");
        cout << "That name is taken try a new name!\n";
        system("pause");
        system("cls");
	}
}
