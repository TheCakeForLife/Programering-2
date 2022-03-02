#include "File.h"
#include <iostream>
#include <fstream>
#include <string>

int File::NumberOfRowsInFile(string NameOfFile)
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

bool File::WriteToFile(string NameOfFile, string Content)
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

string* File::ReadFile(string NameOfFile)
{
    unsigned int NumberInArray = NumberOfRowsInFile(NameOfFile);
    string* Lines = new string[NumberInArray];
    string line;

    while (true)
    {
        ifstream File;
        File.open(NameOfFile, ofstream::app);
        if (File.is_open())
        {
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


string* File::DeCryptFile(string NameOfFile)
{
    string* Lines = this->ReadFile(NameOfFile);
    for (int i = 0; i < NumberOfRowsInFile(NameOfFile);)
    {
        string temp = Lines[i];
        for (int k = 0; k < temp.length(); k++)
        {
            int newtemp = (int)temp[k] + 1;
            WriteToFile("Inttest.txt", temp);
        }
    }
    return Lines;
}