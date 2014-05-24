# include <stdio.h>
# include <stdlib.h>

int** creatematrix(int n)
{
      int i;
      int** matrix=(int**)malloc((n)*sizeof(int*));
      if(matrix!=NULL)
      {
                      for(i=0; i<=n; i++)
                      {
                        (*matrix)[i]=(int*)malloc((n)*sizeof(int));
                        if((*matrix)==NULL) return NULL;
                      }
      
      return matrix;
      else return NULL;
      
      }
      
void fillMatrix1(int** tab, int n)
{
     
     int i,j,k;
     k=0;
     for (i=0;i<n;i++)
     {
         for (j=0;j<n;j++)
         {tab[i][j]=k++;}
         }
     }
     
     
     int main()
     {
         
         int n;
         int** tab;
         printf("Wpisz wymiar tablicy\n");
         scanf("%d", &n);
         tab=creatematrix(n);
         fillMatrix1(&tab, n);
         
          for (i=0;i<n;i++)
          for (j=0;j<n;j++)
          {
              printf("%d", tab[i][j]);
              printf("\n");
          
         }
         
         free(tab);
         }}
