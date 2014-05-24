# include <iostream>
# include <cstring>
# include "Wektorsz.h"
# include "Zabawka.h"


// konstruktor domyslny
	template <typename T>
	Wektor<T>::Wektor()
	{
		rozmiar=2;
		tab = new T[rozmiar]; 
		for ( int i=0; i < rozmiar; i++)
		{
			tab[i]= new T(); // wywolanie konstruktora domyslnego
		}
	}	

// destruktor
	template <typename T>
	Wektor<T>::~Wektor()
	{
		delete [] tab;
	}

//konstruktor kopiujacy
	template <typename T>
	Wektor<T>::Wektor(const Wektor &k)
	{
		rozmiar=k.rozmiar;
		for ( int i=0; i<rozmiar; i++)
		{
			tab[i]=k.tab[i];
		} 
	}

// konstruktor tworzacy wektor o k wymiarze z samymi zerami (3)

	template <typename T>
	Wektor<T>::Wektor(int k) : rozmiar(k) // zastosowanie listy inicjalizacyjnej
	{
		tab = new T[k];
		for ( int i=0; i < rozmiar; i++)
		{
			tab[i]= new T(); // wywolanie konstruktora domyslnego dla obiektu T
		}
	} 
	template <typename T>
	bool Wektor<T>::operator!=(const Wektor & a)
	{
		for (int i=0;i <rozmiar;i++)
		{
			if(tab[i]!=a.tab[i]) return true;
		}
	return false;
		
	}
	template <typename T>
	bool Wektor<T>::operator==(const Wektor & a)
	{

		for( int i=0; i <rozmiar;i++)
		{
			if(tab[i]!=a.tab[i]) return false;
		}
	return true;
	}

	template <typename T>
	Wektor<T> & Wektor<T>::operator=(const Wektor & a)
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
	template <typename T>
	int & Wektor<T>::operator[](int i)
	{
		if(i<0 || i >rozmiar) cerr << "Blad";
		else return tab[i];

	}
	
	template <typename T>
	ostream & operator<<(ostream &a, const  Wektor<T> & b)
	{
		for ( int i =0; i <b.rozmiar ; i++)
		{
			a << b.tab[i];
			
		}
		a << " ";
	return a;


	}
	template <typename T>
	istream & operator>>(istream &a, const Wektor<T> & b)
	{
		for ( int i =0; i <b.rozmiar ; i++)
		{
			cout<<"rekord "<<i+1<<" := ";
			a>>b.tab[i];
		}
	return a;

	}


	template <typename T>
	void Wektor<T>::wstaw(T obiekt, int i) // jaki typ zwracanej funkcji, czy void moze byc, czy zwracac przez & Wektor?
	{
		T * temp=new T[rozmiar+1]; // tworze tablice wieksza o 1 zeby zmiescil sie obiekt dodany
			for ( int j=0; j <i ; j++)
			{
				temp[j]=tab[j]; // przepisuje wszystko az do napotkania Wektor[i]; 
			}	
		temp[i]= obiekt;
			for ( int j=i+1; j<rozmiar+1; j++)
			{	
				temp[j]=tab[j-1];
			}	
		*tab = *temp;
		
	}

	template <typename T>
	void Wektor<T>::usun(int i)
	{

		T *temp = new T[rozmiar-1]; // tworze tablice o 1 mniejsza bo - jeden element
			for(int j=0; j<i; j++)
			{
				temp[j]=tab[j];

			}
			for ( int j=i; j <rozmiar-1; j++)
			{
				temp[j]= tab[j+1];
			}
	*tab=*temp; // przypisuje adres starej tablicy nowej tablicy


	}
	template <typename T>
	void Wektor<T>::powieksz(int k)
	{
		T * temp = new T[rozmiar+k];
			for( int i=0; i < rozmiar; i++)
			{
				temp[i]=tab[i]; // przepisanie juz istniejacych elemetow do tablicy tymczasowej
			}
		*tab=*temp; // przypisanie adresu

	}
	
	template <typename T>
	void Wektor<T>::usun_all()
	{

		T * temp=new T[0];

	*tab=*temp; // przypisanie adresu;	


	}

	template <typename T>
	int Wektor<T>::wielkosc()
	{
		return rozmiar;

	}




