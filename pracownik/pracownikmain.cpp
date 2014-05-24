# include <iostream>
# include <cstring>
# include "pracownik.h"
//

int main(){

	cout << "Prosze podac ilosc pracownikow w Twojej firmie " << endl;
	int ile;
	cin >> ile;
	Pracownik * tablica[ile];

		for ( int i =0; i < ile; i++)
		{
				cout << " Prosze podac imie pracownika: " << endl;
				string imie1;
				getline(cin, imie1);
				cin.get();
				cout << "Prosze podac nazwisko pracownika: " << endl;
				string nazwisko1;
				getline(cin, nazwisko1);
				cin.get();
				cout << " Prosze podac NIP pracownika: " << endl;
				long int NIP1;
				cin >> NIP1;
				cout << "Prosze podac PESEL pracownika: " << endl;
				long int PESEL1;	
				cin >> PESEL1;
				cout << " Prosze podac jakiego typu jest pracownik " << endl;
				cout << " 1) Pracownik stały \t\t 2) Pracownik na zlecenie " << endl;
				cout << " 3) Pracownik handlowiec " << endl;
		int wybor;
		cin>> wybor;
			switch(wybor)
			{

				case 1: 
					
					cout << "Prosze podac pensje pracownika" << endl << endl;
					int pensja;
					cin >> pensja;
					tablica[i]= new Stali(imie1,nazwisko1, NIP1,PESEL1,pensja);
					
				break;

				case 2:
					cout << "Prosze podac stawkę za godzinę pracownika" << endl << endl;
					int stawka;	
					cin >> stawka;	
					cout << " Prosze podac liczbe godzin pracownika " << endl << endl;
					int liczbah;
					cin >> liczbah;
					tablica[i]= new Zlecenie(imie1,nazwisko1, NIP1,PESEL1,stawka,liczbah);
				break;
	
				case 3:
					cout << " Prosze podac sprzedaz pracownika " << endl << endl;
					int sprzed;
					cin >> sprzed;
					tablica[i]= new Handlowiec(imie1,nazwisko1, NIP1,PESEL1,sprzed);
				break;
				
			
			}
			



		}


	for ( int i =0; i <ile; i++)
	{


		cout << " Pracownik nr " << i+1<< endl;
		tablica[i]->print();
		cout << endl << endl;

	}	


	for ( int i=0; i < ile; i++)
	{

		delete tablica[i];

	}































}