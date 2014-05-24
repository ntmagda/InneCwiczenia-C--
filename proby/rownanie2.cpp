# include <stdio.h>
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
 float mzerowe(int a, int b, int c, float *x1, float *x2) 
 { 
      
    *x1=(-b-(pow(b*b-2*a*c, 1/2)))/2*a;
    *x2=(-b+(pow(b*b-2*a*c, 1/2)))/2*a;
   
    return 0;
     
     }
int main()
{
    int a,b,c;
    printf (" Podaj pierwszy wspolczynnik rownania: \n");
    scanf("%d", &a);
    printf(" Podaj kolejny wspolczynnik rownania: \n");
    scanf("%d", &b);
    printf( " Podaj ostatni wspolczynnik rownania:\n");
    scanf("%d", &c);    
    printf(" Twoje rownanie to: %dx^2+%dx+%d\n\n", a,b,c);
    printf(" To rownanie ma %d  miejsc zerowych\n\n", rownanie(a,b,c));
    
             float x1, x2;
             mzerowe(a,b,c,&x1,&x2);
             if (rownanie(a,b,c)==1)
             printf("Miejsce zerowe tego rownania to %f\n\n"), x1;
             if (rownanie(a,b,c)==2)
             printf("Miejsca zerowe tego rownania to %f i %f\n\n", x1, x2);
             if (rownanie(a,b,c)==0)
             printf("Miejsca zerowe tego rownania nie istnieja\n\n");
   
}
