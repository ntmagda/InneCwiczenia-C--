#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ROZMIAR 6

void deleteLastChar(char** tab)
{
    int n;
    n=strlen(*tab);

    char *temp = (char*) malloc((n-1)*sizeof(char));
    if(temp!=NULL)
    {
        int x;
        for(x=0; x<n-1; x++) *(temp+x)=*(*tab+x);
        *(temp+n-1)='\0';
        puts(temp);
        free(*tab);
        *tab=temp;
    } 
}

int main()
{
    char tekst[ROZMIAR] = "MAGDA";
    char *tab = (char*) malloc(ROZMIAR*sizeof(char));

    int j;
    for(j=0; j<ROZMIAR; j++) *(tab+j)=tekst[j];    

    if(tab!=NULL)
    {
    int i;
    for(i=0;i<ROZMIAR-2;i++) deleteLastChar(&tab); 
    }
    else printf("Blad alokacji");
    system("pause");
}
