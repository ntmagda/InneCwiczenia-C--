
#include <iostream>
#include <cstdlib>

using namespace std;

#include "wektory.h"


int main(){
	int liczba, wymiar_wek, wybor=0;
	
	do{
		cout<<"Jakie dzialanie chcesz wykonac? "<<endl;
    	cout<<"1 wektor + wektor"<<endl;
    	cout<<"2 wektor - wektor"<<endl;
    	cout<<"3 wektor * liczba"<<endl;
    	cout<<"4 liczba * wektor"<<endl;
    	cout<<"5 wektor * wektor (skalarnie)"<<endl;
    	cout<<"6 wektor == wektor"<<endl;
    	cout<<"7 wektor != wektor"<<endl;
    	cout<<"8 wektor += wektor"<<endl;
    	cout<<"9 wektor -= wektor"<<endl;
    	cout<<"10 wektor *= liczba"<<endl;
    	cout<<"11 wektor[]"<<endl;
    	cout<<"0 Exit"<<endl<<"wybierz opcje: ";
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
        		cout<<"WYBRANO: wektor + wektor"<<endl;
        		
        		cout<<"podaj wymiar wektorow: ";
        		cin>>wymiar_wek;
        		wektor wektor1(wymiar_wek);
        		wektor wektor2(wymiar_wek);
        		cout<<"podaj pierwszy wektor:"<<endl;
        		cin>>wektor1;
        		cout<<"podaj drugi wektor:"<<endl;
        		cin>>wektor2;
        		
        		system("cls");
        		cout<<"("<<wektor1<<")"<<endl<<" + "<<endl<<"("<<wektor2<<")"<<endl<<" = "<<endl<<"("<<wektor1+wektor2<<")"<<endl;
        		
        		system("pause");
        		system("cls");
      		}
      		break;
      		
      		case 2:
      		{
      			system("cls");  
        		cout<<"WYBRANO: wektor - wektor"<<endl;
        		
        		cout<<"podaj wymiar wektorow: ";
        		cin>>wymiar_wek;
        		wektor wektor1(wymiar_wek);
        		wektor wektor2(wymiar_wek);
        		cout<<"podaj pierwszy wektor:"<<endl;
        		cin>>wektor1;
        		cout<<"podaj drugi wektor:"<<endl;
        		cin>>wektor2;
        		
        		system("cls");        		
        		cout<<"("<<wektor1<<")"<<endl<<" - "<<endl<<"("<<wektor2<<")"<<endl<<" = "<<endl<<"("<<wektor1-wektor2<<")"<<endl;
        		
        		system("pause");
        		system("cls");
      		}
      		break;
      		
      		case 3:
      		{
      			system("cls");  
        		cout<<"WYBRANO: wektor * liczba"<<endl;
        		cout<<"podaj wymiar wektora: ";
        		cin>>wymiar_wek;
        		wektor wektor1(wymiar_wek);
        		cout<<"podaj wektor:"<<endl;
        		cin>>wektor1;
        		cout<<"podaj liczbe"<<endl;
        		cin>>liczba;
        		
        		system("cls");
        		cout<<"("<<wektor1<<")"<<endl<<" * "<<endl<<"("<<liczba<<")"<<endl<<" = "<<endl<<"("<<wektor1*liczba<<")"<<endl;
        		
        		system("pause");
        		system("cls");
      		}
      		break;
      		
      		case 4:
      		{
      			system("cls");  
        		cout<<"WYBRANO: liczba * wektor"<<endl;
        		
				cout<<"podaj liczbe"<<endl;
        		cin>>liczba;
        		
        		cout<<"podaj wymiar wektora: ";
        		cin>>wymiar_wek;
        		wektor wektor1(wymiar_wek);
        		cout<<"podaj wektor:"<<endl;
        		cin>>wektor1;
        		
        		system("cls");
        		cout<<"("<<liczba<<")"<<endl<<" * "<<endl<<"("<<wektor1<<")"<<endl<<" = "<<endl<<"("<<wektor1*liczba<<")"<<endl;
        		
        		system("pause");
        		system("cls");
      		}
      		break;
      		
      		case 5:
      		{
      			system("cls");  
        		cout<<"WYBRANO: wektor * wektor (skalarnie)"<<endl;
        		
        		cout<<"podaj wymiar wektorow: ";
        		cin>>wymiar_wek;
        		wektor wektor1(wymiar_wek);
        		wektor wektor2(wymiar_wek);
        		cout<<"podaj pierwszy wektor:"<<endl;
        		cin>>wektor1;
        		cout<<"podaj drugi wektor:"<<endl;
        		cin>>wektor2;
        		
        		system("cls");
        		cout<<"("<<wektor1<<")"<<endl<<" * "<<endl<<"("<<wektor2<<")"<<endl<<" = "<<endl<<"("<<wektor1*wektor2<<")"<<endl;
        		
        		system("pause");
        		system("cls");
      		}
      		break;
      		
      		case 6:
      		{
      			system("cls");  
        		cout<<"WYBRANO: wektor == wektor"<<endl;
        		
        		cout<<"podaj wymiar wektorow: ";
        		cin>>wymiar_wek;
        		wektor wektor1(wymiar_wek);
        		wektor wektor2(wymiar_wek);
        		cout<<"podaj pierwszy wektor:"<<endl;
        		cin>>wektor1;
        		cout<<"podaj drugi wektor:"<<endl;
        		cin>>wektor2;
        		
        		system("cls");
        		cout<<"("<<wektor1<<")"<<" == "<<"("<<wektor2<<")"<<endl;
        		if(wektor1 == wektor2) cout<<"PRAWDA"<<endl;
        		else cout<<"FA£SZ"<<endl;
        		
        		system("pause");
        		system("cls");
      		}
      		break;
      		
      		case 7:
      		{
      			system("cls");  
        		cout<<"WYBRANO: wektor != wektor"<<endl;
        		
        		cout<<"podaj wymiar wektorow: ";
        		cin>>wymiar_wek;
        		wektor wektor1(wymiar_wek);
        		wektor wektor2(wymiar_wek);
        		cout<<"podaj pierwszy wektor:"<<endl;
        		cin>>wektor1;
        		cout<<"podaj drugi wektor:"<<endl;
        		cin>>wektor2;
        		
        		system("cls");
        		cout<<"("<<wektor1<<")"<<" != "<<"("<<wektor2<<")"<<endl;
        		if(wektor1 != wektor2) cout<<"PRAWDA"<<endl;
        		else cout<<"FA£SZ"<<endl;
        		
        		system("pause");
        		system("cls");
      		}
      		break;
      		
      		case 8:
      		{
      			system("cls");  
        		cout<<"WYBRANO: wektor += wektor"<<endl;
        		
        		cout<<"podaj wymiar wektorow: ";
        		cin>>wymiar_wek;
        		wektor wektor1(wymiar_wek);
        		wektor wektor2(wymiar_wek);
        		cout<<"podaj pierwszy wektor:"<<endl;
        		cin>>wektor1;
        		cout<<"podaj drugi wektor:"<<endl;
        		cin>>wektor2;
        		
        		system("cls");
        		cout<<"("<<wektor1<<")"<<endl<<" += "<<endl<<"("<<wektor2<<")"<<endl;
        		wektor1 += wektor2;
        		cout<<endl<<"wektor"<<" = "<<wektor1;
        		
        		system("pause");
        		system("cls");
      		}
      		break;
      		
      		case 9:
      		{
      			system("cls");  
        		cout<<"WYBRANO: wektor -= wektor"<<endl;
        		
        		cout<<"podaj wymiar wektorow: ";
        		cin>>wymiar_wek;
        		wektor wektor1(wymiar_wek);
        		wektor wektor2(wymiar_wek);
        		cout<<"podaj pierwszy wektor:"<<endl;
        		cin>>wektor1;
        		cout<<"podaj drugi wektor:"<<endl;
        		cin>>wektor2;
        		
        		system("cls");
        		cout<<"("<<wektor1<<")"<<endl<<" -= "<<endl<<"("<<wektor2<<")"<<endl;
        		wektor1 -= wektor2;
        		cout<<endl<<"wektor"<<" = "<<wektor1;
        		
        		system("pause");
        		system("cls");
      		}
      		break;
      		
      		case 10:
      		{
      			system("cls");  
        		cout<<"WYBRANO: wektor *= liczba"<<endl;
        		
        		cout<<"podaj wymiar wektora: ";
        		cin>>wymiar_wek;
				wektor wektor1(wymiar_wek);
				cout<<"podaj wektor:"<<endl;
        		cin>>wektor1;
        		cout<<"podaj liczbe:"<<endl;
        		cin>>liczba;      		
        		
        		system("cls");
        		cout<<"("<<wektor1<<")"<<endl<<" *= "<<endl<<"("<<liczba<<")"<<endl;
        		wektor1 *= liczba;
        		cout<<endl<<"wektor"<<" = "<<wektor1;
        		
        		system("pause");
        		system("cls");
      		}
      		break;
      		
      		case 11:
      		{
      			system("cls");  
        		cout<<"WYBRANO: wektor[]"<<endl;
        		
        		cout<<"podaj wymiar wektora: ";
        		cin>>wymiar_wek;
				wektor wektor1(wymiar_wek);
				cout<<"podaj wektor:"<<endl;
        		cin>>wektor1;
        		
        		system("cls");
        		cout<<"podaj wsplozedna:"<<endl;
        		cin>>liczba;      		
        		cout<<"wektor["<<liczba<<"]"<<" = "<<wektor1[liczba-1]<<endl;
        		        		
        		system("pause");
        		system("cls");
      		}
      		break;
      	      		
    	}
     	
	}while(wybor!=0);
	
	getchar();
	return 0;
}
