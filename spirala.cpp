# include <stdio.h>
#include <stdlib.h>
main ()
# define N 7

{
int tab[N][N];
int i, j, liczba, powt, granica;
if (N%2==1)
granica=(N/2)+1;
else 
granica=N/2;
liczba=1;
         for(powt=0; powt<granica; powt++)
                     {
                     for(i=powt; i<=N-2-powt;i++)
                     {tab[powt][i]=liczba++;}

                     for(j=powt;j<=N-1-powt; j++)
                     {tab[j][N-1-powt]=liczba++;}

                     for(i=N-2-powt;i>=powt+1; i--)
                     {tab[N-1-powt][i]=liczba++;}

                     for(j=N-1-powt; j>=powt+1; j--)
                     {tab[j][powt]=liczba++;}
}

for(i=0;i<N;i++)
{
for(j=0;j<N;j++)
{
printf("%d\t", tab[i][j]);
}
printf("\n");

}	
system("pause");
}
