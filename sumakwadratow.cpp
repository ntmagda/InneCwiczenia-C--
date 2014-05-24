#include <stdio.h>
#include <stdlib.h>

int tab[10][10];

int i, j;
int main()

{
for(i=0;i<10;i++)
{
for(j=0;j<10;j++)
{
tab[i][j]=(i+1)*(j+1);
printf("%d\t", tab[i][j]);
}
printf("\n");
}
system("pause");
return 0;
}
