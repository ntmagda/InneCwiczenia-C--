# include <stdio.h>
# include <stdlib.h>
# define ROZMIAR 30

char element( char el, char tab[])
    {      int i, licznik;
           licznik=0;
           for(i=0; tab[i]!='\0'; i++)
                    {
                             if(tab[i]==el)
                             licznik++;
                     }
           return licznik;
          } 
int main()
{   char tab[ROZMIAR];
    char el;
    printf(" podaj napis:\n");
    fgets(tab, ROZMIAR, stdin);
    printf(" podaj element do znalezienia:\n");
    scanf("%c", &el);
    printf("tych elementow jest %d\n", element(el, tab));
      
    system("pause");
  }
