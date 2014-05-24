# include <iostream>
# include <cstring>
# include <fstream>
# include "Zabawka.h"
# include "Iterator.h"

static int czy_dalej;
static int k;
static int p;

using namespace std;


	Zabawka::Zabawka() // konstruktor domyslny
	{

		nazwa = "brak nazwy";
		adres = "brak adresu";
	}

	Zabawka::Zabawka(std::string nazwa1, std::string adres1)
	{
		nazwa=nazwa1;
		adres=adres1;

	}
	Zabawka::Zabawka(const Zabawka & k) // konstruktor kopiujacy
	{
		nazwa= k.nazwa;
		adres = k.adres;
	}

	bool Zabawka::operator!=(const Zabawka & a)
	{
		if ( nazwa== a.nazwa && adres==a.adres) return false;
		else return true;
	}

	bool Zabawka::operator==(const Zabawka & a)
	{
		if(nazwa==a.nazwa && adres==a.adres) return true;
		else return false;
	
	}

	Zabawka & Zabawka::operator=(Zabawka & a)
	{
		nazwa=a.nazwa;
		adres=a.adres;	
	}	

	ostream & operator<< ( ostream & a, const  Zabawka & b)
	{
		a << " Nazwa sklepu: " << " ";
		a << b.nazwa << "  #  ";
		a << " Adres sklepu: " << " ";
		a << b.adres;

	return a;
	}
	istream & operator>> ( istream & a, Zabawka & b)
	{

		cout << endl <<" Podaj nazwe sklepu: " << endl;
		getline(a,b.nazwa);
		cout << endl << "Podaj adres sklepu: " << endl;
		getline(a,b.adres);

	return a;

	}

	Zabawka & Zabawka::change()
	{

		cout << " Czy chcesz zmienic nazwe sklepu ? <TAK - wcisnij 1/Nie - wcisnij 0> " << endl;
		int odp;
		cin>>odp;
		cin.get();
		if(odp)
		{
			cout << "Podaj nowa nazwe sklepu " << endl;
			string nowy;
			cin >> nowy;
			nazwa=nowy; // zmiana nazwy sklepu

		}
		cout << " Czy chcesz zmienic adres sklepu ? <TAK - wcisnij 1/ Nie wcisnij 0> " << endl;
		int odp1;
		cin>> odp1;
		cin.get();
		if (odp1 )
		{
			cout << " Podaj nowy adres sklepu " << endl;
			string adresn;
			cin >> adresn;	
			adres=adresn;
			
		}
		else cout << " Nic nie chcesz zmienic jednak ?. To dowidzenia. " << endl;


	}


	template <typename T>
	Iterator<T>::Iterator()   // konstruktor domyslny
	{
		Wektor <T> nowy;
		obiekt = nowy; // tworzymy obiekt;
		ptr = obiekt.tab;

	}

	template <typename T>
	Iterator<T>::~Iterator()   // destruktor domyslny
	{}

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
		cout << obiekt.tab[i-1] << endl;
		else cout << " Bład, Taki obiekt nie istnieje " << endl;
	}

	template <typename T>  // zmienia jakis obiekt obiekt
	void Iterator<T>::change(int i) // musi byc wywolany na rzecz jakeigos wektora
	{
		cout << "Rekord o numerze: " << i << endl;
		show(i);
		(obiekt.tab[i-1]).change();
		
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



	int main()
	{	
	using namespace std;

	cout << "\t\t" << " 	TWORZYMY NOWA BAZE DANYCH   " << "\t\t" << endl << endl << endl;


	cout << "Co chcesz zrobic ?" << endl<< endl;
	cout << " Moze na poczatek stworzysz sobie jakakolwiek baze danych ?  " << endl;

		Wektor<Zabawka> baza_danych(3);
		cin >> baza_danych;
		if(p)
		{		
			do
			{
				cout <<"Czy chcesz dodawac kolejne rekordy w twojej bazie danych? < Tak - wpisz 1, Nie - wpisz 0" << endl;
				 //czy bedziemy tworzyc wiekszy wektor?
				cin >> czy_dalej;
				if(!czy_dalej) break;
				baza_danych.powieksz(3);
				cin>>baza_danych;
				if(!p) break;
			
			}while(p==1 && czy_dalej==1);
		}
		Iterator<Zabawka> itek(baza_danych);	



while(1){		
		cout<< endl << "Twoja baza danych wygląda następująco: " << endl<< endl;
					
		cout << baza_danych;	
	cout << endl << endl << "No to co teraz ?" << endl;
	cout << " Do wyboru masz" << endl;
	cout << " 1. Sprawdzic czy w bazie danych znajduja sie dwa takie same obiekty" << endl;
	cout << " 2. Dodac nowy obiekt za wybranym i-tym obiektem" << endl;
	cout << " 3. Usuniecie wybranego elementu " << endl;
	cout << " 4. Usuniecie wszystkich elementow z bazy danych " << endl;
	cout << " 5. Pobranie wielkosci bazy danych " << endl;
	cout << " 6. Wczytac do bazy danych twoje sklepy z pliku " << endl;
	cout << " 7. Modyfikowac wybrany element bazy danych " << endl;
	cout << " 8. Wyswietl konkretny element bazy danych " << endl;


	cout << endl << " Podaj która z opcji wybierzesz" << endl;
	int wybor;
	if(cin >>wybor)
	{
	cin.get();
		switch(wybor)
		{

			case 1:
				{
				int a,b;
				bool bol;
				for ( int i=0; i < baza_danych.wielkosc(); i++)
					{
						for ( int j=i+1; j < baza_danych.wielkosc(); j++)
						{
							if(baza_danych[i]==baza_danych[j])
							{
								a=i;
								b=j;
								bol=true;		
							}
							else bol=false;
						}
					
					}
					if(bol)
					{					
						cout << " W bazie danych istnieja dwa takie same rekordy " ;
						cout << endl << " są to rekordy o numerach: " << a+1 << " i" << b+1  << endl;
					}					
					else cout << " wszystkie rekordy są rozne" << endl;		
				}
			break;
			case 2:
				{
				cout << "wybrales opcje druga - dodajemy obiekt za i-tym obiektem " << endl;
				cout << " najlpierw musimy utowrzyc obiekt ktory chcesz wstawic " << endl;
				Zabawka nowy1;
				cin >>nowy1;
				cout << " Podaj za ktorym obiektem chcesz wstawic obiekt,";
				cout <<" jezeli chcesz wstawic go na samym poczatku, wpisz 0 " <<endl;
				int wybor;
				cin>> wybor;
				cin.get();
				baza_danych.wstaw(nowy1, wybor);			
				}
			
			break;
			case 3:
				{
				cout << "wybrales opcje trzecia - usuwamy i-ty obiekt " << endl;
				cout << " Podaj ktory element chcesz usunac"<< endl;
				int wybor;
				cin>> wybor;
				cin.get();
				baza_danych.usun(wybor-1);				
	
				}
			break;
			case 4:
				{	
				cout << "wybrales opcje czwarta - usuwamy wszystkie obiekty " << endl;
				baza_danych.usun_all();
				cout << baza_danych << endl;				
				}
			break;
			case 5:
				{
				cout << " wybrales opcje piątą - pobranie wielkosc bazy danych " << endl;
				cout << endl << " Twoja baza ma " << baza_danych.wielkosc() << "rekordow" << endl;

				}
			break;
			case 6:
				{
					cout << "wybrales opcje 6 - wczytywanie danych z pliku " << endl;
					baza_danych.wczytaj_f();
					cout << baza_danych;

				}
			break;
			case 7:	
				{
				cout << " wybrales opcje siodma - chcesz modyfikowac wybrany element bazy danych " << endl;
				cout << " Prosze podac ktory element chcesz zmodyfikowac ?" << endl;
				int wybor;
				cin >> wybor;
				itek.change(wybor);
				
				}
			break;
			case 8:
				{ 
				cout << " Wybrales opcje osma - wyswietlenie konkretnego obiektu " <<endl;
				cout << " Prosze podac ktory element chcesz wyswietlic " << endl;
				int wybor;
				cin >>wybor;
				itek.show(wybor);
			
				}
		}
	}
	else break;

	}


	
}
