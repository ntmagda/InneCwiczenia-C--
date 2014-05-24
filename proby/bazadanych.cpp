# include <stdio.h>
# include <stdlib.h>


struct kontakt{
       char imie[30];
       char nazwisko[30];
       long numer;
       };
       
       void add( struct kontakt** tablica, int *n)
       {
            int i;
            struct kontakt wpis;
            printf(" Wpisz imiê\n");
            fgets(wpis.imie, 30, stdin);
            while(getchar()!='\n')
                        continue;
            printf(" wpisz nazwisko\n");
            fgets(wpis.nazwisko,30, stdin);
            while(getchar()!='\n')
                        continue;
            printf("wpisz numer\n");
            scanf("%l", &wpis.numer);
  
            struct kontakt* temp=(struct kontakt*)malloc((*n+1)*sizeof(struct kontakt));
            if(temp!=NULL)
            {
                         for(i=0; i<*n+1; i++)
                         temp[i]=*tablica[i];
                         temp[*n+1]=wpis;
                         free(*tablica);
                         *tablica=temp;
                         
                                                 
                         }
                         *n++;
            }
       
       int find(struct kontakt** tablica, int n)
       {
           long num;
           int i;
           printf("Wpisz numer telefonu, po którym chcesz wyszukac kontakt");
           scanf("%l", &num);
           for(i=0;i<n;i++)
           {
                           if(num==(*tablica)[i].numer)
                           printf("Oto numer twojego kontaktu %d, a to jego dane:\n", i+1);
                           printf("*tablica[i].imie\n");
                           printf("*tablica[i].nazwisko\n");
                           printf("*tablica[i].numer\n");
                           
           
           
           }
           }
       void index( struct kontakt** tablica, int i)
       {
       printf("Imie:\n");
       puts("*tablica[i+1].imie\n");
       printf("Nazwisko:\n");
       puts("*tablica[i+1].nazwisko\n");
       printf("Numer:\n");
       printf("%l\n", (*tablica)[i+1].numer);
                                       }
            
                            
       
       int main()
       { 
           int rozmiar =0;
           int opcja,k;
           struct kontakt* tablica=(struct kontakt*)malloc(sizeof(struct kontakt));
           if(tablica!=NULL)
           {
                 do{
                            printf("Co chcesz dzisiaj zrobiæ ze swoj¹ baz¹ danych?\n Wpisz 1 jeœli chcesz dodaæ kontakt do bazy.\n Wpisz 2 jeœli chcesz wyszukaæ kontaktu po numerze telefonu\n Wpisz 3 jeœli chcesz wypisaæ kontakt po numerze indeksu\n");
                            scanf("%d", &opcja);
                            switch(opcja)
                            {
                                         case 1:
                                              add(&tablica,&rozmiar);
                                              break;
                                         case 2:
                                              find(&tablica, rozmiar);
                                              break;
                                         case 3:
                                              printf("podaj numer indeksu");
                                              scanf("%d", &k);
                                              index(&tablica,k);
                                              break;
                                              
                                              }
                                              }
                                   while(opcja!= 1|| opcja !=2 || opcja !=3);
                                    
           
           }
           system("pause");
           }
                  
