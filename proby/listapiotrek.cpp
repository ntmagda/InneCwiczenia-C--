# include <stdio.h>
# include <stdlib.h>
# define N 20
struct dane{
        char imie[N];
        char nazwisko[N];
        int rok;
        struct dane* next;
       };
 
 
void addend( struct dane** head)
{
   struct dane* nowy=(struct dane*)malloc(sizeof( struct dane));
   struct dane* obecny=*head;
   if(nowy!=NULL)
   {
                 printf("Podaj imie:\n");
   scanf("%s", &nowy->imie);
               while(getchar()!='\n')
                continue;
   printf("Podaj nazwisko:\n");
   scanf("%s", &nowy->nazwisko);
                while(getchar()!='\n')
                continue;
   printf("Podaj rok:\n");
   scanf("%d", &nowy->rok);
        nowy->next=NULL;
 
                while(getchar()!='\n')
                continue;
               
                if (obecny!=NULL)
                {
                    while(obecny->next!=NULL)
                     {
                      obecny=obecny->next;
                     }
                    obecny->next=nowy;
                }
                else *head=nowy;
     }
     }
 
void addbegin( struct dane** head)
{
     struct dane* nowy=(struct dane*)malloc(sizeof(struct dane));
     if(nowy!=NULL);
     {                    
             printf("Podaj imie:\n");
   scanf("%s", &nowy->imie);
               while(getchar()!='\n')
                continue;
   printf("Podaj nazwisko:\n");
   scanf("%s", &nowy->nazwisko);
                while(getchar()!='\n')
                continue;
   printf("Podaj rok:\n");
   scanf("%d", &nowy->rok);
                while(getchar()!='\n')
                continue;
nowy->next=*head;                          
*head=nowy;                                                        }}
     
struct dane wypisz(struct dane** head)
{      
       struct dane* biezacy;
       printf(" Oto lista:\n");
       biezacy=*head;
       while(biezacy!=NULL)
       {              
                       printf("Imie: %s\n Nazwisko %s\n Rok %d\n", biezacy->imie, biezacy->nazwisko, biezacy->rok);
                      biezacy=biezacy->next;
                       }
}
struct dane wypiszelement(struct dane* head, int m)
{
       struct dane* biezacy;
       biezacy=head;
       int i;
       for(i=0; i<m;i++)
       {biezacy=biezacy->next;}
       printf("Imie: %s\n Nazwisko %s\n Rok %d\n", biezacy->imie, biezacy->nazwisko, biezacy->rok);
       
       
       
       }
 
void wyszukaj (struct dane* head)
{    int rok;
     struct dane* wsk=head;
     printf("Wpisz rok dla ktorego chcesz wyszukac kontakt\n");
     scanf("%d", &rok);
     do{
                 if(wsk->rok==rok)
                 printf ("\n%s %s %d\n",wsk->imie, wsk->nazwisko,wsk->rok);
                 else
                 wsk=wsk->next;
                 }while(wsk!=NULL);
     }
 
void usunbegin (struct dane** head)
{
       struct dane *wsk;
       wsk=*head;
       wsk=wsk->next;
       free(head);
       *head=wsk;    
         
         
     }
     
void usunend( struct dane** head)
{
     struct dane *wsk;
     struct dane *poprzwsk;
     if((*head)==NULL)
                           printf("Pusta lista\n");
     else
         {wsk=*head;
         poprzwsk=*head;
         while(wsk->next!=NULL){
         poprzwsk=wsk;
         wsk=wsk->next;}
         poprzwsk->next=NULL;
         free(wsk);
         }}
     
void usuncala(struct dane** head)
{
     struct dane *wsk;
     struct dane *wsk2;
     wsk=*head;
     while(wsk!=NULL)
     {              
                     wsk2=wsk->next;
                     wsk=wsk2;
                     free(wsk);
                     
}
     
     
     }
     
     int main()
 
{    int wybor, n;
     struct dane *head =(struct dane*)malloc(sizeof(*head));
     if((head)!=NULL)
     {
     head->next=NULL;
    do{
    printf("MENU:\n");
    printf("Co chcesz zrobic? (Aby zakonczyc wpisz @) :\n");
    printf("1. Dodaj kontakt na koncu listy\n");
    printf("2. Dodaj kontakt na poczatku listy\n");
    printf("3. Wypisz ca³a liste\n");
    printf("4. Wyszukaj wg roku urodzenia\n");
    printf("5. Usun pierwszy element z listy.\n");
    printf("6. Usun ostatni element z listy.\n");
    printf("7. Usun ca³a liste.\n");
    printf("8. Wypisz n'ty element z listy\n");
    scanf("%d", &wybor);
                switch(wybor)
                {
                case 1:
                addend(&head);
                break;
                case 2:
                addbegin(&head);
                break;
                case 3:
                wypisz(&head);
                break;
                case 4:
                wyszukaj(head);
                break;
                case 5:
                usunbegin(&head);
                break;
                case 6:
                usunend(&head);
                break;
                case 7:
                usuncala(&head);
                break;
                case 8:
                printf("Podaj ktory element chcesz wypisac\n");
                scanf("%d", &n);
                wypiszelement(head, n);
                break;
                }
}
while(wybor!='@');
}
 
system("pause");
}
