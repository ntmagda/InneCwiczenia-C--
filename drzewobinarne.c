#include "deklaracje.h"
#include "funkcje.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{

int wybor;
char imie[20];
char nazwisko[20];
struct wezel *root= NULL; struct wezel * tymcz;
printf("menu:\n");
printf("wpisz 1 aby wprowadzic dane\n");
printf("wpisz 2 aby wypisac kontakty z drzewa binarnego\n");
printf("wpisz 3 aby wyszukac kontakt\n"); 
printf("wpisz 4 aby wypisac pierwszy (w kolejnosci alfabetycznej) kontakt z listy\n");
printf("wpisz 5 aby wypisac ostatni (w kolejnosci alfabetycznej) kontakt z listy\n");
printf("wpisz 6 aby policzyc węzły w drzewie binarnym\n");
printf("wpisz 7 aby okreslic wysokosc drzewa binarnego\n");
scanf("%d", &wybor);
switch(wybor)
{
   while(wybor != 'q' && wybor != 'Q')
    {
        switch(wybor)
        {
            case 1:   root = Insert(root, Create()); 
                        break;
            case 2:   if(root!=NULL)
                            InOrder(root);
                        else
                            puts("Brak kontaktow. \n");
                        break;
            case 3:   if(root==NULL)
                            puts("Brak kontaktow. \n");
                        else
                        {
                            puts("Podaj nazwisko osoby, ktora chcesz wyszukac.");
                            scanf("%c", nazwisko);
                            puts("Podaj imie osoby, ktora chcesz wyszukac.");
                            scanf("%c", imie);
                            tymcz = szukajklucza(root, imie, nazwisko);
                            if(tymcz != NULL)
                                wypisz(tymcz);
                            else
                                puts("Osoba nie znaleziona.\n");
                        }
                        break;
            case 4:   if(root==NULL)
                            puts("Ksiazka jest pusta. \n");
                        else
                            wypisz(min(root)); break;
            case 5:   if(root==NULL)
                            puts("Ksiazka jest pusta. \n");
                        else
                            wypisz(max(root));
                        break;
            case 6:   printf("Liczba wpisow: %d\n", liczba(root)); break;
            case 7:   printf("wysokosc: %d\n", wysokosc(root)); break;
            default:    puts("Wprowadz liczby 1-7 lub q.");
        }

    
 }

