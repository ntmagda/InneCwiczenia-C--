#ifndef WEKTOR
#define WEKTOR

using namespace std;

class wektor {
	int wymiar;
	int* wartosci;
	
	public:		
	wektor();									
	wektor(int k);	
	wektor(int k,int p);
	~wektor();	
	wektor & operator=(const wektor & p);	
	wektor  operator+(const wektor& p);	
	wektor  operator-(const wektor& p);	
	wektor  operator*(const int p);	
	int  operator*(wektor& p);/*naturalny iloczyn skalarny wektorow*/		
	bool operator==(const wektor& p);	
	bool operator!=(const wektor& p);	
	wektor & operator+=(const wektor & p);	
	wektor & operator-=(const wektor & p);	
	wektor & operator*=(const int p);	
	int & operator[](unsigned int ktory);	
	friend wektor operator*(const int k,const wektor& p); /*liczba razy wektor*/	
	friend ostream & operator<<(ostream &wyjscie,const wektor& p);	
	friend istream & operator>>(istream &wejscie, wektor& p);
};


#endif
