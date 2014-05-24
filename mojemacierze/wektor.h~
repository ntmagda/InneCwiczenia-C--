# include <iostream>
using namespace std;

class Wektor{

	private:
		int rozmiar;
		int *tab;
	public:
		Wektor(); // domyslny
		~Wektor(); //destruktor bedzie musial niszczyc za pomoca delete
		Wektor(const Wektor & k); // kopiujacy
		Wektor(int k); // k wymiarowy
		// przeciazenia operatorow =, +, -, *, ==, !=, [], <<, >>, +=,-=, *= 
		Wektor operator+(const Wektor & a);
		Wektor& operator+=(const Wektor & a);
		Wektor operator-(const Wektor & a);
		Wektor& operator-=(const Wektor & a);
		Wektor operator*(int a); // Wektor * liczba
		Wektor& operator*=(int a); 
		Wektor operator*(const Wektor & a); //iloczyn skalarny
 		Wektor& operator*=(const Wektor & a);
		bool operator!=(const Wektor & a);
		bool operator==(const Wektor & a);
		Wektor& operator=(const Wektor & a);
		int & operator[](int i);
		friend ostream & operator<< ( ostream & a, const  Wektor & b);
		friend istream & operator>> ( istream & a, const  Wektor & b);
		
};
