# include <iostream>

template <typename T>
class Iterator
{
	public:
		void show(Wektor<T> obiekt, int i); // pokazuje obiekt Wektor[i]
		T & change(Wektor<T> obiekt);// zmienia i-ta Zabawke w obiekcie Wektora 
		T * skok(Wektor<T> obiekt, int i); // skok za Wektor[i]; zwraca wskaznik do obiektu Wektor[i];
};





