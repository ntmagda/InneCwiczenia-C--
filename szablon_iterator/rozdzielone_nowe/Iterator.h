# include <iostream>
# include "Wektorsz.h"

template <typename T>
class Iterator
{

	private:
		T * ptr;	
		Wektor<T> obiekt;
		
	public:
		Iterator(); // domyslny
		Iterator( Wektor<T> & a); 
		~Iterator();
		void show(int i); // pokazuje obiekt Wektor[i]
		void change(int i);// zmienia i-ta Zabawke w obiekcie Wektora 
		T * skok(int i); // skok za Wektor[i]; zwraca wskaznik do obiektu Wektor[i];
		T & operator++();
		T & operator--();


};
