# include <iostream>
# include <cstring>
class Zabawka
{
	private: 
		string nazwa;
		string adres;
	public:
		Zabawka(); // domyslny
		~Zabawka(); //destruktor bedzie musial niszczyc za pomoca delete
		Zabawka(const Zabawka & k); // kopiujacy
		// przeciazenia operatorow
		bool operator!=(const Zabawka & a);
		bool operator==(const Zabawka & a);
		Wektor& operator=(const Zabawka & a);
};

template <typename T>
class Wektor
{
	private:
		int rozmiar;
		T *tab;
	public:
		Wektor(); // domyslny
		~Wektor(); //destruktor bedzie musial niszczyc za pomoca delete
		Wektor(const Wektor & k); // kopiujacy
		Wektor(int k); // k wymiarowy
		// przeciazenia operatorow
		bool operator!=(const Wektor & a);
		bool operator==(const Wektor & a);
		Wektor& operator=(const Wektor & a);
		int & operator[](int i);
		Wektor & wstaw(T obiekt, int i); //wstawianie elementu do wektora w zadanym miejscu za Wektor[i] (moze zrobic bez T obiekt?)
		Wektor & usun(int i) // usuwa i-ty element		
		Wektor & zmiana_wielk(int k); // zmiana wielkosci na wektor o k elementach
		Wektor & usun_all(); //oproznianie wektora
		int wielkosc(); // Pobranie wielkosci wektora;
		friend ostream & operator<< ( ostream & a, const  Wektor & b);
		friend istream & operator>> ( istream & a, const  Wektor & b);
		friend class Iterator;		
		
};


template <typename T>
class Iterator
{
	public:
		void show(T & obiekt);
		T & change(T & obiekt);
		T * skok(int i); // skok za Wektor[i];
};


	Wektor & wczytaj_f(string plik, Wektor & wektor); // funkcja wczytujaca z pliku plik do Wektora o nazwie wektor











