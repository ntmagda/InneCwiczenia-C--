# include <iostream>
# include <cstring>
# include <fstream>
# include "Zabawka.h"
# include "Iterator.h"
using namespace std;
static int czy_dalej;
static int k;
static int p;

// konstruktor domyslny
	template <typename T>
	Wektor<T>::Wektor()
	{
		rozmiar=2;
		tab = new T[rozmiar]; 
		
	}	

// destruktor
	template <typename T>
	Wektor<T>::~Wektor()
	{
		delete [] tab;
	}

//konstruktor kopiujacy
	template <typename T>
	Wektor<T>::Wektor(const Wektor<T> &k)
	{
		rozmiar=k.rozmiar;
		for ( int i=0; i<rozmiar; i++)
		{
			tab[i]=k.tab[i];
		} 
	}

// konstruktor tworzacy wektor o k wymiarze 

	template <typename T>
	Wektor<T>::Wektor(int k) : rozmiar(k) // zastosowanie listy inicjalizacyjnej
	{
		tab = new T[k];
		
	} 
	template <typename T>
	bool Wektor<T>::operator!=(const Wektor<T> & a)
	{
		for (int i=0;i <rozmiar;i++)
		{
			if(tab[i]!=a.tab[i]) return true;
		}
	return false;
		
	}
	template <typename T>
	bool Wektor<T>::operator==(const Wektor<T> & a)
	{

		for( int i=0; i <rozmiar;i++)
		{
			if(tab[i]!=a.tab[i]) return false;
		}
	return true;
	}

	template <typename T>
	Wektor<T> & Wektor<T>::operator=(const Wektor<T> & a)
	{
		

		if( &a==this) return *this;
		else if(rozmiar==a.rozmiar)
		{	
			for ( int i=0; i <rozmiar; i++)
			{
				tab[i]=a.tab[i];
			}
		return *this;
		}
		else if(rozmiar!=a.rozmiar)
		{
			if(rozmiar>a.rozmiar)
			{
				for ( int i=0; i <a.rozmiar; i++)
				{
					tab[i]=a.tab[i];
				}

			}
			else if(rozmiar<a.rozmiar)
			{

			rozmiar=a.rozmiar;
			tab=a.tab;
			

			}

		}
	/////////////////////////////////////////////////////////////////////////////////////////	
		
	}
	template <typename T>
	T & Wektor<T>::operator[](int i)
	{
		if(i<0 || i >rozmiar) cerr << "Blad";
		else return tab[i];

	}
	
	template <typename T>
	ostream & operator<<(ostream &a, const  Wektor<T> & b)
	{
		for ( int i =0; i <b.rozmiar ; i++)
		{	
			a << "Rekord numer " << i+1 << ": " ;
			a << b.tab[i];
			a<<endl;
		}
		a << " ";
	return a;


	}
	template <typename T>
	istream & operator>>(istream &a, const Wektor<T> & b)
	{
		int i;
			do{
				cout << "Czy chcesz dodac nowy rekord do bazy ? < Tak - wpisz 1, Nie - wpisz 0" <<endl;
				cin >> i;
				p=i;
				cin.get();
				if( i!=1) break;
				if(k >=b.rozmiar) break;
				a>>b.tab[k];	
				k++;
			}while(i==1 && k <b.rozmiar);
		

		return a;

	}


	template <typename T>
	void Wektor<T>::wstaw(T obiekt, int i) // jaki typ zwracanej funkcji, czy void moze byc, czy zwracac przez & Wektor?
	{
		rozmiar=rozmiar+1;
		T * temp=new T[rozmiar]; // tworze tablice wieksza o 1 zeby zmiescil sie obiekt dodany
			for ( int j=0; j <i ; j++)
			{
				temp[j]=tab[j]; // przepisuje wszystko az do napotkania Wektor[i]; 
			}	
		temp[i]= obiekt;
			for ( int j=i+1; j<rozmiar; j++)
			{	
				temp[j]=tab[j-1];
			}	
		tab = temp;
		
	}

	template <typename T>
	void Wektor<T>::usun(int i)
	{
		rozmiar=rozmiar-1;
		T *temp = new T[rozmiar]; // tworze tablice o 1 mniejsza bo - jeden element
			for(int j=0; j<i; j++)
			{
				temp[j]=tab[j];

			}
			for ( int j=i; j <rozmiar; j++)
			{
				temp[j]= tab[j+1];
			}
	tab=temp; // przypisuje adres starej tablicy nowej tablicy


	}
	template <typename T>
	void Wektor<T>::powieksz(int k)
	{
		rozmiar+=k;
		T * temp = new T[rozmiar];
			for( int i=0; i < rozmiar-k; i++)
			{
				temp[i]=tab[i]; // przepisanie juz istniejacych elemetow do tablicy tymczasowej
			}
		tab=temp; // przypisanie adresu

	}
	
	template <typename T>
	void Wektor<T>::usun_all()
	{
		Wektor<T>baza_danych(rozmiar);
		*this = baza_danych;
	
	}

	template <typename T>
	int Wektor<T>::wielkosc()
	{
		return rozmiar;

	}



	template <typename T>
	void Wektor<T>::wczytaj_f ()
	{
		using namespace std;

		cout << " Prosze podac nazwe pliku z kotrgo zczytujemy " << endl;
		char plik[20];
		cin>> plik;
		fstream fin; // obiekt do zczytywania
		fin.open(plik, ios::in); //otwarcie pliku
		if(fin.good())
		{
			while(!fin.eof())
			{
			fin >> *this;

			}	

		fin.close();
		}
		else cout << " nie uzyskalismy dostepu do pliku " << endl;

	}
	




/////////////////////////////////////////////////////////MAIN/////////////////////////////////////////////////////////////



	
