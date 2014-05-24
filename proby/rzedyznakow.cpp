#include <stdio.h>
#include <stdlib.h>

main ()

{
     int rzad;
     int a;
     int b;
     for(rzad=1; rzad<11; rzad++)
     {
                 for(a=rzad; a<11*rzad; a=a+rzad)
                 printf("%d   ", a);
     printf(".\n");
     }
     scanf("%d", b);
     return 0;
     }
