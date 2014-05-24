#include <stdio.h>
#include <stdlib.h>

struct bazadanych
{
char imie;
char nazwisko;
long numer;
};

void add(struct** ksiazka, int ROZMIAR, int i)
{
struct bazadanych *tymcz = (struct bazadanych*) malloc((ROZMIAR+1)*sizeof(struct bazadanych));
if(tymcz!=NULL)
               {
               int k;
               for(k=0; k<n; k++) *(tymcz+k)=*(*ksiazka+k);
*(tymcz+ROZMIAR)=i;
free(*ksiazka);
*ksiazka=tymcz;
               }
               }

main ()
{char a;
int i;
i=0;
struct bazadanych *ksiazka=(struct bazadanych*)malloc(sizeof(struct bazadanych));
if (*ksiazka!=0)
{              while (a=='TAK')
               printf(" Chcesz dodac nowy kontakt? TAK/NIE\n");
               scanf("%c", &a);
               if(a=='TAK')
               {        
                        add(&ksiazka,i,i);
                        printf("Podaj imie\n");
                        scanf("%c",&ksiazka[i].imie);
                         printf("Podaj nazwisko\n");
                        scanf("%c",&ksiazka[i].nazwisko);
                         printf("Podaj numer\n");
                        scanf("%l",&ksiazka[i].numer);
                        i++;
                        }
               

              
              
              
              
              }

}
