# include <stdio.h>
# include <math.h>
# include <stdlib.h>

struct zespolona
{
    float re;
    float im;
    };


struct zespolona dodawanie( struct zespolona x, struct zespolona y)
{
struct zespolona wynik;
wynik.re = x.re+y.re;
wynik.im=x.im+y.im;
return wynik;
}

float modulzesp (struct zespolona x)
{
float modul;
modul=sqrt(x.re*x.re+x.im*x.im);
return modul;
}


int main()

{

struct zespolona x;
printf("podaj czesc rzeczywista liczby zespolonej\n");
scanf("%f",&x.re);
printf("podaj czesc urojona liczby zespolonej\n");
scanf("%f",&x.im);

struct zespolona y;
printf("podaj czesc rzeczywista drugiej liczby zespolonej\n");
scanf("%f",&y.re);
printf("podaj czesc urojona drugiej liczby zespolonej\n");
scanf("%f",&y.im);

struct zespolona wynik=dodawanie (x,y);
printf(" wynik dodawania to %.2f %+.2fi\n", wynik.re, wynik.im);

float modul1=  modulzesp(x);
printf(" modul pierwszej liczby to %.2f\n", modul1);
float modul2=  modulzesp(y);
printf(" modul drugiej liczby to %.2f\n", modul2);
system("pause");}
