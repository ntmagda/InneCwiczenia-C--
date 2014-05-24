# include <stdio.h>
main ()
{
int i,m,x,y,b,w,s,k;
printf(" wprowadz liczbe sekund .\n");
scanf( "%d", &i);
m=i/3600;
printf("godziny: %d ", m);
x=m*3600;
w=i-x;
y=w/60;
printf("minuty: %d ", y);
s=y*60;
k=i-s-x;
printf("sekundy: %d", k);

scanf ("%d",&b);

     return 0;
     }
