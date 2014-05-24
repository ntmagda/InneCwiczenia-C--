#include <stdio.h>
#include <stdlib.h>

main ()

{
     int rzad;
     int a;
     int x;
     printf("wpisz liczbe poziomow choinki: .\n");
     scanf("%d", &x);
     for(rzad=0; rzad<x; rzad++)
     {
                 for(a=rzad+1; a<x; a++) 
                  putchar(' ');
                 for(a=rzad; a<=rzad*3; a++)
                 putchar('*');
                 printf(".\n");
     }
     system ("pause");
     return 0;
     }
