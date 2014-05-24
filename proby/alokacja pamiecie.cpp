#include <stdio.h>
#include <stdlib.h>
#include <string.h>
# define ROZMIAR 6
 
void deleteLastChar(char** tab)
{    int i;
     char* tymcz=(char*)malloc((NOWYROZM-2)* sizeof(char));
     if( tymcz!= NULL)
     {
     for (i=0; i<NOWYROZM-2; i++)
     *(tymcz+i)=*(*tab+i);
     *(tymcz+NOWYROZM-1)='\0';
     strlen (*tab)= NOWYROZM;
     printf(" %c", *(tab));
     }
}

void main()
{
    char tab[ROZMIAR]="MAGDA";
    
     
     
     }
