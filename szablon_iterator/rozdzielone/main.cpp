# include <iostream>
# include <cstring>
# include "Zabawka.h"
# include "Iterator.h"
using namespace std;

static int czy_dalej;
static int k;
static int p;


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
