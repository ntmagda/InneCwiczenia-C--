# include <iostream>
using namespace std;
int main(){

cout << " Prosze podac imie pracownika: " << endl;
				string imie1;
				getline(cin, imie1);
				cout << "Prosze podac nazwisko pracownika: " << endl;
				string nazwisko1;
				getline(cin, nazwisko1);
				cout << " Prosze podac NIP pracownika: " << endl;
				long int NIP1;
				cin >> NIP1;
				cout << "Prosze podac PESEL pracownika: " << endl;
				long int PESEL1;	
				cin >> PESEL1;
				cout << " Prosze podac jakiego typu jest pracownik " << endl;
				cout << " 1) Pracownik stały \t\t 2) Pracownik na zlecenie " << endl;
				cout << " 3) Pracownik handlowiec " << endl;


cout << nazwisko1 << endl << imie1 << endl << NIP1 << endl <<PESEL1<< endl;
}
