# include <iostream>
# include <cstring>
using namespace std;

template <typename T>
class Wektor
{
	private:
		int rozmiar;
		T *tab;
	public:
		Wektor(); // domyslny
		~Wektor(); //destruktor bedzie musial niszczyc za pomoca delete
		Wektor(const Wektor<T> & k); // kopiujacy
		Wektor(int k); // k wymiarowy
		// przeciazenia operatorow
		bool operator!=(const Wektor<T> & a);
		bool operator==(const Wektor<T> & a);
		Wektor& operator=(const Wektor<T> & a);
		T & operator[](int i);
		void wstaw(T obiekt, int i); //wstawianie elem do wekt w zadanym miejscu przed Wektor[i] (moze zrobic bez T obiekt?)
		void usun(int i); // usuwa i-ty element		
		void powieksz(int k); // dodaje na koncu k pustych elementow;
		void usun_all(); //oproznianie wektora
		int wielkosc(); // Pobranie wielkosci wektora;
		void wczytaj_f (); // funkcja wczytujaca z pliku plik do Wektora o nazwie wektor
		template <typename T2> 
		friend class Iterator;
		template <typename T1>		
		friend ostream & operator<< ( ostream & a, const  Wektor<T1> & b);
		template <typename T1>
		friend istream & operator>> ( istream & a, const  Wektor<T1> & b);
					
		
};


