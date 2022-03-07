#include "File.h"
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#pragma once


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

bool File::WriteIntToFile(string NameOfFile, int* Content , unsigned int ArraySize)
{
    ofstream File;
    File.open(NameOfFile, ofstream::app);
    if (File.is_open())
    {
        for(int i = 0; i < ArraySize; i++)
            File << Content[i] << " ";
        File << "\n";
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

int* File::ReadIntFromFile(string NameOfFile)
{
    unsigned int NumberInArray = NumberOfRowsInFile(NameOfFile);
    int* Lines = new int[NumberInArray];
    string line;

    while (true)
    {
        ifstream File;
        File.open(NameOfFile, ofstream::app);
        if (File.is_open())
        {
            int Temp;
            while(getline(File, line))
            { 
                int Rows = line.size();
                int* BigTemp = new int[Rows];
                while (File >> Temp);
                {
                    cout << Temp;
                    system("pause");  
                }  
            }
              
        }
        File.close();
        return Lines;
    }
    cout << "Unable to open file\n";
    system("pause");
}

bool File::InCryptToFile(string NameOfFile,string Content, int Seed)
{
    srand(Seed);
    unsigned int size = Content.size();
    int *ToCrypt = new int[size];
    for (int i = 0; i < size; i++)
        ToCrypt[i] = ((int)Content[i] + rand());
    return WriteIntToFile(NameOfFile, ToCrypt, size);
}

string* File::DeCryptFile(string NameOfFile, int Seed)
{
    srand(Seed);
    //* string Temp = 
    
    return &NameOfFile;
}