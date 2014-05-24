# include <stdio.h>
# include <stdlib.h>
main()
#define ROZMIAR 128
{
char tekst, pomocnicza;
char tablica[ROZMIAR];
int i,dlugosc;
int x;
printf(" Podaj tekst, maksymalnie 128 znakow \n");
fgets(tablica, ROZMIAR, stdin); 
dlugosc=0;
i=0 ;
    while (tablica[i]!='\0')
        {
        dlugosc++;
        i++;
        }
    for(x=0;x<dlugosc/2;x++)
        {
        pomocnicza=tablica[dlugosc-x-1];
        tablica[dlugosc-x-1]=tablica[x];
        tablica[x]=pomocnicza;
        }
puts(tablica);
system ("pause");
return 0;
}
