# include <iostream.h>

class Wektor
{
      
      public:
              int rozmiar;
              int *tab;
              
      public:
             Wektor(int n);   //KONSTRUKTOR
             
             ~Wektor();       //DESTRUKTOR
             
             void uzupelnij();
             void wypisz ();
             friend Wektor operator+(Wektor & x);
             friend Wektor operator*(Wektor & x);
             friend bool operator==(Wektor & x, Wektor & y); 
             friend bool operator!=(Wektor & x, Wektor & y); 
             Wektor operator-(Wektor & x); 
             Wektor operator=(Wektor & x); 
             int operator[](int n); 
             Wektor operator+=(Wektor & x); 
             Wektor operator-=(Wektor & x); 
             Wektor operator*=(Wektor & x); 
             
                  }
      
