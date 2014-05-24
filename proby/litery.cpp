# include <stdio.h>
# include <stdlib.h>
main()
{   int ROZMIAR,rzad;
    char i, litera;
    printf( "podaj ile ma byc rzedow\n");
    scanf("%d", &ROZMIAR);
    for(rzad=0;rzad <ROZMIAR; rzad++);
    { for(i='F'; i<('F'+rzad); i++);
               {printf("%c", i);
               }
               printf("\n");
             }
      system ("pause");
      }
      
      
      
