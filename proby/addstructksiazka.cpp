# include <stdio.h>
# include <stdlib.h>

void add(struct ksiazka** tab, int n, int i)
{
      struct ksiazka{
            char imie;
            char nazwizko;
            long numer;
            };
     
struct ksiazka *tymcz = (struct ksiazka*) malloc((n+1)*sizeof(struct ksiazka));
if(tymcz!=NULL)
{
      int k;
      for(k=0; k<n; k++) 
      {*(tymcz+k)=*(*tab+k);}
      *(tymcz+n)=i;
      free(*tab);
      *tab=tymcz;
}
}
 main()
{
     struct ksiazka{
            char imie[20];
            char nazwizko[20];
            long numer;
            };
     
struct ksiazka *tab = (struct ksiazka*) malloc(sizeof(struct ksiazka));
if(tab!=NULL)
{
    int i;
    for(i=0;i<10;i++) add(&tab, i, i);    
    for(i=0;i<10;i++) printf("%d ", tab[i]);
}
else printf("Blad alokacji");
}
