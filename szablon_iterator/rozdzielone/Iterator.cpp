# include <iostream>
# include "Iterator.h"
using namespace std;


	template <typename T>
	Iterator<T>::Iterator()   // konstruktor domyslny
	{
		Wektor <T> nowy;
		obiekt = nowy; // tworzymy obiekt;
		ptr = obiekt.tab;

	}

	template <typename T>
	Iterator<T>::Iterator(Wektor <T> & a)	// z parametrem;
	{	
		obiekt = a;
		ptr = a.tab;


	}
	template <typename T>
	void Iterator<T>::show(int i) // pokazuje obiekt Wektor [i]
	{
		if (i >0 && i < obiekt.rozmiar)
		cout << obiekt.tab[i] << endl;
		else cout << " Bład, Taki obiekt nie istnieje " << endl;
	}

	template <typename T>  // zmienia jakis obiekt obiekt
	void Iterator<T>::change(int i) // musi byc wywolany na rzecz jakeigos wektora
	{
	
		(obiekt.tab[i]).change();
		
	}

	template <typename T>
	T * Iterator<T>::skok(int i) // zwraca wskaznik na obiekt Wektor[i]
	{

		ptr = &(obiekt.tab[i]);
		return ptr;
		
	}

	template <typename T>
	T & Iterator<T>::operator++()// zwraca obiekt 
	{
		if( ptr+1 < &obiekt.tab[obiekt.rozmiar])
		{	
			ptr = ptr+1;
			return *ptr;
		}
		else cout << " Dalej sie nie da" << endl;
	}

	template <typename T>
	T & Iterator<T>::operator--()// zwraca obiekt 
	{

		if( ptr-1 > &obiekt.tab[0])
		{	
			ptr = ptr-1;
			return *ptr;
		}
		else cout << " Dalej sie nie da" << endl;

	}
