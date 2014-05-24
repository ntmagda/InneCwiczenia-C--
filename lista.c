# include <stdio.h>
# include <stdlib.h>

struct dane{
char imie[20];
char nazwisko[20];
int rok;
struct dane* wsk;
};

void addbegin( struct dane** head)
{
struct dane* kontakt=(struct dane*)malloc(sizeof(struct dane));
if (kontakt!=NULL)
{
        char c;
        do {
        c=getchar();
        }while (c!='\n');

                  struct dane* kontakt;
                  printf("Podaj imie\n");
                  fgets(kontakt->imie, 20, stdin);
                  printf("Podaj nazwisko\n");
                  fgets(kontakt->nazwisko, 20, stdin);
                  printf("Podaj rok\n");
                  scanf("%d", &kontakt->rok);
                  kontakt->wsk=*head;
                  *head=kontakt;
}
}


void addend( struct dane** head, struct dane* poprzedni)
{
     struct dane* kontakt=(struct dane*)malloc(sizeof(struct dane));
     if (kontakt!=NULL)
     {
        char c;
        do {
        c=getchar();
        }while (c!='\n');

               struct dane* kontakt;
               printf( "Podaj Imie\n");
               fgets(kontakt->imie, 20, stdin);
               printf("Podaj nazwisko\n");
               fgets(kontakt->nazwisko, 20, stdin);
               printf("Podaj rok\n");
               scanf("%d", &kontakt->rok);
               if( head==NULL)
                   {*head=kontakt;
                   poprzedni=kontakt;
                   }
               else
                   poprzedni->wsk=kontakt;
                   kontakt->wsk=NULL;
                   poprzedni=kontakt;

     }
}
void wypisz( struct dane** head)
{
    struct dane *tymcz=*head;
       do
       {int i;
       i=1;
                           printf("Kontakt &d: \n Imiê: %c\n Nazwisko: %c\n, Rok: &d\n", i, tymcz->imie, tymcz->nazwisko,tymcz->rok);
       tymcz=tymcz->wsk;
       i++;
       }
       while(tymcz!=NULL);
printf("Nie ma wiecej kontaktow.\n");

}




struct dane* wyszukaj(struct dane** head, int *rok)
{
int k;
k=0;
struct dane* i;
i=*head;
do{
    if(&i->rok==rok)
    return(i);
    else
    i=i->wsk;

}
while(i!=NULL);
}


int main ()
{
int n,rok;
struct dane* head=NULL;
struct dane* poprzedni;
struct dane* k;
printf("MENU:\n 1.Wypisz listê\n 2. Dodaj nowy kontakt na koncu listy\n 3.Dodaj nowy kontakt na poczatku listy\n 3.Wyszukaj kontakt wg roku urodzenia \n 4. Usun element z poczatku listy. \n 5. Usun element z konca listy\n ");
scanf("%d", &n);
switch(n)
{
case 1:
     wypisz(&head);
     break;
case 2:
     addend(&head, poprzedni);
     break;
case 3:
     addbegin(&head);
     break;
case 4:
    k=wyszukaj(&head,&rok);
    printf("Kontakt: \n Imiê: %c\n Nazwisko: %c\n, Rok: &d\n", k->imie, k->nazwisko,k->rok);
    break;

}}
