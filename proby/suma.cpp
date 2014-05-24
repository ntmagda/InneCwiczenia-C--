# include <stdio.h>
# include <stdlib.h>
main()
{     int ilosc,suma,i;
      i=1;
      suma=0;
      printf(" podaj ilosc kolejnych liczb naturalnych ktorych kwadraty chcesz zsumowac:\n");
      scanf("%d", &ilosc);
      while(i<=ilosc)
      {        
               suma=suma+i*i;
               i++;
      }
      printf("%d", suma);
      system ("pause");
      }
