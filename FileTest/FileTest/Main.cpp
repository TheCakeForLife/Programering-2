#include <iostream>
#include <string>
#include "User.h"
#include "File.h"
#pragma once

using namespace std;

void AddExistingUsers()
{
    File FINOUT;
    int Rows = FINOUT.NumberOfRowsInFile("Users.txt");
    User** Users = new User * [(Rows / 2)];
    string* lines = FINOUT.ReadFile("Users.txt");
    for (int i = 0; i < (Rows - 1); i += 2)
    {
        Users[i] = new User(lines[i], lines[i + 1]);
        cout << "Remaking User " << lines[(i)] << endl;
        cout << "Remaking Pass " << lines[(i + 1)] << endl;
    }
    delete[] lines;
}

void MainUi()
{
    File FINOUT;
    while (true)
    {
        char input;
        system("cls");
        cout << "1: Read file\n" << "2: Write to file\n" << "3: Exit\n";
        cin >> input;
        switch (input)
        {
        case '1':
            FINOUT.ReadFile("TEST.txt");
            break;

        case '2':
        {
            string temp;
            system("cls");
            cout << "Write to File\n";
            cin >> temp;
            FINOUT.WriteToFile("TEST.txt", temp);
        }
        break;

        case '3':
            return;

        default:
        {
            cin.ignore();
            cout << "That number is not in use try agin!\n";
            system("pause");
        }

        break;
        }
    }
    system("cls");
}

void login()
{
    File FINOUT;
    bool done = false;
    while (!done)
    {
        string Username, Password;
        cout << "Login\n" << "Username:\n";
        cin >> Username;
        cout << "\nPassword\n";
        cin >> Password;
        string* Lines = FINOUT.ReadFile("Users.txt");
        for (int i = 0; i < FINOUT.NumberOfRowsInFile("Users.txt"); i += 2)
        {
            if ((Lines[i] == Username) && (Lines[i + 1] == Password))
            {
                MainUi();
                return;
            }      
        }
        cout << "The user was not found\n1: try again\n2: Press key to continue\n";
        string test;
        cin >> test;
        if (test != "1")
            return;
    }
}

void StartUi()
{
    File FINOUT;
    while (true)
    {
        string input;
        cout << "1: Login\n2: Create Account\n3: Exit\n";
        cin >> input;
        if (input == "1")
            login();
        else if (input == "2")
        {
            new User;
            AddExistingUsers();
        }
        else if (input == "3")
            return;
        else if (input == "4")
        {
            FINOUT.InCryptToFile("InCryptToFileTest.txt", "test", 10);
            int* Test = FINOUT.ReadIntFromFile("InCryptToFileTest.txt");
            int Rows = FINOUT.NumberOfRowsInFile("InCryptToFileTest.txt");
            for (int i = 0; i < Rows; i++)
                cout << Test[i];

            system("pause");
        }    
        else
        {
            cout << "That number is not in use try agin!\n";
            system("pause");
        }
        system("cls");
    }
}

int main()
{
    StartUi();
    system("cls");
}