#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[]={1,3,5,7,9};
    int *wsk_tab;
    
    wsk_tab=&tab[0];
    
    printf("%d\n", wsk_tab[0]);  
    
    getchar();
    return 0;
}
