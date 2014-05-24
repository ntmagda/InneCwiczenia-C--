# include <stdio.h>
# include <stdlib.h>
# define ROZMIAR 10
char * isElement(char tab[], char el)
{
int i;
for( i=0; tab[i]!='\0'; i++)
    { if (tab[i]==el)
        return(&tab[i]);
    }
return 0;
}


int main()
{ 
    char * x;
    char tab[ROZMIAR];
    printf (" wpisz tekst:\n");    
    fgets(tab, ROZMIAR, stdin);
    x=isElement(tab, 'a');
    printf("%d\n", x);      
    system("pause");
  }
