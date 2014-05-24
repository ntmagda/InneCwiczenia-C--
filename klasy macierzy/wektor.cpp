#include<iostream>
#include<assert.h>
#include "wektor.h"
using namespace std;


Wektor::Wektor(int n) //konstruktor
{  
           int* tab;       
           tab = new int[rozmiar];
                  
           }

           
void Wektor::uzupelnij() //uzupelnianie
{
           int i;
           for(i=0;i<this->rozmiar;i++)
           {cout<<"Podaj" << i+1 <<" element"<<endl;
           cin>>tab[i];
                           }
                           }
                      
void Wektor::wypisz() //wypisywanie
{
         int i; 
         for (i=0; i<this->rozmiar; i++)
         {
             cout<< tab[i];             
             }
            }
            
Wektor::~Wektor() //destruktor
{
         delete tab;
         
         }
         

Wektor operator+(Wektor & x, Wektor & y) // przeciazenie sumy
         {
        Wektor rezultat(x.rozmiar);
         int i;
                   if(x.rozmiar==y.rozmiar)
                                  { 
                                  for(i=0; i<x.rozmiar; i++)
                                  {
                                           rezultat.tab[i]=x.tab[i]+y.tab[i];
                                           return rezultat;
                                           }
                           } 
                           else cout << "Nie mozna dodac wektorow"<< endl;
                           assert(1);
                           
                }
Wektor Wektor:: operator-( Wektor & x)// przeciazenie roznicy
{
       int i;
       Wektor roznica(x.rozmiar);
       if( this->rozmiar!= x.rozmiar)
       {
           for( i=0; i<=x.rozmiar; i++) roznica.tab[i]=this->tab[i]-x.tab[i];
          return *this;
           }
       else cout<< "Rozny rozmiar wektorow"<<endl;
       assert(1);
       
       }

Wektor Wektor:: operator = (Wektor & x) // przeciazenie =
{
       int i;
       if( this->rozmiar== x.rozmiar)
       {
           for( i=0; i<=x.rozmiar; i++) this->tab[i]=x.tab[i];
           return * this;
           
           }
           else cout<< " Rozny rozmiar wektorow"<<endl;
           assert(1);
       
       }
       
Wektor operator*(Wektor & x, Wektor & y) // przeciazenie iloczynu
         {
         Wektor iloczyn(x.rozmiar);
         int i;
                   if(x.rozmiar==y.rozmiar)
                                  { 
                                  for(i=0; i<x.rozmiar; i++)
                                  iloczyn.tab[i]=x.tab[i]*y.tab[i];
                                  return iloczyn;
                           } 
                           else cout << "Nie mozna dodac wektorow"<< endl;
                           assert(1);
       
       }


Wektor Wektor:: operator+= (Wektor & x) // przeciazenie +=
{
       int i;
       if( this->rozmiar== x.rozmiar)
       {
           for( i=0; i<=x.rozmiar; i++) this->tab[i]=this->tab[i]+x.tab[i];
           return * this;
           
           }
           else cout<< " Rozny rozmiar wektorow"<<endl;
           assert(1);
}

Wektor Wektor:: operator-= (Wektor & x) // przeciazenie -=
{
       int i;
       if( this->rozmiar== x.rozmiar)
       {
           for( i=0; i<=x.rozmiar; i++) this->tab[i]=this->tab[i]-x.tab[i];
           return * this;
           
           }
           else cout<< " Rozny rozmiar wektorow"<<endl;
           assert(1);
}

Wektor Wektor:: operator*= (Wektor & x) // przeciazenie *=
{
       int i;
       if( this->rozmiar== x.rozmiar)
       {
           for( i=0; i<=x.rozmiar; i++) this->tab[i]=this->tab[i]*x.tab[i];
           return * this;
           
           }
           else cout<< " Rozny rozmiar wektorow"<<endl;
           assert(1);
}

bool operator==( Wektor & x, Wektor &y) // przeciazenie ==
{
     int i;
     if( x.rozmiar == y.rozmiar)
     {
         for ( i=0; i<= x.rozmiar; i++)
         {
             if(x.tab[i]==y.tab[i])
             return true;
             else return false;
             }
     }
     else return false;
     }
bool operator!=( Wektor & x, Wektor &y) // przeciazenie !=
{
     int i;
     if( x.rozmiar==y.rozmiar)
     {
         for ( i=0; i<= x.rozmiar; i++)
         {
             if(x.tab[i]==y.tab[i])
             return false;
             else return true;
             }
     }
     else return true;
     }
     
int Wektor:: operator[] (int n) //indeksowanie
{
       if( n>= this-> rozmiar || n< 0) cout << " Nie da siê wypisac " << endl;
       else
       return this->tab[n];
       
       }


