#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ROZMIAR 6
void deleteLastChar(char** tab)
{int n;
 n=strlen(*tab);
 char *temp = (char*) malloc((n-1)*sizeof(char));
 if(temp!=NULL)
 {
   int x;
   for(x=0; x<n-2; x++)
            { *(temp+x)=*(*tab+x);
            *(temp+n-1)='\0';
            }
      int i;
      for(i=0;i<n-1;i++) printf("%d", temp[i]);
      
}      
}
int main()
{
char *tab = "MAGDA";
if(tab!=NULL)
{
int i;
for(i=0;i<ROZMIAR;i++) deleteLastChar(&tab); 
}
else printf("Blad alokacji");
getch();
}
