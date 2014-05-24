#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
struct baza
{
char imie[20];
char nazwisko[20];
long numer;
};
 
void dodaj(struct baza** tablica, int* n)
{
      char c;
        do {
        c=getchar();
        }while (c!='\n');
        
        struct baza dane;
        printf("Wpisz imie:" );
        fgets(dane.imie,20,stdin);
        printf("Wpisz nazwisko:" );
        fgets(dane.nazwisko,20,stdin);
        printf("Wpisz numer:" );
        scanf("%ld",&dane.numer);
       
        struct baza* tab=(struct baza*)malloc((*n+1)*sizeof(struct baza));
        if(tab!=NULL)
        {
        int i; for(i=0;i<*n;i++)
        tab[i]=*tablica[i];
        tab[*n]=dane;
        free(*tablica);
        *tablica=tab;
        }
        *n++;
}
 
int wyszukaj (struct baza** tab, int n)
{
        long nr;
        printf("Wpisz numer:");
        scanf("%ld", &nr);
        int i;
        for(i=0;i<n;i++)
                if(nr==(*tab)[i].numer)
                printf("Imie: \n");
                puts((*tab[i]).imie);
                printf("Nazwisko: \n");
                puts((*tab[i]).nazwisko);
                printf("Numer indexu: \n");
                printf("%d",i+1);
                printf("\n");
}
 
void wypisz (struct baza** tablica, int i)
{
        printf("Imie: \n");
        puts((*tablica)[i].imie);
        printf("Nazwisko: \n");
        puts((*tablica)[i].nazwisko);
        printf("Numer: \n %ld",(*tablica)[i].numer);
}
 
void clear()
{
        char c;
        do {
        c=getchar();
        }while (c!='\n');
}
 
int main()
{
        struct baza* tablica=(struct baza*)malloc(sizeof(struct baza));
        if (tablica!= NULL)
        {       int rozmiar=0, wybor, i;
                do
                {
                printf("Wpisz numer opcji, ktora chcesz wykonac: \n 1. dodanie osoby do bazy; 2. wyszukanie po nr; 3. wyszukanie po indexie; \n");
                scanf("%d",&wybor);    
               
                switch(wybor)
                {
                case 1:
                dodaj(&tablica,&rozmiar);      
                break;
                case 2:
                wyszukaj(&tablica, rozmiar);
                break; 
                case 3:
                printf("Wpisz numer indexu: \n");
                scanf("%d", &i);
                wypisz(&tablica,i-1);
                break;
                default: printf("Koniec programu");
            return 0;
            break;
                }
               
                } while (wybor!=1 || wybor!=2 || wybor!=3);
        }
}
