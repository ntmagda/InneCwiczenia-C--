# include <iostream>
# include <cstring>
# include <string>
# include "Zabawka.h"

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

	Zabawka & Zabawka::operator=(const Zabawka & a)
	{
		nazwa=a.nazwa;
		adres=a.adres;	
	}	

	ostream & operator<< ( ostream & a, const  Zabawka & b)
	{
		a << " Nazwa firmy: " << " ";
		a << b.nazwa;
		a << " Adres firmy: " << " ";
		a << b.adres;

	return a;
	}
	istream & operator>> ( istream & a, Zabawka & b)
	{

		getline(a,b.nazwa);
		getline(a,b.adres);

	return a;

	}
