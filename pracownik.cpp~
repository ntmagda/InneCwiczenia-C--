# include <iostream>
# include <cstring>
# include "pracownik.hpp" 

// funkcje abstrakcyjnej klasy bazowej Pracownik
Pracownik :: Pracownik(const string s, const string na, long int ni, long int pes)
{

	imie = s;
	nazwisko = na;
	NIP= ni;
	PESEL = pes;
	

}

double Pracownik :: wylicz_zarobki() const {} //nie wiem co innego tu dac

void Pracownik :: print()
{

	cout << " Imie Twojego Pracownika   " << imie_1() <<endl;
	cout << " Nazwisko Twojego Pracownika   " << nazwisko_1() << endl;
	cout << " NIP Twojego Pracownika   " << NIP_1() << endl;
	cout << " PESEL Twojego Pracownika   " << PESEL_1() << endl;

}

// funkcje klasy pochodnej Stali



Stali::Stali(const string s , const string na, long int ni, long int pes, int pen) : Pracownik(s,na,ni,pes)
{
	pensja = pen;
	

}

void Stali :: print()
{

	Pracownik:: print();
	cout << "Pensja Twojego Pracownika wynosi: " << endl;
	cout << " Jego zarobki wynoszą tyle samo co pensja czyli :   " << wylicz_zarobki() << endl;

}

double Stali :: wylicz_zarobki() const{ return pensja;};


// funkcje klasy pochodnej Zlecenie


void Zlecenie :: print ()
{

	Pracownik:: print();
	cout << "Stawka na godzine dla Twojego pracownika to: " << stawkah << endl;
	cout << " Liczba godzin pracujących Twojego pracownika wynosi: " << liczba_godzin << endl;
	cout << " Zarobki Twojego pracownika na miesiąc to: " << wylicz_zarobki() << " na miesiac " << endl;

}

Zlecenie:: Zlecenie(const string s, const string na, long int ni,  long int pes, int staw, int licz) : Pracownik(s,na,ni,pes){

	stawkah = staw;
	liczba_godzin = licz;

}

double Zlecenie :: wylicz_zarobki() const
{ 
	if(liczba_godzin>40) return 1.5*stawkah*liczba_godzin;
	else return stawkah*liczba_godzin;
}


// funkcje klasy pochodnej Handlowiec


void Handlowiec :: print(){

	Pracownik:: print();
	cout << "Wartosc sprzedazy Twojego Pracownika w tym miesiacy wyniosla " << sprzedaz << endl;
	cout << " Jego zarobki wynoszą " << wylicz_zarobki() << " na miesiac" << endl;


}		


Handlowiec:: Handlowiec(const string s, const string na, long int ni, long int pes, int sprz) : Pracownik(s,na,ni,pes)
{
	sprzedaz = sprz;

}

double Handlowiec:: wylicz_zarobki()
{

	return 0.7 * sprzedaz;

}	











