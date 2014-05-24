#include "macierz.h"

/*konstruktor*/
Macierz::Macierz(int _col, int _row) :
		col(_col), row(_row) {
	mat = new Wektor*[col];
	for (int i = 0; i < col; i++) {
		mat[i] = new Wektor(row);
	}
	for (int i = 0; i < col; i++) {
		(mat[i])->zero();
	}
}
;
/*destruktor*/
Macierz::~Macierz() {
	for (int i = 0; i < col; i++) {
		delete mat[i];
	}
	//delete mat;
}
;
/*przeciazenie operatora ' [] '*/
Wektor &Macierz::operator[](const int i) {
	return *mat[i];
}
/*przeciazenie operatora ' = '*/
Macierz &Macierz::operator=(Macierz &a) {
	delete[] this->mat;
	this->mat = new Wektor*[a.col];
	for (int i = 0; i < a.col; i++) {
		this->mat[i] = new Wektor(a.row);
		(*this->mat[i]) = *(a.mat[i]);
	}
	this->col = a.col;
	this->row = a.row;
	return *this;
}

/*przeciazeenie operatora ' *= ' dla skalara*/
Macierz &Macierz::operator*=(double skalar) {
	for (int i = 0; i < this->col; i++) {
		*(this->mat[i]) *= skalar;
	}
	return *this;
}
/*przeciazenie operatora '*' dla skalar */
Macierz &Macierz::operator*(double skalar) {
	static Macierz matrix(this->col, this->row);
	matrix = *this;
	for (int i = 0; i < this->col; i++) {
		*(matrix.mat[i]) *= skalar;
	}

	return matrix;
}
/*przeciazenie operatora ' += '*/
Macierz &Macierz::operator+=(Macierz &v) {
	if (v.col == this->col) {
		for (int i = 0; i < this->col; i++) {
			*(this->mat[i]) += *(v.mat[i]);
		}
		return *this;
	} else{
		cout << "Nie da sie dodac macierzy" << endl;
		return *this;
	}
}
/*przeciazenie operator '+' */
Macierz &Macierz::operator+(Macierz &v) {
	static Macierz matrix(this->col, this->row);
	if (this->col == v.col) {
		matrix = v;
		matrix += *this;
		return matrix;
	} else
		return *this;
}
/*przeciazenie operatora ' -= '*/
Macierz &Macierz::operator-=(Macierz &v) {
	if (v.col == this->col) {
		Macierz matrix(v.col, v.row);
		matrix = v;
		matrix *= -1;
		*this += matrix;
		return *this;
	} else{
		cout << "Nie da sie odjac tych macierzy " << endl;
		return *this;
	}
}
Macierz &Macierz::operator-(Macierz &v) {
	if (this->row == v.col) {
		static Macierz matrix(this->col, this->row);
		matrix = *this;
		matrix -= v;
		return matrix;
	} else{
		cout << "Nie da sie odjac macierzy" << endl;
		return *this;
	}
}
/*przeciazenie operatora ' *= ' macierz razy macierz*/
Macierz &Macierz::operator*=(Macierz &v) {
	int suma = 0;
	if (this->row == v.col) {
		Macierz matrix(this->col, v.row);
		Wektor tmp(v.col);
		for (int k = 0; k < this->col; k++) {
			for (int i = 0; i < v.row; i++) {
				for (int j = 0; j < v.col; j++) {
					tmp[j] = v[j][i];
				}
				suma = (*(this->mat[k]) *= tmp);
				matrix[k][i] = suma;
			}
		}
		*this = matrix;
		return *this;
	} else{
		cout << "Nie da sie wymnozyc takich macierzy !!!" << endl;
		return *this;
	}
}
/*przeciazenie operator '*' macierz razy macierz*/
Macierz &Macierz::operator*(Macierz &v) {
	static Macierz matrix(this->col, v.row);
	if (this->row == v.col) {
		matrix = *this;
		matrix *= v;

		return matrix;
	} else {
		cout << "Nie da sie wymnozyc takich macierzy";
		return *this;
	}
}

/*przeciazenie operator '==' */
double Macierz::operator==(Macierz &a) {
	if (this->col == a.col) {
		double wynik = 0;
		for (int i = 0; i < a.col; i++) {
			wynik += ((*this->mat[i]) == *(a.mat[i]));
		}
		if (wynik == 0)
			return 0;
		else
			return 1;
	} else
		return 1;
}
/*przeciazenie operator '!=' */
double Macierz::operator!=(Macierz &a) {
	return !(*this == a);
}
/*funkcja zaprzyjazniona*/

void Macierz::zero() {
	for (int i = 0; i < col; i++) {
		(mat[i])->zero();
	}
}

/*** ***/
ostream& operator <<(ostream& os, const Macierz& v) {
	for (int i = 0; i < v.col; i++) {
		os << *(v.mat[i]);
		os << endl;
	}
	return os;
}
istream& operator >>(istream& is, const Macierz& v) {
	for (int i = 0; i < v.col; i++) {
		is >> *(v.mat[i]);
	}
	return is;
}
