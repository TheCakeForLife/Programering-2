#include <iostream>
#include <fstream>
#include <string>
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

int main()
{
    char input;
    while (true)
    {
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
                return 0;
        
            default:
            {
                cin.ignore();
                cout << "Somthing went wrong\n";
                system("pause");
            }
            
            break;
        }
    }
    
    
}