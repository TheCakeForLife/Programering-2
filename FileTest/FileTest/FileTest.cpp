#include <iostream>
#include <fstream>
#include <string>
#include "User.h"
using namespace std;

bool WriteToFile(string NameOfFile, string Content)
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

void ReadFile(string NameOfFile)
{
    bool Done = false;
    while (!Done)
    {
        string line;
        ifstream File;
        File.open(NameOfFile,ofstream::app);
        if (File.is_open())
        {
            cout << "File contains:\n";
            while (getline(File, line))
                cout << line << '\n';
            File.close();
            system("pause");
            Done = true;
        }
        else
            cout << "Unable to open file\n";
    }
}

void MainUi()
{
    while (true)
    {
        char input;
        system("cls");
        cout << "1: Read file\n" << "2: Write to file\n" << "3: Exit\n";
        cin >> input;
        switch (input)
        {
        case '1':
            ReadFile("TEST.txt");
            break;

        case '2':
        {
            string temp;
            system("cls");
            cout << "Write to File\n";
            cin >> temp;
            WriteToFile("TEST.txt", temp);
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
    MainUi();
}

void StartUi()
{
    while (true)
    {
        char input;
        cout << "1: Login\n2: Create Account\n3: Exit\n";
        cin >> input;
        switch (input)
        {
            case '1':
                login();
                break;
            case '2':
                new User;
                break;
            case '3':
                return;
                break;
            default:
            {
                cout << "That number is not in use try agin!\n";
                system("pause");
            }
        }
        system("cls");
    }
}



int main()
{
    StartUi();
    system("cls");
}