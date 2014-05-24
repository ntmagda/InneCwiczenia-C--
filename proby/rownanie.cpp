# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int rownanie (int a, int b, int c)
{
    int delta;
    delta=b*b-4*a*c;
    if (delta<0)
       return 0;
    if (delta>0)
       return 2;
    if (delta==0)
        return 1;
    
}
 float mzerowe(int a, int b, int delta) 
 { 
      float x1,x2;
      float *wsk1, *wsk2;
    x1=(-b-(sqrt(delta))/2*a);
    x2=(-b+(sqrt(delta))/2*a);
   
   wsk1=&x2;
   wsk2=&x1;
   
   
    return 0;
     
     }
int main()
{
    int a,b,c,delta;
    float *wsk1, *wsk2;
    printf (" Podaj pierwszy wspolczynnik rownania: \n");
    scanf("%d", &a);
    printf(" Podaj kolejny wspolczynnik rownania: \n");
    scanf("%d", &b);
    printf( " Podaj ostatni wspolczynnik rownania:\n");
    scanf("%d", &c);    
    printf(" Twoje rownanie to: %dx^2+%dx+%d\n\n", a,b,c);
    printf(" To rownanie ma %d  miejsc zerowych\n\n", rownanie(a,b,c));
    
             mzerowe(a, b, delta);
             if (rownanie(a,b,c)==1)
             printf("Miejsce zerowe tego rownania to %f\n\n", *wsk1);
             if (rownanie(a,b,c)==2)
             printf("Miejsca zerowe tego rownania to %f i %f\n\n", *wsk1, *wsk2);
             if (rownanie(a,b,c)==0)
             printf("Miejsca zerowe tego rownania nie istnieja\n\n");
   
system ("pause");
}
