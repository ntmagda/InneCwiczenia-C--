#include <iostream>
#include <iomanip>

using namespace std;

#include "macierz.h"
#include "wektory.h"
		
	macierz::macierz(){ /*konstruktor1*/
		int i,j;
		liczba_wektorow = 2;
		wymiar_wektorow = 2;
		wsk = new wektor* [liczba_wektorow];
		for(i=0;i<2;i++){
			wsk[i] = new wektor();	
		}
	}
	
	macierz::macierz(int wiersze, int kolumny){ /*konstruktor2*/
		int i;
		liczba_wektorow = wiersze;
		wymiar_wektorow = kolumny;
		wsk = new wektor* [liczba_wektorow];
		for(i=0;i<liczba_wektorow;i++){
			wsk[i] = new wektor(wymiar_wektorow);
		}
	}
	
	
	macierz & 	macierz::operator=(const macierz & m){ /*operator =*/
		int i;
		for(i=0;i<liczba_wektorow;i++) *(wsk[i]) = *(m.wsk[i]);
	
	}
	
	macierz macierz::operator+(const macierz& m){ /*operator +*/
		macierz wynik(liczba_wektorow,wymiar_wektorow);
		int i;
		for(i=0;i<liczba_wektorow;i++) *(wynik.wsk[i]) = *(wsk[i]) + *(m.wsk[i]);
		return wynik;
	}
	
	macierz macierz::operator-(const macierz& m){/*operator -*/
		macierz wynik(liczba_wektorow,wymiar_wektorow);
		int i;
		for(i=0;i<liczba_wektorow;i++) *(wynik.wsk[i]) = *(wsk[i]) - *(m.wsk[i]);
		return wynik;
	}
	
	macierz macierz::operator*(const int k){/*operator *liczba*/
		macierz wynik(liczba_wektorow,wymiar_wektorow);
		int i;
		for(i=0;i<liczba_wektorow;i++) *(wynik.wsk[i]) = *(wsk[i]) * k;
		return wynik;
	}
	
	macierz macierz::operator*( macierz& m){/*operator * macierz*/
		macierz wynik(liczba_wektorow,m.wymiar_wektorow);
		int i,j,k;
		for(i=0;i<liczba_wektorow;i++){
			for(j=0;j<m.wymiar_wektorow;j++){
				for(k=0;k<wymiar_wektorow;k++){
					wynik[i][j] += (*this)[i][k] * m[k][j];
				}	
			}
		}
		return wynik;
	}
	
	bool macierz::operator==(const macierz& m){/*operator ==*/
		int i;
		for(i=0;i<liczba_wektorow;i++){
			if( *(wsk[i]) != *(m.wsk[i]) ) return 0;
		}
		return 1;
	}
	
	bool macierz::operator!=(const macierz& m){/*operator !=*/
		if(*this == m) return 0;
		else return 1;
	}
	
	macierz & macierz::operator+=(const macierz& m){ /*operator +=*/
		int i;
		for(i=0;i<liczba_wektorow;i++) *(wsk[i]) += *(m.wsk[i]);
		return *this;
	}
	
	macierz & macierz::operator-=(const macierz& m){ /*operator -=*/
		int i;
		for(i=0;i<liczba_wektorow;i++) *(wsk[i]) -= *(m.wsk[i]);
		return *this;
	}
	
	macierz & macierz::operator*=(const int k){/*operator *=*/
		int i;
		for(i=0;i<liczba_wektorow;i++) *(wsk[i]) *= k;
		return *this;
	}
	
	wektor & macierz::operator[](unsigned int wiersz){ /*operator []*/
		return *(wsk[wiersz]);
	}
	
	ostream & operator<<(ostream &wyjscie,const macierz& m){ /*operator <<*/
		int i;
		for(i=0;i<m.liczba_wektorow;i++){
			wyjscie<<*(m.wsk[i]);
			if(i!=(m.liczba_wektorow - 1)) wyjscie<<endl;
		}
		return wyjscie;
	}

	istream & operator>>(istream &wejscie, macierz& m){ /*operator >>*/
		int i;
		for(i=0;i<m.liczba_wektorow;i++){
			cout<<"wiersz"<<i+1<<":"<<endl;
			wejscie>>*(m.wsk[i]);
		}
		return wejscie;
	}
