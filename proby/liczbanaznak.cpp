# include <stdio.h>
#include <math.h>
# include <stdlib.h>

main ()

{ 
int liczba,i,y;
char x;
printf( "wpisz maksymalnie pieciocyfrowa liczbê \n");
scanf("%d", &liczba);
if(liczba<99999)
    for(i=1; i<6; i++)
              {
              y=liczba%(int)pow(10,i);
              liczba=liczba-y;
              x=(int)liczba;
              printf("%c \n\n", &x);
}
else 
printf("wpisales za duza liczbe \n");
system ("pause");
return 0;
}
