#include <fstream>
#include <iostream>
#include <cctype>
#include <cstring>
#include "infa2.h"

void StrType::GetString(bool skip, InType charsAllowed){

	switch (charsAllowed){
		using namespace std;

		case ALPHA_NUM : GetAlphaNum1(skip, letters);
		break;
		case ALPHA : GetAlpha1(skip, letters);
		break;
		case NON_WHITE : GetNonWhite1(skip, letters);
		break;
		case NOT_NEW : GetTilNew1(skip, letters);
		break;
}
}
void GetAlphaNum1(bool skip, char letters[]){
  using namespace std;
  char letter;
  int count = 0;
  if (skip)
  {
    cin.get(letter);
    while (!isalnum(letter) && cin)
    cin.get(letter);
  }
 else
   cin.get(letter);
 if (!cin || !isalnum(letter))

    letters[0] = '\0';
 else
 {
   do
    {
      letters[count] = letter;
      count++;
      cin.get(letter);
    } while (isalnum(letter) && cin && (count < MAX_CHARS));
   letters[count] = '\0';

  if (count == MAX_CHARS && isalnum(letter))
  do
   {
     cin.get(letter);
    } while (isalnum(letter) && cin);
  }
}
 



void GetAlpha1(bool skip, char letters[]){
  using namespace std;
  char letter;
  int count = 0;
  if (skip)
  {
    cin.get(letter);
    while (!isalpha(letter) && cin)
    cin.get(letter);
  }
 else
   cin.get(letter);
 if (!cin || !isalpha(letter))

    letters[0] = '\0';
 else
 {
   do
    {
      letters[count] = letter;
      count++;
      cin.get(letter);
    } while (isalpha(letter) && cin && (count < MAX_CHARS));
   letters[count] = '\0';

  if (count == MAX_CHARS && isalpha(letter))
  do
   {
     cin.get(letter);
    } while (isalpha(letter) && cin);
  }

}



void GetNonWhite1(bool skip, char letters[]){
  using namespace std;
  char letter;
  int count = 0;
  if (skip)
  {
    cin.get(letter);
    while (isblank(letter) && cin)
    cin.get(letter);
  }
 else
   cin.get(letter);
 if (!cin || isblank(letter))

    letters[0] = '\0';
 else
 {
   do
    {
      letters[count] = letter;
      count++;
      cin.get(letter);
    } while (!isblank(letter) && cin && (count < MAX_CHARS));
   letters[count] = '\0';

  if (count == MAX_CHARS && !isblank(letter))
  do
   {
     cin.get(letter);
    } while (!isblank(letter) && cin);
  }

}




 
void GetTilNew1(bool skip, char letters[])

{
using namespace std;
char letter;
int count = 0;
if (skip)
 {
  cin.get(letter);
  while ((letter == '\n') &&cin)
  cin.get(letter);
}
 else
   cin.get(letter);
if (!cin || letter == '\n')
  letters[0] = '\0';
else
 {
 do
  {
    letters[count] = letter;
    count++;
    cin.get(letter);
  } while ((letter != '\n') && cin && (count < MAX_CHARS));
 letters[count] = '\0';

 if (count == MAX_CHARS && letter != '\n')
  do
    {
      cin.get(letter);
    } while ((letter != '\n') && cin);
  }
}



 
void StrType::MakeEmpty()

{
letters[0] = '\0';
}


 
 
void StrType::GetStringFile(bool skip, InType charsAllowed,std::ifstream& inFile)
{
	switch (charsAllowed){
		using namespace std;
		
		if(!inFile.is_open())
		{
		case ALPHA_NUM : GetAlphaNum(skip, letters, inFile);
		break;
		case ALPHA : GetAlpha(skip, letters, inFile);
		break;
		case NON_WHITE : GetNonWhite(skip, letters,inFile);
		break;
		case NOT_NEW : GetTilNew(skip, letters,inFile);
		break;
		}
		else cout << " nie udalo sie otworzyc pliku " << endl;
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
 



void GetAlpha(bool skip, char letters[], std::ifstream& inFile){
  using namespace std;
  char letter;
  int count = 0;
  if (skip)
  {
    inFile.get(letter);
    while (!isalpha(letter) && inFile)
    inFile.get(letter);
  }
 else
   inFile.get(letter);
 if (!inFile || !isalpha(letter))

    letters[0] = '\0';
 else
 {
   do
    {
      letters[count] = letter;
      count++;
      inFile.get(letter);
    } while (isalpha(letter) && inFile && (count < MAX_CHARS));
   letters[count] = '\0';

  if (count == MAX_CHARS && isalpha(letter))
  do
   {
     inFile.get(letter);
    } while (isalpha(letter) && inFile);
  }

}



void GetNonWhite(bool skip, char letters[], std::ifstream& inFile){
  using namespace std;
  char letter;
  int count = 0;
  if (skip)
  {
    inFile.get(letter);
    while (isblank(letter) && inFile)
    inFile.get(letter);
  }
 else
   inFile.get(letter);
 if (!inFile || isblank(letter))

    letters[0] = '\0';
 else
 {
   do
    {
      letters[count] = letter;
      count++;
      inFile.get(letter);
    } while (!isblank(letter) && inFile && (count < MAX_CHARS));
   letters[count] = '\0';

  if (count == MAX_CHARS && !isblank(letter))
  do
   {
     inFile.get(letter);
    } while (!isblank(letter) && inFile);
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
 
 
 
void StrType::PrintToScreen(bool newLine)

{
using namespace std;
if (newLine)
  cout << endl;
 cout << letters;
}
 void StrType::PrintToFile(bool newLine, std::ofstream& outFile)

{
using namespace std;
if (newLine)
  outFile << endl;
 outFile << letters;
}
 
 
 int StrType::LengthIs()

{
return std::strlen(letters);
}

void StrType::CopyString(StrType& newString)

{
std::strcpy(newString.letters, letters);
}
 

 
 

