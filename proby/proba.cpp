# include <stdio.h>
# include <stdlib.h>
# define N 10
int main()
{     int i,j;
      int tab [3] [N+1];
      for (j=0; j<N+1;j++)
      {tab[0][j]=j+1;}
      for (j=0; j<N+1;j++)
      {tab[1][j]=(j+1)*(j+1);}
      for (j=0; j<N+1;j++)
      {tab[2][j]=(j+1)*(j+1)*(j+1);}
      

for(i=0;i<3;i++)
{
for(j=0;j<N+1;j++)
{
printf("%d\t", tab[i][j]);
}
printf("\n");

}	
    system("pause");
  }
