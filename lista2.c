# include <stdio.h>
# include <stdlib.h>
# include <string.h>

# define ROZT 45

struct film{

	char tytul[ROZT];
	int ocena;
	struct film * nast;

};

int main(){


	struct film * glowny = NULL;
	struct film * poprz, * biezacy;
	char wejscie[ROZT];
	printf (" Podaj pierwszy tytul filmu: ");
	while (gets(wejscie) != NULL && wejscie[0]!= '\0')
	   {
		biezacy = (struct film*) malloc(sizeof(struct film));
		if (glowny == NULL)
			glowny = biezacy;
		else 
			poprz->nast= biezacy;
			biezacy->nast= NULL;
		strcpy(biezacy->tytul, wejscie);
		puts(" Podaj Twoja ocene <0-10>");
		scanf ("%d", & biezacy->ocena);
		while (getchar()!='\n')
		continue;
		puts ("POdaj nastepny tytul filmu, pusty wiersz konczy program");
		poprz=biezacy;
	}
if (glowny == NULL)
	puts(" NIe wpisano zadnych danych " );
else 
	puts ( " Oto lista filmow:\n");


biezacy=glowny;
while ( biezacy != NULL)
	{printf(" FIlm : %s Ocena: %d\n", biezacy-> tytul, biezacy->ocena) ;
		biezacy=biezacy->nast;
}


return 0;
	












}