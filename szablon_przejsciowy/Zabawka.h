# include <iostream>
# include <cstring>
using namespace std;

class Zabawka
{
	private: 
		string nazwa;
		string adres;
	public:
		Zabawka(); // domyslny
		Zabawka(string nazwa1, string adres1); // z parametrami
		Zabawka(const Zabawka & k); // kopiujacy
		
		// przeciazenia operatorow
		bool operator!=(const Zabawka & a);//+
		bool operator==(const Zabawka & a);//+
		Zabawka & operator=(const Zabawka & a);//+
		friend ostream & operator<< ( ostream & a, const  Zabawka & b);//+
		friend istream & operator>> ( istream & a, Zabawka & b);//+
		Zabawka & change();
};

