# include <stdio.h>
# include <stdlib.h>

char znak( char el, int x, int y)
    {      int i, j;
           for(j=0; j<=y; j++)
           {
                    for (i=0; i<=x; i++)
                    { putchar(el);} 
           printf("\n");}
          
          } 
int main()


{
    int el,x,y;
    printf("podaj znak jaki chcesz wypisac:\n");
    scanf("%c", &el);
    printf("podaj ilosc wierszy:\n");
    scanf("%d", &x);
    printf(" podaj ilosc kolumn:\n");
    scanf("%d", &y);
    znak( el,x,y);
      
    system("pause");
  }
