# include <iostream>
# include "Zabawka.h"
# include "Wektorsz.h"
# include "Iterator.h"
using namespace std;

int main(){

	Wektor<Zabawka>baza_danych; // Tworze Wektor ktory bedzie przechowywal baze danych

	Zabawka *zabawka = new Zabawka("Toys" , " ul.Na" );
	cout << *zabawka;

	













}
