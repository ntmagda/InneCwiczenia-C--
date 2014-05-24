# include <stdio.h>
# include <stdlib.h>
# define ROZMIAR 4
int main()

{ int tablica[ROZMIAR];
int i;
for (i=0; i<ROZMIAR; i++)
{ srand(2);
    tablica[i]=rand()%20;
printf("\n");
}   
printf("%d", tablica[i]); 
system("pause");
}

