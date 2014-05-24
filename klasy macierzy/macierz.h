#ifndef MACIERZ
#define MACIERZ

using namespace std;

#include "wektory.h"

class matrix {
	int liczba_wektorow;
	int wymiar_wektorow;
	wektor **wsk;
	
	public:		
	matrix();	
	matrix(int wiersze, int kolumny);	
	matrix(int wiersze, int kolumny, int wartosc_domyslna);	
	matrix & operator=(const matrix & m);	
	matrix operator+(const matrix& m);	
	matrix operator-(const matrix& m);	
	matrix operator*(const int k);	
	matrix operator*(matrix& m);	
	bool operator==(const matrix& m);	
	bool operator!=(const matrix& m);	
	matrix & operator+=(const matrix& m);	
	matrix & operator-=(const matrix& m);	
	matrix & operator*=(const int k);	
	friend ostream & operator<<(ostream &wyjscie,const matrix& m);	
	friend istream & operator>>(istream &wejscie, matrix& m);	
	friend matrix operator*(const int k, const matrix& m);	
	wektor & operator[](unsigned int wiersz);	
};

#endif
s
