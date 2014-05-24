#include <stdio.h>
main()
{
int z,b;
printf("wprowadz wartosc: .\n");
scanf("%d", &b);
if(b<5)
printf("wartosc jest mniejsza ni¿ 5.\n");
else 
for(b=0;b<100;b++)
printf("*");
scanf("%d", &z);
return 0;
}
