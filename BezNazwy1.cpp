#include <stdio.h>
#include <stdlib.h>
void copyMatrix(int*** dest, int** src, int n)
{

    int x,y;  
    for (x = 0; x < n; ++x)      
            for (y = 0; y < n; ++y)
            
            {
               * dest[x][y] = (src)[x][y];   
                   
            }   
           
    
}

main()
{
            int n;
            printf("podaj rozmiar tablicy src\n");
            scanf("%d",&n);
            
            int ***dest;
            dest = (int***)malloc(n*sizeof(int**));
            if(dest!=NULL)
            {
                int i;
                for(i=0;i<n;i++)
                dest[i]=(int**)malloc(n*sizeof(int*));
                if(dest[i]==NULL)
                {
                    printf("blad alokacji/n");
                    return 0;
                }
                    else return 0;
            }
            
            
            int **src;
            src = (int**)malloc(n*sizeof(int*));
            if(src!=NULL)
            {
                int i;
                for(i=0;i<n;i++)
                src[i]=(int*)malloc(n*sizeof(int));
                if(src[i]==NULL)
                {
                    printf("blad alokacji/n");
                    return 0;
                }
                else return 0;
                
            }
            
            int x,y,k;
            k=0;
            for(x=0;x<n;x++)
            {
               for(y=0;y<n;y++)
                 {
                          src[x][y]=k++;
                 }
            }
                
                    copyMatrix(dest, src, n);
                    if(dest != NULL)
                        {
                            copyMatrix(dest,src,n);
                            for(x=0;x<n;x++)
                                {
                                    for(y=0;y<n;y++)
                                    printf("%d\t",dest[x][y]);
                                }   
                            printf("/n");
                           
                        
                        }
                    else printf("blad alokacji\n");
                    return 0;
                       
                         int i;
                         for(i=0; i<n; i++)
                    {
                      free(src[i]);
                      free(dest[i]);
                    }
                system("pause");                
                    
      
}
