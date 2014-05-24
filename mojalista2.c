# include <stdio.h>
# include <stdlib.h>
# include <string.h>


struct buty{

 	int rozmiar;
	char producent[20];
	char kolor[15];
	struct buty* nast;

};



int main (){

	char wejscie[65];
	struct buty * glowny;
	struct buty * biezacy, * poprz;

	puts( " Podaj producenta buta jaki potrzbujesz kupic " );
	while ( gets(wejscie)!=NULL || wejscie[0]!= '\n')

		{
		biezacy= ( struct buty*) malloc (sizeof(struct buty));
		
		if ( glowny= NULL) // nie ma zadnego buta jeszcze
			glowny= biezacy;
		else
			poprz->nast= biezacy; // jest juz pare butow
			
		biezacy->nast = NULL;


		strcpy(biezacy->producent, wejscie);
		("Podaj rozmiar buta");
		scanf("%d", &biezacy->rozmiar);
		puts ( " Podaj kolor buta" );
		gets(biezacy->kolor);

			while(getchar()!='\n')
				continue;
		puts ( " Podaj kolejnego producenta buta " );
		poprz=biezacy;
		



}


	if(glowny==NULL)
		puts ( "Brak danych");
	else
	while (biezacy->nast!=NULL)
	{

		printf( " Rozmiar buta: %d \n Producent Buta: %s\n Kolor buta: &s\n", biezacy->rozmiar, biezacy->producent, biezacy->kolor);
biezacy->nast= biezacy;


}


return 0;

}
