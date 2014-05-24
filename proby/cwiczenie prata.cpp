# include <stdio.h>
# include <stdlib.h>

# define N 20 
struct daneos{
       char imie[N];
       char nazwisko[N];
       };
struct student{
       struct daneos dane;
       float oceny[N];
       float srednia;
       };
       
       void add(struct daneos* tablica, int *n)
       {
            int i;
            struct daneos wpis;
            printf("Podaj imie\n");
            fgets(wpis.imie, N, stdin);
                        while(getchar()!='\n')
                        continue;
            printf("Podaj nazwisko\n");
            fgets(wpis.nazwisko, N, stdin);
                        while(getchar()!='\n')
                        continue;
                        
                        struct daneos *temp=(struct daneos*)malloc((*n+1)*sizeof(struct daneos));
                        if(temp!=NULL)
                        {
                                      for(i=0;i<*n+1;i++)
                                      {                  temp[i]=tablica[i];
                                                         temp[*n+1]=wpis;
                                                         free(tablica);
                                                         tablica=temp;
                                                         }                                      
                                      }
                                      *n++;
                       
                        
                        }
       struct daneos wypisz(struct daneos* tablica, int n)
       {
              int i;
              for (i=0; i<n+1; i++)
              printf("Imie: %s, \n Nazwisko: %s", (tablica)[i].imie, (tablica)[i].nazwisko);
              
              }
       
       
       int main()
       {
           int n=0;
           int wybor;
           struct daneos* tablica=(struct daneos*)malloc(sizeof(struct daneos));
           while(wybor!=9)
           if(tablica!=NULL){
                             printf("Chcesz dodac nowy kontakt? Wpisz 1\n");
                             printf("Chcesz wyswietlic liste? Wpisz 2\n");
                             printf("chcesz zakonczyc program? Wpisz 9\n");
                             scanf("%d", &wybor);
                             switch(wybor)
                             {
                                          case 1:
                                               add(tablica, &n);
                                               break;
                                          case 2:
                                               wypisz(tablica,n);
                                               break;
                                               }
           
            
           }
         system("pause");
           }
