#ifndef MACIERZ_H_
#define MACIERZ_H_

#include "wektor.h"
#include<iostream>
using namespace std;

class Macierz {
	int col;
	int row;
	Wektor **mat;
public:

	/*konstruktor*/
	Macierz(int _col = 2, int _row = 2);

	/*destruktor*/
	~Macierz();

	/*przeciazenie operatora ' [] '*/
	Wektor &operator[](const int i);

	/*przeciazenie operatora ' = '*/
	Macierz &operator=(Macierz &a);

	/*przeciazeenie operatora ' *= ' dla skalara*/
	Macierz &operator*=(double skalar);

	/*przeciazenie operatora '*' dla skalar */
	Macierz &operator*(double skalar);

	/*przeciazenie operatora ' += '*/
	Macierz &operator+=(Macierz &v);

	/*przeciazenie operator '+' */
	Macierz &operator+(Macierz &v);

	/*przeciazenie operatora ' -= '*/
	Macierz &operator-=(Macierz &v);

	/*przeciazenie operatora ' -'*/
	Macierz &operator-(Macierz &v);

	/*przeciazenie operatora ' *= ' macierz razy macierz*/
	Macierz &operator*=(Macierz &v);

	/*przeciazenie operator '*' macierz razy macierz*/
	Macierz &operator*(Macierz &v);

	/*przeciazenie operator '==' */
	double operator==(Macierz &a);

	/*przeciazenie operator '!=' */
	double operator!=(Macierz &a);

	void zero();

	/*funkcja zaprzyjazniona*/
	friend ostream& operator <<(ostream& os, const Macierz& v);

	/*funkcja zaprzyjazniona */
	friend istream& operator >>(istream& os, const Macierz& v);

};

#endif /* MACIERZ_H_ */
