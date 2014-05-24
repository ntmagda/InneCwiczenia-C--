# include <stdio.h>
main ()
{
int b,x,y,i;
printf( "wprowadz x .\n");
scanf ("%d",&x);
printf ("wprowadz y .\n");
scanf ("%d", &y);
i=x;
x=y;
y=i;
printf(" x wynosi: %d",x);
printf ("y wynosi: %d",y);
scanf("%d", &b);


     return 0;
     }
