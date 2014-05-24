# include <stdio.h>
# include <stdlib.h>
# include <string.h>


#define ROZMIAR 60

struct kontakt{

	char imie[ROZMIAR];
	char nazwisko[ROZMIAR];
	long numer_telefonu;
	struct kontakt *nast;


};

int main(){

	char wejscie[ROZMIAR];
	struct kontakt *glowny = NULL;
	struct kontakt * biezacy, * poprz;
	
	puts (" Podaj imie pierwszego kontaktu" );
	
	while ( gets(wejscie)!= NULL && wejscie[0]!= '\n')
	{

		
		biezacy= (struct kontakt*) malloc (sizeof(struct kontakt));
		
	
			if ( glowny == NULL) glowny= biezacy;
			else poprz->nast= biezacy;

			biezacy->nast= NULL;
			
			strcpy(biezacy->imie, wejscie);
			printf( "P0daj nazwisko kontaktu");
			gets ( biezacy-> nazwisko);
			puts (" Numer telefonu " );
			scanf("%ld", &biezacy->numer_telefonu) ;
			
		while ( getchar()!='\n')
			continue;

				
			puts ( "Podaj imie kolejnego kontaktu");
			gets(wejscie);
			poprz=biezacy;
				

	}

if(glowny== NULL )
 puts ( " Nie wpisano zadnych danych" );

else{


biezacy=glowny;
while(biezacy!= NULL)
	{printf (" Imie : %s \n Nazwisko: %s \n Numer Telefonu %ld \n", biezacy->imie, biezacy->nazwisko, biezacy->numer_telefonu);
	biezacy=biezacy->nast;
}
}



		

}






