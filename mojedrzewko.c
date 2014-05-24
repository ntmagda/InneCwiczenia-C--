# include <stdio.h>
#define MAXPOZ 10;

void InicjujDrzewo(Drzewo *wdrzewo){

	wdrzewo->korzen= NULL;
	wdrzewo->rozmiar=0;

}

bool PusteDrzewo( Drzewo *wdrzewo){

	if(wdrzewo->korzen= NULL)
	return true;
	else 
	return false;

}

bool PelneDrzewo( Drzewo *wdrzewo){

	if(wdrzewo->rozmiar=MAXPOZ);
	printf( " Drzewo jest przepelnione");
	return true
	else
	return false;


}

int LiczbaPozycji ( Drzewo *wdrzewo){

	return wdrzewo->rozmiar;
}

bool DodajPozycje ( Pozycja *wp, Drzewo *wdrzewo);
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
	return true;




}

static Wezel* UtworzWezel( Pozycja *wp){

	Wezel* nowy;
	nowy= (Wezel*) malloc (sizeof(Wezel));
	if(nowy== NULL) printf("Blad alokacji")
	else 
	{
		nowy->pozycja=*wp;
		nowy->lewy= NULL;
		nowy->prawy=NULL;
	}

return 0;

} 


static DodajWezel( Wezel * nowy, Wezel *korzen){


	if(NaLewo(&nowy->pozycja, & korzen->pozycja))
		{
		if(korzen->lewy==NULL)
			korzen->lewy=nowy;
		else 
			DodajWezel(nowy, korzen->lewy);
		}
	else if(NaPrawo(&nowy->pozycja, &korzen->pozycja))
		{	
		if (korzen->prawy==NULL)
			korzen->prawy=nowy;
		else DodajWezel(nowy, korzen->prawy);
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




