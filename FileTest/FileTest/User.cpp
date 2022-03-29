
#include <iostream>
#include <string>
#include "LibTest.h"
#include "User.h"
#include "File.h"
#pragma once
using namespace std;



User::User(string UserName, string PassWord)
{
    Password = PassWord;
    Username = UserName;
}

User::User()
{
    while (true)
	{
        File FINOUT;
        cout << "Username:\n";
        cin >> Username;
        cout << "\nPassword:\n";
        cin >> Password;
        string* Lines = FINOUT.ReadFile("Users.txt");
        bool NotTaken = true;
        int Rows = FINOUT.NumberOfRowsInFile("Users.txt");
        for (int i = 0; i < Rows; i += 2)
            if ( Username == Lines[i])
                NotTaken = false;
        if (NotTaken)
        {
            FINOUT.WriteToFile("Users.txt", Username);
            FINOUT.WriteToFile("Users.txt", Password);
            delete [] Lines;
            return;
        }
        system("cls");
        cout << "That name is taken try a new name!\n";
        system("pause");
        system("cls");
	}
}
