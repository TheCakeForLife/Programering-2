#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "User.h"
using namespace std;

User::User()
{
    while (true)
	{
        cout << "Username:\n";
        cin >> Username;
        cout << "\nPassword:\n";
        cin >> Password;
        if (ReadFile("Users"))
        {
            string Result = Username + "_" + Password;
            WriteToFile("Users.txt", Result);
            return;
        }
	}
}

bool User::WriteToFile(string NameOfFile, string Content)
{
    ofstream File;
    File.open(NameOfFile, ofstream::app);
    if (File.is_open())
    {
        File << Content << "\n";
        return true;
    }
    cout << "can't open file!";
    File.close();
    return false;
}

bool User::ReadFile(string NameOfFile)
{
    bool Done = false;
    bool NameNotTaken = true;
    while (!Done)
    {
        string line;
        ifstream File;
        File.open(NameOfFile, ofstream::app);
        if (File.is_open())
        {
            cout << "File contains:\n";
            while (getline(File, line))
            {
                cout << line << '\n';
                if (line == Username)
                    NameNotTaken = false;
            }
            File.close();
            system("pause");
            Done = true;
            return NameNotTaken;
        }
        else
            cout << "Unable to open file\n";
    }
}