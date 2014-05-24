# include <stdio.h>
# include <stdlib.h>

int** createMatrix(int n)
{
int** tab=(int**)malloc((n*sizeof(int*)));
int i;
if(tab!=NULL)
    {
        for(i=0;i<n;i++)
            {
                *(tab+i)=(int*)malloc(n*sizeof(int));
                if(tab[i]==NULL)return NULL;
            }
    }
else return NULL;
return tab;
}



void deleteMatrix(int*** ptab, int n)

{    int i;
     for(i=0;i<n;i++)
                     free(*ptab[i]);
                     free(*ptab);
                     *(ptab)=NULL;     
     }
     
     
     int main()
{
     int n;
     int **t;
     printf( "podaj rozmiar macierzy\n");
     scanf("%d", &n);     

     t=createMatrix(n);
     deleteMatrix(&t,n);
     return 0;
     }






