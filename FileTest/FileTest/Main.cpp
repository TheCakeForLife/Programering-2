#include <iostream>
#include <fstream>
#include <string>
#include "User.h"
#include "File.h"
using namespace std;

void AddExistingUsers(User* Users)
{
    File Fstream;
    string* Lines = Fstream.ReadFile("Users.txt");
    for (int i = 0; i < Fstream.NumberOfRowsInFile("Users.txt"); i=+ 2)
    {
        Users[i] = *(new User(Lines[i], Lines[i+1]));
    }
    delete[] Lines;
}

void MainUi()
{
    File Fstream;
    while (true)
    {
        char input;
        system("cls");
        cout << "1: Read file\n" << "2: Write to file\n" << "3: Exit\n";
        cin >> input;
        switch (input)
        {
        case '1':
            Fstream.ReadFile("TEST.txt");
            break;

        case '2':
        {
            string temp;
            system("cls");
            cout << "Write to File\n";
            cin >> temp;
            Fstream.WriteToFile("TEST.txt", temp);
        }
        break;

        case '3':
            return;

        default:
        {
            cin.ignore();
            cout << "Somthing went wrong\n";
            system("pause");
        }

        break;
        }
    }
    system("cls");
}

void login()
{
    File Fstream;
    bool done = false;
    while (!done)
    {
        string Username, Password;
        cout << "Login\n" << "Username:\n";
        cin >> Username;
        cout << "\nPassword\n";
        cin >> Password;
        string* Lines = Fstream.ReadFile("Users.txt");
        for (int i = 0; i < Fstream.NumberOfRowsInFile("Users.txt"); i += 2)
        {
            if ((Lines[i] == Username) && (Lines[i + 1] == Password))
            {
                MainUi();
                return;
            }      
        }
        cout << "The user was not found try again\n\n";
    }
}

void StartUi(User* Users)
{
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
            AddExistingUsers(Users);
        }
        else if (input == "3")
            return;
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
    File Fstream;
    User* Users = new User[(Fstream.NumberOfRowsInFile("Users.txt") / 2)];
    StartUi(Users);
    system("cls");
}