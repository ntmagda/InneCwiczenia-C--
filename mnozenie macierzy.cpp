# include <stdio.h>
# include <stdlib.h>
#define M 2
#define N 2
#define P 2
main()
{ 
int i,j,k;
int macierz1 [M][N]={
{1,4},
{3,9}
};
int macierz2 [N][P]={
{5,6},
{3,9}
};
      int macierz3 [M][P];
      for( i=0; i <M; i++)
      for(j=0;j<P; j++)
      macierz3[i][j]=0;
      for( i=0; i <M; i++)
      for(j=0;j<P; j++)
      for (k=0; k<N; k++)
          {macierz3 [i][j]=macierz3[i][j]+(macierz1[i][k]*macierz2[k][j]);
          }
          
                                      

                    for(i=0; i<M; i++)
    {for(j=0; j<P; j++)
    printf(" %d\t ", macierz3[i][j]);
printf("\n\n");}
system("pause");
      }
