#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <cstring>


const int MAX_CHARS = 100;
enum InType {ALPHA_NUM, ALPHA, NON_WHITE, NOT_NEW};
class StrType
{
  public:

 void MakeEmpty();
 void GetString(bool skip, InType charsAllowed);
 void GetStringFile(bool skip, InType charsAllowed,std::ifstream& inFile);
 void PrintToScreen(bool newLine);
 void PrintToFile(bool newLine, std::ofstream& outFile);
 int LengthIs();
 void CopyString(StrType& newString);
  private:
    char letters[MAX_CHARS + 1];
}; 


  
void GetAlphaNum1(bool skip, char letters[]);

void GetAlpha1(bool skip, char letters[]);

void GetNonWhite1(bool skip, char letters[]);

void GetTilNew1(bool skip, char letters[]);
 
void GetAlphaNum(bool skip, char letters[], std::ifstream& inFile);

void GetAlpha(bool skip, char letters[], std::ifstream& inFile);

void GetNonWhite(bool skip, char letters[], std::ifstream& inFile);

void GetTilNew(bool skip, char letters[], std::ifstream& inFile);
