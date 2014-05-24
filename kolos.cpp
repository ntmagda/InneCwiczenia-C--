# include <iostream>

using namespace std;

int f2(int &x, int y){

x=x+2;
y=y+3;
return x+y;
}

int f3(int *x, int *y){
*x=*x+3;
*y=*y+3;
return *x+*y;

}

int f4(int x, int &y, int *z){

x=x+y;
y=*z+3;
z=&x;
*z=y*2;
return *z;

}

int main(){
int k=3;
int m=5;
int r=0;


cout << k << m << r << endl;
r=f2(k,m);
cout << k << "  " << m<< "  "  << r<< "  "  << endl;
r=f3(&k,&m);
cout << k<< "  " << m << "  " << r << endl;
r=f4(k,m, &r);
cout << k << "  " << m<< "  "  << r << "  " << endl;



}


