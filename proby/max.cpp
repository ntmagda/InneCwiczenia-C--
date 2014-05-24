# include <stdio.h>
# include <stdlib.h>
int * max( int *x, int *y)
{
    if( *x>*y) return x;
    if(*x<*y) return y;
    else return 0;
}

int main()
{ int x,y, *wsk;
    printf("podaj dwie liczby\n");
    scanf("%d", &x);
    scanf("%d", &y);
    wsk = max(&x, &y);
    printf(" wieksza liczba to: %d\n\n", *wsk);

system("pause");}    
