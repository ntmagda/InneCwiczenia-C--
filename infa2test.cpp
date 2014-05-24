#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <cstring>
#include "infa2.h"
 
InType Allowed(std::string& inString);
bool Skip(std::string& inString);
 
int main()
{
 
 using namespace std;
 ifstream inFile; 
 ifstream inData; 
 ofstream outFile; 
 string inFileName;
 string outFileName;
 string inDataName;
 string outputLabel;
 string command; 
 string skip;
 string allowed;
 StrType inputString;
 int numCommands;
 
cout << "Enter name of input command file; press return." << endl;
 cin >> inFileName;
 inFile.open(inFileName.c_str());
 cout << "Enter name of output file; press return." << endl;
 cin >> outFileName;
 outFile.open(outFileName.c_str());
 
 cout << "Enter name of input data file; press return." << endl;
 cin >> inDataName;
 inData.open(inDataName.c_str());
 
 cout << "Enter name of test run; press return." << endl;
 cin >> outputLabel;
 outFile << outputLabel << endl;
 
 inFile >> command;
 numCommands = 0;
 while (command != "Quit")
  {
    if (command == "GetString")
    {
      inFile >> skip >> allowed;
      inputString.GetStringFile(Skip(skip),
      Allowed(allowed), inData);
     }
  else if (command == "MakeEmpty")
              inputString.MakeEmpty();
  else if (command == "PrintToFile")
            inputString.PrintToFile(true, outFile);
  else if (command == "PrintToScreen")
            inputString.PrintToScreen(true);
  else if (command == "CopyString")
            {
                StrType secondString;
                inputString.CopyString(secondString);
                outFile << "String to copy: ";
                inputString.PrintToFile(false, outFile);
                outFile << " Copy of string: ";
                secondString.PrintToFile(false, outFile);
             }
 else
 {
    outFile << endl << "length of string " ;
    inputString.PrintToFile(false, outFile);
    outFile << " is " << inputString.LengthIs() << endl;
 }
// numCommands;
// cout << " Command number " << numCommands << " completed."<< endl;
 inFile >> command;
}
cout << "Testing completed." << endl;
return 0;
}
 
 
 
 
 
InType Allowed(std::string& inString)
{
if (inString == "ALPHA_NUM")
return ALPHA_NUM;
else if (inString == "ALPHA")
return ALPHA;
else if (inString == "NON_WHITE")
return NON_WHITE;
else return NOT_NEW;
}
 
bool Skip(std::string& inString)
{
if (inString == "true")
return true;
else return false;
}
 
/*
MakeEmpty
PrintToFile
GetString true ALPHA_NUM
PrintToFile
GetString true ALPHA_NUM
PrintToFile
GetString true ALPHA_NUM
PrintToFile
GetString true ALPHA_NUM
PrintToFile
GetString true ALPHA_NUM
PrintToFile
GetString false ALPHA_NUM
PrintToFile
GetString false ALPHA_NUM
PrintToFile
GetString false ALPHA_NUM
PrintToFile
GetString false ALPHA_NUM
PrintToFile
GetString false ALPHA_NUM
PrintToFile
GetString false ALPHA_NUM
PrintToFile
GetString false ALPHA_NUM
PrintToFile
GetString false ALPHA_NUM
PrintToFile
GetString false ALPHA_NUM
PrintToFile
GetString true NOT_NEW
PrintToFile
GetString true NOT_NEW
PrintToFile
GetString true NOT_NEW
PrintToFile
GetString true NOT_NEW
PrintToFile
GetString false NOT_NEW
PrintToFile
GetString false NOT_NEW
PrintToFile
GetString false NOT_NEW
PrintToFile
GetString false NOT_NEW
PrintToFile
LengthIs
CopyString
PrintToScreen
Quit
