
#include <iostream>
#include <cstdlib>

using namespace std;

#include "macierz.h"

int main(){
	int wybor=0;
	int wiersze1,kolumny1;
	
	do{
		cout<<"Jakie dzialanie chcesz wykonac? "<<endl;
    	cout<<"1 dodawanie macierzy"<<endl;
    	cout<<"2 odejmowanie macierzy"<<endl;
    	cout<<"3 mnozenie macierzy"<<endl;
    	cout<<"4 macierz * liczba"<<endl;
       	cout<<"5 porownanie macierzy"<<endl;
    	cout<<"6 macierz != macierz"<<endl;
    	cout<<"7 macierz += macierz"<<endl;
    	cout<<"8 macierz -= macierz"<<endl;
    	cout<<"9 macierz *= liczba"<<endl;
    	cout<<"10 macierz[][]"<<endl;
    	cout<<"0 Exit"<<endl<<"wybierz opcje: ";
    	cin>>wybor;
    	
    	switch(wybor){
    		default: cout<<"BLAD"<<endl;
    		
    		case 0:
      		{
        		wybor = 0;
      		}
      		break;
      		
      		case 1:
      		{

        		
        		cout<<"podaj liczbe wierszy: ";
        		cin>>wiersze1;
        		cout<<"podaj liczbe kolumn: ";
        		cin>>kolumny1;
        		macierz macierz1(wiersze1,kolumny1);
        		macierz macierz2(wiersze1,kolumny1);
        		
        		cout<<"podaj pierwsza macierz:"<<endl;
        		cin>>macierz1;
        		cout<<"podaj druga macierz:"<<endl;
        		cin>>macierz2;
        		
        		cout<<macierz1<<endl<<" + "<<endl<<macierz2<<endl<<" = "<<endl<<macierz1+macierz2<<endl;
        		
        		system("pause");

      		}
      		break;
      		
      		case 2:
      		{
   
        	
        		cout<<"podaj liczbe wierszy: ";
        		cin>>wiersze1;
        		cout<<"podaj liczbe kolumn: ";
        		cin>>kolumny1;
        		macierz macierz1(wiersze1,kolumny1);
        		macierz macierz2(wiersze1,kolumny1);
        		
        		cout<<"podaj pierwsza macierz:"<<endl;
        		cin>>macierz1;
        		cout<<"podaj druga macierz:"<<endl;
        		cin>>macierz2;
 
        		cout<<macierz1<<endl<<" + "<<endl<<macierz2<<endl<<" = "<<endl<<macierz1-macierz2<<endl;
        		
        		system("pause");
    
      		}
      		break;
      		
      		case 3:
      		{
 
        	
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
        		
        			macierz macierz1(wiersze1,kolumny1);
        			macierz macierz2(wiersze2,kolumny2);
        		
        			cout<<"podaj pierwsza macierz:"<<endl;
        			cin>>macierz1;
        			cout<<"podaj druga macierz:"<<endl;
        			cin>>macierz2;
        		

        			cout<<macierz1<<endl<<" * "<<endl<<macierz2<<endl<<" = "<<endl<<macierz1*macierz2<<endl;
        		
        			system("pause");
        	
        		}else{
        		
        			cout<<"wymiar sie nie zgadzaja!"<<endl;
        			system("pause");
        		
        		}
      		}
      		break;
      		
      		case 4:
      		{
      	 
        		
        		cout<<"podaj liczbe wierszy: ";
        		cin>>wiersze1;
        		cout<<"podaj liczbe kolumn: ";
        		cin>>kolumny1;
        		macierz macierz1(wiersze1,kolumny1);
        		cout<<"podaj pierwsza macierz:"<<endl;
        		cin>>macierz1;
        		cout<<"podaj liczbe"<<endl;
				int liczba;
        		cin>>liczba;
        		
        
        		cout<<macierz1<<endl<<" * "<<endl<<"("<<liczba<<")"<<endl<<" = "<<endl<<macierz1*liczba<<endl;
        		
        		system("pause");
        
      		}
      		break;
      		
      	
      		case 5:
      		{
      			
        		cout<<"podaj liczbe wierszy: ";
        		cin>>wiersze1;
        		cout<<"podaj liczbe kolumn: ";
        		cin>>kolumny1;
        		macierz macierz1(wiersze1,kolumny1);
        		macierz macierz2(wiersze1,kolumny1);
        		
        		cout<<"podaj pierwsza macierz:"<<endl;
        		cin>>macierz1;
        		cout<<"podaj druga macierz:"<<endl;
        		cin>>macierz2;
        		
        	      		
        		cout<<macierz1<<endl<<" == "<<endl<<macierz2<<endl;
        		if(macierz1 == macierz2) cout<<"PRAWDA"<<endl;
        		else cout<<"FA£SZ"<<endl;
        		
        		system("pause");
        	
      		}
      		break;
      		
      		case 6:
      		{
      		  
        	
        		cout<<"podaj liczbe wierszy: ";
        		cin>>wiersze1;
        		cout<<"podaj liczbe kolumn: ";
        		cin>>kolumny1;
        		macierz macierz1(wiersze1,kolumny1);
        		macierz macierz2(wiersze1,kolumny1);
        		
        		cout<<"podaj pierwsza macierz:"<<endl;
        		cin>>macierz1;
        		cout<<"podaj druga macierz:"<<endl;
        		cin>>macierz2;
        		
        		       		
        		cout<<macierz1<<endl<<" != "<<endl<<macierz2<<endl;
        		if(macierz1 != macierz2) cout<<"PRAWDA"<<endl;
        		else cout<<"FA£SZ"<<endl;
        		
        		system("pause");
        	
      		}
      		break;
      	
      		case 7:
      		{
     		
        		cout<<"podaj liczbe wierszy: ";
        		cin>>wiersze1;
        		cout<<"podaj liczbe kolumn: ";
        		cin>>kolumny1;
        		macierz macierz1(wiersze1,kolumny1);
        		macierz macierz2(wiersze1,kolumny1);
        		
        		cout<<"podaj pierwsza macierz:"<<endl;
        		cin>>macierz1;
        		cout<<"podaj druga macierz:"<<endl;
        		cin>>macierz2;        		
        		
        	
        		cout<<macierz1<<endl<<" += "<<endl<<macierz2<<endl;
        		macierz1 += macierz2;
        		cout<<endl<<"macierz"<<" = "<<endl<<macierz1<<endl;
        		
        		system("pause");
        		
      		}
      		break;
      		
      		case 8:
      		{
      		
        		cout<<"podaj liczbe wierszy: ";
        		cin>>wiersze1;
        		cout<<"podaj liczbe kolumn: ";
        		cin>>kolumny1;
        		macierz macierz1(wiersze1,kolumny1);
        		macierz macierz2(wiersze1,kolumny1);
        		
        		cout<<"podaj pierwsza macierz:"<<endl;
        		cin>>macierz1;
        		cout<<"podaj druga macierz:"<<endl;
        		cin>>macierz2;        		
        		
        	
        		cout<<macierz1<<endl<<" -= "<<endl<<macierz2<<endl;
        		macierz1 -= macierz2;
        		cout<<endl<<"macierz"<<" = "<<endl<<macierz1<<endl;
        		
        		system("pause");
        	
      		}
      		break;
      		
      		case 9:
      		{
      			
        	
      			cout<<"podaj liczbe"<<endl;
				int liczba;
        		cin>>liczba;
        		cout<<"podaj liczbe wierszy: ";
        		cin>>wiersze1;
        		cout<<"podaj liczbe kolumn: ";
        		cin>>kolumny1;
        		macierz macierz1(wiersze1,kolumny1);
        		cout<<"podaj macierz:"<<endl;
        		cin>>macierz1;
        		

        		cout<<macierz1<<endl<<" *= "<<endl<<liczba<<endl;
        		macierz1 *= liczba;
        		cout<<endl<<"macierz"<<" = "<<endl<<macierz1<<endl;
        		
        		system("pause");
        		
      		}
      		break;
      	
      		case 10:
      		{
      	
        		cout<<"podaj liczbe wierszy: ";
        		cin>>wiersze1;
        		cout<<"podaj liczbe kolumn: ";
        		cin>>kolumny1;
        		macierz macierz1(wiersze1,kolumny1);
        		cout<<"podaj macierz:"<<endl;
        		cin>>macierz1;
        		
        		cout<<"podaj pierwsza wsplozedna:"<<endl;
        		cin>>wiersze1;
				cout<<"podaj druga wsplozedna:"<<endl;
        		cin>>kolumny1;
        		
        	
        		cout<<"macierz["<<wiersze1<<"]["<<kolumny1<<"] = "<<macierz1[wiersze1][kolumny1]<<endl;
        		        		
        		system("pause");
        	
      		}
      		break;
           		
    	}
     	
	}while(wybor!=0);
	
	getchar();
	return 0;
}
