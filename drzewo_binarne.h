# include <stdbool>


typedef struct pozycja{

	char imie[20]
	char nazwisko[20]

}Pozycja;

typedef struct wezel{

	Pozycja pozycja;
	struct wezel* lewy;
	struct wezel* prawy;

}Wezel;

typedef struct drzewo{

	Wezel * korzen;
	int rozmiar; // liczba pozycji w drzewie


}Drzewo;

void InicjujDrzewo ( Drzewo * wdrzewo); //wdrzewo wskazuje na drzewo+

bool PusteDrzewo( const Drzewo *wdrzewo);//+

bool PelneDrzewo(const Drzewo * wdrzewo ) ;//+

int LiczbaPozycji ( Drzewo *wdrzewo);//+

bool DodajPozycje (Pozycja *wp, Drzewo *wdrzewo);//+

bool wDrzewie ( const Pozycja* wp, const Drzewo *wdrzewo);

bool usunPozycje (const Pozycja *wp, Drzewo *wdrzewo);

void Przejdz ( const Drzewo * wdrzewo, void (* wfun) (Pozycja pozycja);

void UsunWszystko (Drzewo * wdrzewo);

static Wezel * UtworzWezel (const Pozycja * wp);//+

static void DodajWezel ( Wezel * nowy, Wezel * korzen)//+

static bool NaLewo(const Pozycja *p1, const Pozycja *p2)//+

