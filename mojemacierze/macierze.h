# include <iostream>
# include "wektor.cpp"
using namespace std;

class Macierz{

	private:
		int liczba_wek;
		int wymiar_wek;
		Wektor **mat;
	public:
		Macierz();// domyslny
		~Macierz();// destruktor bedzie musial niszczyc za pomoca delete wszystkie wektory i wywolywac ich destruktory
		Macierz(const Macierz & k); // kopiujacy
		Macierz(int r, int c); // r - liczba wektorow c - wymiar wektorow (ustawiany na 0 )
		// przeciazenia operatorow =, +, -, *, ==, !=, [], <<, >>, +=,-=, *= 
		Macierz operator+(const Macierz & a); 
		Macierz & operator+=(const Macierz & a);
		Macierz operator-(const Macierz & a);
		Macierz & operator-=(const Macierz & a);
		Macierz operator*(const Macierz & a); // iloczyn macierzy // trudne
		Macierz operator*(int a); // macierz razy liczba
		Macierz operator*=(int a); // *= macierz razy liczba
		bool operator!=(const Macierz & a); // czy rozne
		bool operator!=(const Macierz & a); // czy takie same
		Macierz& operator=(const Macierz & a); // przypisanie jednej do drugiej
		Wektor & operator[](int m); // indeksacja
		friend ostream & operator<< ( ostream & a, const  Macierz & b);
		friend istream & operator>> ( istream & a, const  Macierz & b);
		
};
