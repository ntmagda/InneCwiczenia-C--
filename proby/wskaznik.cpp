#include <stdio.h>
main ()
{
     int tab[]={1,2,3,4,5,6,7,8,9,10};
     int b;
     int *wskaznik;
     wskaznik = &tab[0];
     printf(" o to jest zmienna przez wskaznik:  %d", wskaznik[0]);
     scanf("%d", b);
     return 0;
     }
