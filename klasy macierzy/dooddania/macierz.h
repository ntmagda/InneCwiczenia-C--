#ifndef MACIERZ
#define MACIERZ

using namespace std;

#include "wektory.h"

class macierz {
	private:
   	int liczba_wektorow;
	int wymiar_wektorow;
	wektor **wsk;
	
	public:		
	macierz();	
	macierz(int wiersze, int kolumny);	
	macierz(int wiersze, int kolumny, int wartosc_domyslna);	
	macierz & operator=(const macierz & m);	
	macierz operator+(const macierz& m);	
	macierz operator-(const macierz& m);	
	macierz operator*(const int k);	
	macierz operator*(macierz& m);	
	bool operator==(const macierz& m);	
	bool operator!=(const macierz& m);	
	macierz & operator+=(const macierz& m);	
	macierz & operator-=(const macierz& m);	
	macierz & operator*=(const int k);	
	friend ostream & operator<<(ostream &wyjscie,const macierz& m);	
	friend istream & operator>>(istream &wejscie, macierz& m);	
	wektor & operator[](unsigned int wiersz);	
};

#endif

