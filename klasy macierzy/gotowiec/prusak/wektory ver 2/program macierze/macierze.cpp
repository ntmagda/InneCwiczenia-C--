#include <iostream>
#include <iomanip>

using namespace std;

#include "macierze.h"
#include "wektory.h"
		
	matrix::matrix(){
		int i,j;
		liczba_wektorow = 2;
		wymiar_wektorow = 2;
		wsk = new wektor* [liczba_wektorow];
		for(i=0;i<2;i++){
			wsk[i] = new wektor();	
		}
	}
	
	matrix::matrix(int wiersze, int kolumny){
		int i;
		liczba_wektorow = wiersze;
		wymiar_wektorow = kolumny;
		wsk = new wektor* [liczba_wektorow];
		for(i=0;i<liczba_wektorow;i++){
			wsk[i] = new wektor(wymiar_wektorow);
		}
	}
	
	matrix::matrix(int wiersze, int kolumny, int wartosc_domyslna){
		int i;
		liczba_wektorow = wiersze;
		wymiar_wektorow = kolumny;
		wsk = new wektor* [liczba_wektorow];
		for(i=0;i<liczba_wektorow;i++){
			wsk[i] = new wektor(wymiar_wektorow, wartosc_domyslna);
		}
	}
	
	matrix & 	matrix::operator=(const matrix & m){
		int i;
		for(i=0;i<liczba_wektorow;i++) *(wsk[i]) = *(m.wsk[i]);
	
	}
	
	matrix matrix::operator+(const matrix& m){
		matrix result(liczba_wektorow,wymiar_wektorow);
		int i;
		for(i=0;i<liczba_wektorow;i++) *(result.wsk[i]) = *(wsk[i]) + *(m.wsk[i]);
		return result;
	}
	
	matrix matrix::operator-(const matrix& m){
		matrix result(liczba_wektorow,wymiar_wektorow);
		int i;
		for(i=0;i<liczba_wektorow;i++) *(result.wsk[i]) = *(wsk[i]) - *(m.wsk[i]);
		return result;
	}
	
	matrix matrix::operator*(const int k){
		matrix result(liczba_wektorow,wymiar_wektorow);
		int i;
		for(i=0;i<liczba_wektorow;i++) *(result.wsk[i]) = *(wsk[i]) * k;
		return result;
	}
	
	matrix matrix::operator*( matrix& m){
		matrix result(liczba_wektorow,m.wymiar_wektorow);
		int i,j,k;
		for(i=0;i<liczba_wektorow;i++){
			for(j=0;j<m.wymiar_wektorow;j++){
				for(k=0;k<wymiar_wektorow;k++){
					result[i][j] += (*this)[i][k] * m[k][j];
				}	
			}
		}
		return result;
	}
	
	bool matrix::operator==(const matrix& m){
		int i;
		for(i=0;i<liczba_wektorow;i++){
			if( *(wsk[i]) != *(m.wsk[i]) ) return 0;
		}
		return 1;
	}
	
	bool matrix::operator!=(const matrix& m){
		if(*this == m) return 0;
		else return 1;
	}
	
	matrix & matrix::operator+=(const matrix& m){
		int i;
		for(i=0;i<liczba_wektorow;i++) *(wsk[i]) += *(m.wsk[i]);
		return *this;
	}
	
	matrix & matrix::operator-=(const matrix& m){
		int i;
		for(i=0;i<liczba_wektorow;i++) *(wsk[i]) -= *(m.wsk[i]);
		return *this;
	}
	
	matrix & matrix::operator*=(const int k){
		int i;
		for(i=0;i<liczba_wektorow;i++) *(wsk[i]) *= k;
		return *this;
	}
	
	wektor & matrix::operator[](unsigned int wiersz){
		return *(wsk[wiersz]);
	}
	
	ostream & operator<<(ostream &wyjscie,const matrix& m){
		int i;
		for(i=0;i<m.liczba_wektorow;i++){
			wyjscie<<*(m.wsk[i]);
			if(i!=(m.liczba_wektorow - 1)) wyjscie<<endl;
		}
		return wyjscie;
	}

	istream & operator>>(istream &wejscie, matrix& m){
		int i;
		for(i=0;i<m.liczba_wektorow;i++){
			cout<<"wiersz"<<i+1<<":"<<endl;
			wejscie>>*(m.wsk[i]);
		}
		return wejscie;
	}

	matrix operator*(const int k, const matrix& m){
		matrix result(m.liczba_wektorow,m.wymiar_wektorow);
		int i;
		for(i=0;i<m.liczba_wektorow;i++) *(result.wsk[i]) = *(m.wsk[i]) * k;
		return result;
	}
