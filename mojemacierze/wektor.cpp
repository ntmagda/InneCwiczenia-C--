# include <iostream>
# include "wektor.h"

// konstruktor domyslny

	Wektor::Wektor()
	{
		rozmiar=2;
		tab = new int[rozmiar]; 
		for ( int i=0; i < rozmiar; i++)
		{
			tab[i]=0;
		}
	}	

// destruktor
	Wektor::~Wektor()
	{
		delete [] tab;
	}

//konstruktor kopiujacy
	Wektor::Wektor(const Wektor &k)
	{
		rozmiar=k.rozmiar;
		for ( int i=0; i<rozmiar; i++)
		{
			tab[i]=k.tab[i];
		} 
	}

// konstruktor tworzacy wektor o k wymiarze z samymi zerami (3)


	Wektor::Wektor(int k) : rozmiar(k) // zastosowanie listy inicjalizacyjnej
	{
		tab = new int[k];
		for ( int i=0; i < rozmiar; i++)
		{
			tab[i]=0;
		}
	} 

	Wektor Wektor::operator+(const Wektor & a)
	{
		Wektor wynik(rozmiar); // tworze za pomoca konstruktora nr 3 wektor do ktorego wpisze wynik
			for ( int i = 0; i <rozmiar; i++)
			{
				wynik.tab[i]=tab[i]+a.tab[i];
			}
		return wynik;
	}
		

	Wektor Wektor::operator-(const Wektor & a)
	{
		Wektor wynik(rozmiar); // tworze za pomoca konstruktora nr 3 wektor do ktorego wpisze wynik
			for ( int i = 0; i <rozmiar; i++)
			{
				wynik.tab[i]=tab[i]-a.tab[i];
			}
		return wynik;
	}


		Wektor Wektor::operator*(const Wektor & a)
	{
		Wektor wynik(rozmiar); // tworze za pomoca konstruktora nr 3 wektor do ktorego wpisze wynik
			for ( int i = 0; i <rozmiar; i++)
			{
				wynik.tab[i]=tab[i]*a.tab[i];
			}
		return wynik;
	}


	Wektor& Wektor::operator+=(const Wektor & a)
	{
		if(rozmiar!=a.rozmiar) cerr << " Bład,rozmiary wektorow nie są jednakowe ";
		else
		{
			for (int i =0; i <rozmiar; i++)
			{
				tab[i]+=a.tab[i];
			}
		}
		return (*this);

	}

	Wektor& Wektor::operator-=(const Wektor & a)
	{
		if(rozmiar!=a.rozmiar) cerr << " Bład, rozmiary wektorow nie są jednakowe";
		else
		{
			for (int i =0; i <rozmiar; i++)
			{
				tab[i]-=a.tab[i];
			}
		}
		return (*this);

	}	

	Wektor& Wektor::operator*=(const Wektor & a)
	{
		if(rozmiar!=a.rozmiar) cerr << " Bład, rozmiary wektorow nie są jednakowe ";
		else
		{
			for (int i =0; i <rozmiar; i++)
			{
				tab[i]*=a.tab[i];
			}
		}
		return (*this);

	}

	Wektor& Wektor::operator*=(int a)
	{
		for ( int i=0; i <rozmiar;i++)
		{
			tab[i]=a*tab[i];
		}
		return *this;
	}


	bool Wektor::operator!=(const Wektor & a)
	{
		for (int i=0;i <rozmiar;i++)
		{
			if(tab[i]!=a.tab[i]) return true;
		}
	return false;
		
	}

	bool Wektor::operator==(const Wektor & a)
	{

		for( int i=0; i <rozmiar;i++)
		{
			if(tab[i]!=a.tab[i]) return false;
		}
	return true;
	}


	Wektor& Wektor::operator=(const Wektor & a)
	{
		if(rozmiar!=a.rozmiar) cerr << "Bład, rozne rozmiary ";
		else if( &a==this) return *this;
		else
		{
			for ( int i=0; i <rozmiar; i++)
			{
				tab[i]=a.tab[i];
			}
		return *this;
		}
	}

	int & Wektor::operator[](int i)
	{
		if(i<0 || i >rozmiar) cerr << "Blad";
		else return tab[i];

	}

	ostream & operator<<(ostream &a, const  Wektor & b)
	{
		for ( int i =0; i <b.rozmiar ; i++)
		{
			a << b.tab[i];
			
		}
		a << " ";
	return a;


	}
	istream & operator>>(istream &a, const Wektor & b)
	{
		for ( int i =0; i <b.rozmiar ; i++)
		{
			cout<<"komorka wektora numer "<<i+1<<" := ";
			a>>b.tab[i];
		}
	return a;

	}

