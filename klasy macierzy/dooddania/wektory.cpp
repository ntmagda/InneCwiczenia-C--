#include <iostream>
#include <iomanip>

using namespace std;

#include "wektory.h"

	wektor::wektor(){
		wymiar = 2;
		wartosci = new int[2];
		int i;
		for(i=0;i<wymiar;i++){
			wartosci[i]=0;
		}	
	}	
									
	wektor::wektor(int k){
		wymiar = k;
		wartosci = new int[k];
		int i;
		for(i=0;i<k;i++){
			wartosci[i]=0;
		}	
	}
	
	wektor::wektor(int k,int p){
		wymiar = k;
		wartosci = new int[k];
		int i;
		for(i=0;i<k;i++){
			wartosci[i]=p;
		}	
	}

	wektor::~wektor(){
		delete [] wartosci;
	}
	
	wektor & wektor::operator=(const wektor & p){
		int i;
		for(i=0;i<wymiar;i++){
			wartosci[i] = p.wartosci[i];
		}
		return *this;
	}
	
	wektor  wektor::operator+(const wektor& p){
		wektor result(wymiar);
		int i;
		for(i=0;i<wymiar;i++){
			result.wartosci[i] = wartosci[i] + p.wartosci[i];
		}
		return result;
	}	
	
	wektor  wektor::operator-(const wektor& p){
		wektor result(wymiar);
		int i;
		for(i=0;i<wymiar;i++){
			result.wartosci[i] = wartosci[i] - p.wartosci[i];
		}
		return result;
	}
	
	wektor  wektor::operator*(const int p){
		wektor result(wymiar);
		int i;
		for(i=0;i<wymiar;i++){
			result.wartosci[i] = wartosci[i] * p;
		}
		return result;
	}
	
	int  wektor::operator*(wektor& p){/*naturalny iloczyn skalarny wektorow*/
		int i,result=0;
		for(i=0;i<wymiar;i++){
			result+=wartosci[i]*p.wartosci[i];
		}
		return result;
	}
		
	bool wektor::operator==(const wektor& p){
		int i;
		for(i=0;i<wymiar;i++){
			if(wartosci[i]!=p.wartosci[i]) return 0;
		}
		return 1;	
	}
	
	bool wektor::operator!=(const wektor& p){
		int i;
		for(i=0;i<wymiar;i++){
			if(wartosci[i]!=p.wartosci[i]) return 1;
		}
		return 0;	
	}
	
	wektor & wektor::operator+=(const wektor & p){
		int i;
		for(i=0;i<wymiar;i++) wartosci[i] +=p.wartosci[i];
		return *this;
	}
	
	wektor & wektor::operator-=(const wektor & p){
		int i;
		for(i=0;i<wymiar;i++) wartosci[i] -=p.wartosci[i];
		return *this;
	}
	
	wektor & wektor::operator*=(const int p){
		*this = (*this)*p;
		return *this;
	}
	
	int & wektor::operator[](unsigned int ktory){
		return wartosci[ktory];
	}
	
	wektor operator*(const int k,const wektor& p){/*liczba razy wektor*/

		wektor result(p.wymiar);
		int i;
		for(i=0;i<p.wymiar;i++){
			result.wartosci[i] = p.wartosci[i] * k;
		}
		return result;
	}
	
	ostream & operator<<(ostream &wyjscie,const wektor& p){
	int i;
	for(i=0;i<p.wymiar;i++){
		wyjscie<<setw(2)<<p.wartosci[i];
		if(i!=(p.wymiar - 1)) wyjscie<<" ";
	}
	return wyjscie;
	} 
	
	istream & operator>>(istream &wejscie, wektor& p){
	int i;
	for(i=0;i<p.wymiar;i++){
		cout<<"komorka"<<i+1<<" := ";
		wejscie>>p.wartosci[i];
	}
	return wejscie;
	}

