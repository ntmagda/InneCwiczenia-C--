# include <iostream>
# include <cstring>
# include "Wektorsz.h"
# include "Iterator.h"

	template <typename T>
	void Iterator<T>::show(Wektor<T> obiekt, int i) // pokazuje obiekt Wektor [i]
	{
		if (i >0 && i < obiekt.rozmiar)
		cout << obiekt[i] << endl;
		else cout << " Bład, Taki obiekt nie istnieje " << endl;
	}

	template <typename T>  // zmienia jakis obiekt obiekt
	T & Iterator<T>::change(Wektor<T> obiekt) // musi byc wywolany na rzecz jakeigos wektora
	{
	using namespace std;
		cout << " Obiekt o ktorym numerze chcesz zmienic?"<< endl;
		static int numer;
		cin >> numer;
		cout << " Ok. Bedzie zmiana obiektu o numerze " << numer << endl << endl;
		cout << " Czy chcesz zmienic nazwe sklepu ? <TAK - wcisnij 1/Nie - wcisnij 0> " << endl;
		int odp;
		if(cin >> odp)
		{
			cout << "Podaj nowa nazwe sklepu " << endl;
			string nowy;
			cin >> nowy;
			obiekt[numer].nazwa=nowy; // zmiana nazwy sklepu

		}
		cout << " Czy chcesz zmienic adres sklepu ? <TAK - wcisnij 1/ Nie wcisnij 0> " << endl;
		int odp1;
		if ( cin>> odp1)
		{
			cout << " Podaj nowy adres sklepu " << endl;
			string adresn;
			cin >> adresn;	
			obiekt[numer].adres=adresn;
			
		}
		else cout << " Nic nie chcesz zmienic jednak ?. To dowidzenia. " << endl;


	}

	template <typename T>
	T * Iterator<T>::skok(Wektor<T> obiekt, int i) // zwraca wskaznik na obiekt Wektor[i]
	{

		T * a = &obiekt[i];
		return a;
		
	}










	
