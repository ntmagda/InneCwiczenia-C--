# include <stdio.h>
# include <stdlib.h>
main()
{   int rzad,i,tab,x;
    printf(" podaj liczbe rzedow");
    scanf("%d", &x);
    for(rzad=0; rzad<=x; rzad++)
    { for(i=1; i<=rzad; i++)
            { putchar('$');}
             printf("\n");
             }
      system ("pause");
      }
