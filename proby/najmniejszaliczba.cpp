#include <stdio.h>
#include <stdlib.h>
main()

{ int a;
int b;
int i;
int x;
int min;
int z;
for(i=1; i<5; i++)
{printf("wpisz liczbe:.\n");
scanf("%d", &a);
printf("wpisz kolejna liczbe:.\n");
scanf("%d", &b);
x=a-b;
if(x<0)
min=a;
else min=b;
}

printf(" najmniejsza liczba to %d", min);
system("pause");
      
      return 0;
      }
