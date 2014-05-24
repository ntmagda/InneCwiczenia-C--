#include <stdio.h>
# include <stdlib.h>

int binarne(int liczba)
{
    if (liczba>0)
    binarne(liczba/2);
    printf ("%d", liczba%2);
    
}



main ()

{    int liczba;
     printf(" podaj liczbe\n");
     scanf("%d", &liczba);
     binarne(liczba);
     printf("\n");
     system("pause");
     return 0;
     }
     
