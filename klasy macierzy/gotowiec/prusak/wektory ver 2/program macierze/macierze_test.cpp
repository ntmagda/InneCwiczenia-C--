/*
	Rafal Prusak, AiR, Gr.3, RokI, W.EAIiIB, rafal.prusak@gmail.com
*/

#include <iostream>
#include <cstdlib>

using namespace std;

#include "macierze.h"

int main(){
	cout<<"WITAJ W PROGRAMIE TESTOWYM DLA MACIERZY"<<endl<<endl;
	int wybor=0;
	int wiersze1,kolumny1;
	
	do{
		cout<<"co chcesz zrobic? "<<endl;
    	cout<<"1:macierz + macierz"<<endl;
    	cout<<"2:macierz - macierz"<<endl;
    	cout<<"3:macierz * macierz"<<endl;
    	cout<<"4:macierz * liczba"<<endl;
    	cout<<"5:liczba * macierz"<<endl;
    	cout<<"6:macierz == macierz"<<endl;
    	cout<<"7:macierz != macierz"<<endl;
    	cout<<"8:macierz += macierz"<<endl;
    	cout<<"9:macierz -= macierz"<<endl;
    	cout<<"10:macierz *= liczba"<<endl;
    	cout<<"12:macierz[][]"<<endl;
    	cout<<"0:Exit"<<endl<<"wybierz opcje: ";
    	cin>>wybor;
    	
    	switch(wybor){
    		default: cout<<"ERROR!!!"<<endl;
    		
    		case 0:
      		{
        		wybor = 0;
      		}
      		break;
      		
      		case 1:
      		{
      			system("cls");  
        		cout<<"WYBRANO: macierz + macierz"<<endl;
        		
        		cout<<"podaj liczbe wierszy: ";
        		cin>>wiersze1;
        		cout<<"podaj liczbe kolumn: ";
        		cin>>kolumny1;
        		matrix macierz1(wiersze1,kolumny1);
        		matrix macierz2(wiersze1,kolumny1);
        		
        		cout<<"podaj pierwsza macierz:"<<endl;
        		cin>>macierz1;
        		cout<<"podaj druga macierz:"<<endl;
        		cin>>macierz2;
        		
        		system("cls");
        		cout<<macierz1<<endl<<" + "<<endl<<macierz2<<endl<<" = "<<endl<<macierz1+macierz2<<endl;
        		
        		system("pause");
        		system("cls");
      		}
      		break;
      		
      		case 2:
      		{
      			system("cls");  
        		cout<<"WYBRANO: macierz - macierz"<<endl;
        		
        		cout<<"podaj liczbe wierszy: ";
        		cin>>wiersze1;
        		cout<<"podaj liczbe kolumn: ";
        		cin>>kolumny1;
        		matrix macierz1(wiersze1,kolumny1);
        		matrix macierz2(wiersze1,kolumny1);
        		
        		cout<<"podaj pierwsza macierz:"<<endl;
        		cin>>macierz1;
        		cout<<"podaj druga macierz:"<<endl;
        		cin>>macierz2;
        		
        		system("cls");
        		cout<<macierz1<<endl<<" + "<<endl<<macierz2<<endl<<" = "<<endl<<macierz1-macierz2<<endl;
        		
        		system("pause");
        		system("cls");
      		}
      		break;
      		
      		case 3:
      		{
      			system("cls");  
        		cout<<"WYBRANO: macierz * macierz"<<endl;
        		
        		int wiersze2,kolumny2;
        		
        		cout<<"podaj liczbe wierszy dla pierwszej macierzy: ";
        		cin>>wiersze1;
        		cout<<"podaj liczbe kolumn dla pierwszej macierzy: ";
        		cin>>kolumny1;
        		
        		cout<<"podaj liczbe wierszy dla drugiej macierzy: ";
        		cin>>wiersze2;
        		cout<<"podaj liczbe kolumn dla drugiej macierzy: ";
        		cin>>kolumny2;
        		
        		if(kolumny1 == wiersze2){
        		
        			matrix macierz1(wiersze1,kolumny1);
        			matrix macierz2(wiersze2,kolumny2);
        		
        			cout<<"podaj pierwsza macierz:"<<endl;
        			cin>>macierz1;
        			cout<<"podaj druga macierz:"<<endl;
        			cin>>macierz2;
        		
        			system("cls");
        			cout<<macierz1<<endl<<" * "<<endl<<macierz2<<endl<<" = "<<endl<<macierz1*macierz2<<endl;
        		
        			system("pause");
        			system("cls");
        		}else{
        			system("cls");
        			cout<<"wymiar sie nie zgadzaja!"<<endl;
        			system("pause");
        			system("cls");
        		}
      		}
      		break;
      		
      		case 4:
      		{
      			system("cls");  
        		cout<<"WYBRANO: macierz * liczba"<<endl;
        		
        		cout<<"podaj liczbe wierszy: ";
        		cin>>wiersze1;
        		cout<<"podaj liczbe kolumn: ";
        		cin>>kolumny1;
        		matrix macierz1(wiersze1,kolumny1);
        		cout<<"podaj pierwsza macierz:"<<endl;
        		cin>>macierz1;
        		cout<<"podaj liczbe"<<endl;
				int liczba;
        		cin>>liczba;
        		
        		system("cls");
        		cout<<macierz1<<endl<<" * "<<endl<<"("<<liczba<<")"<<endl<<" = "<<endl<<macierz1*liczba<<endl;
        		
        		system("pause");
        		system("cls");
      		}
      		break;
      		
      		case 5:
      		{
      			system("cls");  
        		cout<<"WYBRANO: macierz * liczba"<<endl;
        		
				cout<<"podaj liczbe"<<endl;
				int liczba;
        		cin>>liczba;
        		cout<<"podaj liczbe wierszy: ";
        		cin>>wiersze1;
        		cout<<"podaj liczbe kolumn: ";
        		cin>>kolumny1;
        		matrix macierz1(wiersze1,kolumny1);
        		cout<<"podaj pierwsza macierz:"<<endl;
        		cin>>macierz1;
        		
        		system("cls");
        		cout<<"("<<liczba<<")"<<endl<<" * "<<endl<<macierz1<<endl<<" = "<<endl<<liczba*macierz1<<endl;
        		
        		system("pause");
        		system("cls");
      		}
      		break;
      		
      		case 6:
      		{
      			system("cls");  
        		cout<<"WYBRANO: macierz == macierz"<<endl;
        		
        		cout<<"podaj liczbe wierszy: ";
        		cin>>wiersze1;
        		cout<<"podaj liczbe kolumn: ";
        		cin>>kolumny1;
        		matrix macierz1(wiersze1,kolumny1);
        		matrix macierz2(wiersze1,kolumny1);
        		
        		cout<<"podaj pierwsza macierz:"<<endl;
        		cin>>macierz1;
        		cout<<"podaj druga macierz:"<<endl;
        		cin>>macierz2;
        		
        		system("cls");        		
        		cout<<macierz1<<endl<<" == "<<endl<<macierz2<<endl;
        		if(macierz1 == macierz2) cout<<"PRAWDA"<<endl;
        		else cout<<"FA£SZ"<<endl;
        		
        		system("pause");
        		system("cls");
      		}
      		break;
      		
      		case 7:
      		{
      			system("cls");  
        		cout<<"WYBRANO: macierz != macierz"<<endl;
        		
        		cout<<"podaj liczbe wierszy: ";
        		cin>>wiersze1;
        		cout<<"podaj liczbe kolumn: ";
        		cin>>kolumny1;
        		matrix macierz1(wiersze1,kolumny1);
        		matrix macierz2(wiersze1,kolumny1);
        		
        		cout<<"podaj pierwsza macierz:"<<endl;
        		cin>>macierz1;
        		cout<<"podaj druga macierz:"<<endl;
        		cin>>macierz2;
        		
        		system("cls");        		
        		cout<<macierz1<<endl<<" != "<<endl<<macierz2<<endl;
        		if(macierz1 != macierz2) cout<<"PRAWDA"<<endl;
        		else cout<<"FA£SZ"<<endl;
        		
        		system("pause");
        		system("cls");
      		}
      		break;
      	
      		case 8:
      		{
      			system("cls");  
        		cout<<"WYBRANO: macierz += macierz"<<endl;
        		
        		cout<<"podaj liczbe wierszy: ";
        		cin>>wiersze1;
        		cout<<"podaj liczbe kolumn: ";
        		cin>>kolumny1;
        		matrix macierz1(wiersze1,kolumny1);
        		matrix macierz2(wiersze1,kolumny1);
        		
        		cout<<"podaj pierwsza macierz:"<<endl;
        		cin>>macierz1;
        		cout<<"podaj druga macierz:"<<endl;
        		cin>>macierz2;        		
        		
        		system("cls"); 
        		cout<<macierz1<<endl<<" += "<<endl<<macierz2<<endl;
        		macierz1 += macierz2;
        		cout<<endl<<"macierz"<<" = "<<endl<<macierz1<<endl;
        		
        		system("pause");
        		system("cls");
      		}
      		break;
      		
      		case 9:
      		{
      			system("cls");  
        		cout<<"WYBRANO: macierz -= macierz"<<endl;
        		
        		cout<<"podaj liczbe wierszy: ";
        		cin>>wiersze1;
        		cout<<"podaj liczbe kolumn: ";
        		cin>>kolumny1;
        		matrix macierz1(wiersze1,kolumny1);
        		matrix macierz2(wiersze1,kolumny1);
        		
        		cout<<"podaj pierwsza macierz:"<<endl;
        		cin>>macierz1;
        		cout<<"podaj druga macierz:"<<endl;
        		cin>>macierz2;        		
        		
        		system("cls"); 
        		cout<<macierz1<<endl<<" -= "<<endl<<macierz2<<endl;
        		macierz1 -= macierz2;
        		cout<<endl<<"macierz"<<" = "<<endl<<macierz1<<endl;
        		
        		system("pause");
        		system("cls");
      		}
      		break;
      		
      		case 10:
      		{
      			system("cls");  
        		cout<<"WYBRANO: macierz *= liczba"<<endl;
      			cout<<"podaj liczbe"<<endl;
				int liczba;
        		cin>>liczba;
        		cout<<"podaj liczbe wierszy: ";
        		cin>>wiersze1;
        		cout<<"podaj liczbe kolumn: ";
        		cin>>kolumny1;
        		matrix macierz1(wiersze1,kolumny1);
        		cout<<"podaj macierz:"<<endl;
        		cin>>macierz1;
        		
        		system("cls");
        		cout<<macierz1<<endl<<" *= "<<endl<<liczba<<endl;
        		macierz1 *= liczba;
        		cout<<endl<<"macierz"<<" = "<<endl<<macierz1<<endl;
        		
        		system("pause");
        		system("cls");
      		}
      		break;
      	
      		case 12:
      		{
      			system("cls");  
        		cout<<"WYBRANO: macierz[][]"<<endl;
        		
        		cout<<"podaj liczbe wierszy: ";
        		cin>>wiersze1;
        		cout<<"podaj liczbe kolumn: ";
        		cin>>kolumny1;
        		matrix macierz1(wiersze1,kolumny1);
        		cout<<"podaj macierz:"<<endl;
        		cin>>macierz1;
        		
        		cout<<"podaj pierwsza wsplozedna:"<<endl;
        		cin>>wiersze1;
				cout<<"podaj druga wsplozedna:"<<endl;
        		cin>>kolumny1;
        		
        		system("cls");
        		cout<<"macierz["<<wiersze1<<"]["<<kolumny1<<"] = "<<macierz1[wiersze1][kolumny1]<<endl;
        		        		
        		system("pause");
        		system("cls");
      		}
      		break;
           		
    	}
     	
	}while(wybor!=0);
	
	getchar();
	return 0;
}
