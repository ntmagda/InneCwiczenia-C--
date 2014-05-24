Oto nagłówek klasyn StrType
 
#include <fstream>
#include <iostream>
const int MAX_CHARS = 100;
enum InType {ALPHA_NUM, ALPHA, NON_WHITE, NOT_NEW};
class StrType
{
  public:

  void MakeEmpty();
  void GetString(bool skip, InType charsAllowed);
  void GetStringFile(bool skip, InType charsAllowed,std::ifstream& inFile);
/ read and discarded.
  void PrintToScreen(bool newLine);
  void PrintToFile(bool newLine, std::ofstream& outFile);
  int LengthIs();
  void CopyString(StrType& newString);
  private:
    char letters[MAX_CHARS + 1];
};
 
Metoda MakeEmpty() powinna wyglądać następująco:
 
 
void StrType::MakeEmpty()

{
letters[0] = '\0';
}
 
Ogólnie metoda  GetStringFile powinna działać tak:
 
GetStringFile(Boolean skip, InType charsAllowed, ifstream& inFile)
 
switch (charsAllowed)
case ALPHA_NUM : GetAlphaNum(skip, letters)
case ALPHA : GetAlpha(skip, letters)
case NON_WHITE : GetNonWhite(skip, letters)
case NOT_NEW : GetTilNew(skip, letters)
 
 
 
We can use the functions available in <cctype> to control our reading in each of the
functions. If charsAllowed is ALPHA_NUM, we skip characters until the function isalnum
returns true, and store them until isalnum returns false or inFile goes into the fail state. If
charsAllowed is ALPHA, we skip characters until the function isalpha returns true, and
store them until isalpha returns false or inFile goes into the fail state. If charsAllowed
is NON_WHITE, we skip characters until the function isspace returns false, and store them
until isspace returns true or inFile goes into the fail state. If charsAllowed is
NOT_NEW, we skip characters until the character is not '\n', and store them until the character
is '\n' or inFile goes into the fail state.
 
 
 
Funkcje GetAlphaNum oraz GetTilNew przedstawione są poniżej:
 
#include <cctype>

void GetAlphaNum(bool skip, char letters[], std::ifstream& inFile);

void GetAlpha(bool skip, char letters[], std::ifstream& inFile);

void GetNonWhite(bool skip, char letters[], std::ifstream& inFile);

void GetTilNew(bool skip, char letters[], std::ifstream& inFile);

 
 
void StrType::GetStringFile(bool skip, InType charsAllowed,std::ifstream& inFile)
{
 switch (charsAllowed)
 {
case ALPHA_NUM : GetAlphaNum(skip, letters, inFile);
       break;
case ALPHA : GetAlpha(skip, letters, inFile);
          break;
case NON_WHITE : GetNonWhite(skip, letters, inFile);
     break;
case NOT_NEW : GetTilNew(skip, letters, inFile);
  break;
 }
}
 
 
void GetAlphaNum(bool skip, char letters[], std::ifstream& inFile)

{
  using namespace std;
  char letter;
  int count = 0;
  if (skip)
  {
    inFile.get(letter);
    while (!isalnum(letter) && inFile)
    inFile.get(letter);
  }
 else
   inFile.get(letter);
 if (!inFile || !isalnum(letter))

    letters[0] = '\0';
 else
 {
   do
    {
      letters[count] = letter;
      count++;
      inFile.get(letter);
    } while (isalnum(letter) && inFile && (count < MAX_CHARS));
   letters[count] = '\0';

  if (count == MAX_CHARS && isalnum(letter))
  do
   {
     inFile.get(letter);
    } while (isalnum(letter) && inFile);
  }
}
 
 
void GetTilNew(bool skip, char letters[], std::ifstream& inFile)

{
using namespace std;
char letter;
int count = 0;
if (skip)
 {
  inFile.get(letter);
  while ((letter == '\n') &&inFile)
  inFile.get(letter);
}
 else
   inFile.get(letter);
if (!inFile || letter == '\n')
  letters[0] = '\0';
else
 {
 do
  {
    letters[count] = letter;
    count++;
    inFile.get(letter);
  } while ((letter != '\n') && inFile && (count < MAX_CHARS));
 letters[count] = '\0';

 if (count == MAX_CHARS && letter != '\n')
  do
    {
      inFile.get(letter);
    } while ((letter != '\n') && inFile);
  }
}
 
 
 
 
 
Funkcja GetString prawie identyczna jak GetStringFile.
 
 
void StrType::PrintToScreen(bool newLine)

{
using namespace std;
if (newLine)
  cout << endl;
 cout << letters;
}
 
 
PrintToFile prawie identyczna jak  PrintToScreen,.
 
 
#include <cstring>
void StrType::CopyString(StrType& newString)

{
std::strcpy(newString.letters, letters);
}
 
int StrType::LengthIs()

{
return std::strlen(letters);
}
 
 
Program testowy:
 
 
 
#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <cstring>
#include "StrType.h"
 
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
 numCommands++;
 cout << " Command number " << numCommands << " completed."<< endl;
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
 
Zbiór wejściowy:
 
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
