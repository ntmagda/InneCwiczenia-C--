# include <stdio.h>
# include <stdlib.h>

void copyMatrix(int*** dest, int** src, int n)
{
     int i,j;
     for(i=0;i<n;i++)
      {
        for(j=0;j<n;j++)
          {
                    *dest[i][j]=src[i][j];
          }
      }
}

int main()
{
      int i,n,j,k;
      printf("Podaj rozmiar macierzy: \n");
      scanf("%d", &n);
           int** dest= (int**)malloc(n*(sizeof(int*)));

     if(dest!=NULL)
     { 
                   for(i=0; i<n;i++)
                            {
                            dest[i]=(int*)malloc(n*(sizeof(int)));
                            if (dest[i]==NULL) return 0;
                            }
     }
     else return 0;
     
      int **src=(int**)malloc(n*sizeof(int*));
      if (src!=NULL)
      {
                    for (i=0;i<n;i++)
                        {
                        src[i]=(int*)malloc(n*sizeof(int)) ;
                        if (src[i]==NULL) return 0;
                        }
      }
      else return 0;
      k=0;
      for(i=0;i<n;i++)
        { 
           for(j=0;j<n;j++)
             {
                      src[i][j]=k++;
             }
        }
      
      copyMatrix(&dest, src, n);

      for(i=0;i<n;i++)
      { 
        for(j=0;j<n;j++)
        {     
          printf("%d", dest[i][j]);
        }              
      }     
                  
      for(i=0; i<n; i++)
            { 
              free(src[i]), free(dest[i]);
            } 
            
            system("pause");
      
}               
                      
                      
                      
                      
      
