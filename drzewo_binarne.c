# include <stdio.h>


bool DodajPozycje( const Pozycja * wp, Drzewo *wdrzewo)
{
	Wezel * nowy;
	if (PelneDrzewo(wdrzewo))
	{
		printf( "Drzewo jest pełne\n");
		return false;	
	}

	if (SzukajPozycji(wp, drzewo).dziecko != NULL)
	{
		printf ( " pozycja juz istnieje " );
		return false;	
	}
	nowy= UtworzWezel(wp);
	if ( nowy == NULL)
	{
		printf ( " Nie mozna utworzyc wezla, blad alokacji ");
		return false;
	}

	wdrzewo->rozmiar++
	if(wdrzewo->korzen== NULL)
		wdrzewo->korzen= nowy;
	else
		DodajWezel(nowy, wdrzewo->korzen);
	return 0;

}
 
Wezel * UtworzWezel(const Pozycja *wp)
	{
	Wezel * nowy;
	nowy= (Wezel*)malloc (sizeof(Wezel));
	if ( nowy== NULL) printf( " Nie udalo sie zaalokowac pamieci");
	else
	{

		nowy->pozycja = *wp;
		nowy->lewy= NULL;
		nowy->prawy= NULL;
	}
	return 0;


	}



static void DodajWezel(Wezel * nowy, Wezel * korzen)

	{
		if(NaLewo(&nowy->pozycja, &korzen->pozycja))
		{
			if(korzen->lewy= NULL); // puste poddrzewo
			korzen->lewy = nowy;
		else
			DodajWezel( nowy, korzen->lewy);
		}

		else if (NaPrawo(&nowy->pozycja, &korzen->pozycja))
		{

		if(korzen->prawy= NULL) //puste poddrzewo prawe
		korzen-prawy= nowy;

		else  DodajWezel (nowy, korzen-prawy);

		}


	
	}


static bool NaLewo(const Pozycja * p1, const Pozycja * p2)
{

	int porown1;
	if ((porown1=strcmp(p1->imie, p2->imie))<0)
		return true;	
	else if (porown1 == 0 && strcmp(p1->gatunek, p2->gatunek)<0)
		return true;
	else 
		return false;

}

static bool NaPrawo(const Pozycja * p1, const Pozycja * p2)
{

	int porown1;
	if ((porown1=strcmp(p1->imie, p2->imie))<0)
		return true;	
	else if (porown1 == 0 && strcmp(p1->gatunek, p2->gatunek)<0)
		return true;
	else 
		return false;

}















