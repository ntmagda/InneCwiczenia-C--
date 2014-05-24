# include <iostream>
using namespace std;

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
		if(i<0 || i >rozmiar) cerr << "Blad, podales nieistniejacy element";
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

