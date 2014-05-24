# include <iostream>
# include "macierz.h"
using namespace std;


	Macierz:: Macierz() // konstruktor domyslny
	{
		liczba_wek=2;
		wymiar_wek=2;
		mat=new Wektor* [liczba_wek]; // powstaje tablica jendowymiarowa ktora bedzie zawierac wektory
		for ( int i=0; i <liczba_wek; i++)
		{
			*(mat[i])= Wektor(); // wywolanie domyslnego
		}
	}

	Macierz::~Macierz() // nie jestem pewna tego destruktora
	{
		for ( int j=0; j < liczba_wek; j++)
		{
			for ( int i=0; i< wymiar_wek; i++)
			{	
				(mat[j][i]).~Wektor();
			} 

		delete mat[j];
		}


	}

	Macierz::Macierz(const Macierz & k)
	{
		liczba_wek=k.liczba_wek;
		wymiar_wek=k.wymiar_wek;
		mat = new Wektor* [liczba_wek];
		for ( int i=0; i < liczba_wek; i++)
		{
			Wektor(*(k.mat[i])); // wywolanie konstruktora kopiujacego Wektor
		}
	}




	Macierz::Macierz(int r, int c)
	{
		liczba_wek=r;
		wymiar_wek=c;
		mat = new Wektor* [liczba_wek];
		for ( int i =0; i < liczba_wek; i++)
		{
			*(mat[i])=Wektor(wymiar_wek); // ?	
		}
	
	}

	Macierz Macierz::operator+(const Macierz & a) // zwykle dodawanie macierzy
	{

		Macierz wynik(liczba_wek, wymiar_wek);
		for ( int i=0; i < liczba_wek; i++)
		{
			*(wynik.mat[i])=*(mat[i])+*(a.mat[i]);
			

		}
	return wynik;

	} 

	Macierz Macierz::operator-(const Macierz & a) // zwykle odejmowanie macierzy
	{

		Macierz wynik(liczba_wek, wymiar_wek);
		for ( int i=0; i < liczba_wek; i++)
		{
			*(wynik.mat[i])=*(mat[i])-*(a.mat[i]);
			

		}
	return wynik;

	} 

	Macierz Macierz::operator*(int a) // zwykle mnozenie macierzy przez liczbe
	{

		Macierz wynik(liczba_wek, wymiar_wek);
		for ( int i=0; i < liczba_wek; i++)
		{
			*(wynik.mat[i])=*(mat[i])*a;
			

		}
	return wynik;

	} 


	
	Macierz & Macierz::operator+=(const Macierz & a) // dodawanie macierzy z modyfikacja
	{

		for ( int i=0; i < liczba_wek; i++)
		{
			*(mat[i])=*(mat[i])+*(a.mat[i]);
			

		}
	return *this;

	} 

	Macierz & Macierz::operator-=(const Macierz & a) // zwykle odejmowanie macierzy
	{

		Macierz wynik(liczba_wek, wymiar_wek);
		for ( int i=0; i < liczba_wek; i++)
		{
			*(mat[i])=*(mat[i])-*(a.mat[i]);
			

		}
	return *this;

	} 

	Macierz & Macierz::operator*=(int a) // zwykle mnozenie macierzy przez liczbe
	{

		Macierz wynik(liczba_wek, wymiar_wek);
		for ( int i=0; i < liczba_wek; i++)
		{
			*(mat[i])=*(mat[i])*a;
			

		}
	return *this;

	} 

	bool Macierz::operator!=(const Macierz & a) // czy rozne
	{
		for ( int i=0; i < liczba_wek; i++)
		{
			if( *(a.mat[i])!=*(mat[i])) return true;
		}
	return false;

	}
	
	bool Macierz::operator==(const Macierz & a) // czy takie samo
	{
		for ( int i=0; i < liczba_wek; i++)
		{
			if( *(a.mat[i])!=*(mat[i])) return false;
		}
	return true;

	}


	Macierz& Macierz::operator=(const Macierz & a)
	{
		if ( liczba_wek!= a.liczba_wek || wymiar_wek!=a.wymiar_wek) cerr << " Błąd, niezgodnosc w rozmiarach ";
		else if ( &a==this) cerr << "To ten sam obiekt";
		else
		{
			for(int i=0;i<liczba_wek;i++) *(mat[i]) = *(a.mat[i]);	
		}
	

	}

	Wektor & Macierz::operator[](int m) // wyswietla wiersz
	{
		
		return *(mat[m]);	
	}
	

	ostream & operator<< ( ostream & a, const  Macierz & b)
	{
		for(int i=0; i<b.liczba_wek; i++)
		{
			a<< *(b.mat[i]);
			if(i!=(b.liczba_wek - 1)) a<<endl;
		}
		return a;		
	}

	istream & operator>> ( istream & a, const  Macierz & b)
	{
		for(int i=0; i<b.liczba_wek; i++)
		{
			cout << " Wiersz numer" << i+1 << endl;
			a>> *(b.mat[i]);
		}
		return a;		
	}


//mnozenie macierzy

	Macierz Macierz::operator*( const Macierz& a)
	{
		Macierz wynik(liczba_wek,a.wymiar_wek);
		int i,j,k;
		for(i=0;i<liczba_wek;i++)
		{
			for(j=0;j<a.wymiar_wek;j++)
			{
				for(k=0;k<wymiar_wek;k++)
				{
					wynik[i][j] += (*this)[i][k] * a[k][j];
				}	
			}
		}
	return wynik;
	}










