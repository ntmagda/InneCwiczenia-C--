# include <stdio.h>
# include <string.h>
# include <stdlib.h>



# define ROZMIAR 40


struct animal{

	char nazwa[ROZMIAR];
	char gatunek[ROZMIAR];
	int liczebnosc;
	struct animal* nast;

};


int IleElementow ( struct animal * glowny){
	
	struct animal *biezacy;
	static int licznik=0;

	if ( glowny ==NULL)
		return 0;
	else{
	
		biezacy=glowny;
		while ( biezacy!=NULL)
		{	
			licznik++;
			biezacy=biezacy->nast;
		}
	printf ( "Twoja lista ma: %d elementow\n", licznik);
	return licznik;
			
		}
	
}




int main (){

	

	struct animal * glowny=NULL;
	struct animal *biezacy, * poprz;
	char wejscie[ROZMIAR];
		
	printf ( " Podaj nazwe pierwszego zwierzęcia: " );
	
	while(gets(wejscie)!=NULL && wejscie[0]!='\0'){
	
		
		biezacy = (struct animal*) malloc (sizeof(struct animal));
		if( glowny == NULL) 
			glowny=biezacy;
		else 
			poprz->nast =biezacy;
		biezacy->nast = NULL;
		strcpy(biezacy->nazwa, wejscie);
		printf( " Podaj gatunek zwierzęcia: " );
		gets(biezacy->gatunek);
		printf (" POdaj liczebnosc zwierzęcia: " );
		scanf( " %d" , &biezacy->liczebnosc);
		while ( getchar()!= '\n')
			continue;
		printf ( " Podaj imie kolejnego zwierzecia ");
		poprz=biezacy;


		}
	if (glowny == NULL)
	puts(" NIe wpisano zadnych danych " );
else 
	puts ( " Oto lista zwierzat:\n");


biezacy=glowny;
while ( biezacy != NULL)
	{printf(" Zwierze : %s gatunek: %s Liczebnosc: %d\n", biezacy-> nazwa, biezacy->gatunek, biezacy->liczebnosc) ;
		biezacy=biezacy->nast;
}

int dupa = IleElementow (glowny);
printf ( "Moja lista ma: %d\n ", dupa);

return 0;

}




