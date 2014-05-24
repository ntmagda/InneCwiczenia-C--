# include <stdio.h>
# include <stdlib.h>
# define ROZMIAR 60


int main()
{
    int minuty, godziny;
    printf(" podaj liczbe minut:\n");
    scanf("%d", &minuty);
    while(minuty<ROZMIAR)
                          {printf(" twoj czas to: %d", minuty);}
    while(minuty>=ROZMIAR)
                          {godziny = minuty/ROZMIAR;
                          minuty=minuty%ROZMIAR;
                          printf(" twoj czas to: %d godzin i %d minut\n", godziny, minuty);}
    system("pause");
  }
