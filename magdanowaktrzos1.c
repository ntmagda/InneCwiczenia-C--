# include <stdio.h>
main ()
{
     char m,i;
     int k,b;
     printf( "wprowadz znak.\n");
     scanf( "%c", &m);
     k=(int)m;
     k=k+1;
     i=(char)k;
     printf("nastepna litera to ");
     printf("%c",i);
     scanf ("%d",&b);
     return 0;
     }
