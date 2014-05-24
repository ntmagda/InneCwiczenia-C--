#include <stdio.h>
#include <stdlib.h>
void add(int** tab, int n, int i)
{
int *tymcz = (int*) malloc((n+1)*sizeof(int));
if(tymcz!=NULL)
{
      int k;
      for(k=0; k<n; k++) *(tymcz+k)=*(*tab+k);
      *(tymcz+n)=i;
      free(*tab);
      *tab=tymcz;
}
}
int main()
{
int *tab = (int*) malloc(sizeof(int));
if(tab!=NULL)
{
    int i;
    for(i=0;i<10;i++) add(&tab, i, i);    
    for(i=0;i<10;i++) printf("%d ", tab[i]);
}
else printf("Blad alokacji");
system("pause");
}
