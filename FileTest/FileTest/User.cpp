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
        string* Lines = ReadFile("Users.txt", 4);
        cout << Lines[3];
        system("pause");
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

string* User::ReadFile(string NameOfFile ,unsigned int NumberInArray)
{
    string *Lines = new string[NumberInArray];
    string line;

    while (true)
    {
        ifstream File;
        File.open(NameOfFile, ofstream::app);
        if (File.is_open())
        {
            cout << "File contains:\n";
            int i = 0;
            while (getline(File, line) && i < NumberInArray)
            {
                Lines[i] = line;
                i++;
            }      
        }
            File.close();
            return Lines;
    }
            cout << "Unable to open file\n";
            system("pause");
}

int NumberOfRowsInFile(string NameOfFile)
{
    int NumberOfRows = 0;
    string line;
    ifstream File;
    File.open(NameOfFile, ofstream::app);
    while (getline(File, line))
        NumberOfRows++;
    File.close();
    return NumberOfRows;
}