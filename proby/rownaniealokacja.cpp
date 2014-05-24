# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int delta( int a, int b, int c, int* n)
{
       int del;
       del = b*b-4*a*c;
       if(del<0)
       *n=0;
       if(del==0)
       *n=1;
       if(del>0)
       *n=2;
       return *n;
       
       }
 
float* createtab(int n, float* x1, float *x2)
{
      float *tab=(float*)malloc((n+1)*sizeof(float));
      int i;
      if(tab!=NULL)
      {*tab=n;
      for(i=1; i<n+1; i++)
              {
                      tab[i]=*x1;
                      tab[i]=*x2;
                      return tab;
      }
      }
      else return 0;
      }
float solve(int a, int b, int c, float *x1, float *x2)
{
       *x1=(-b-(pow(b*b-2*a*c, 1/2)))/2*a;
       *x2=(-b+(pow(b*b-2*a*c, 1/2)))/2*a;
       return 0;
       }

main ()
{    
     int a,b,c,n,i;
     float x1,x2,*t;
     printf("podaj kolejno wspolczynniki rownania kwadratowego\n");
     scanf("%d", &a);
     scanf("%d", &b);
     scanf("%d", &c);
     
     printf("Twoje rownanie to: %dx^2 + %dx + %d\n", a, b, c );
    
     solve(a,b,c,&x1,&x2);
     t=createtab(n,&x1,&x2);
     if(t==NULL) printf (" Blad alokacji\n");
     for(i=0;i<n+1;i++)
     {
                       printf("%f\t", t[i]);
                       }
     system ("pause");
     }
     
