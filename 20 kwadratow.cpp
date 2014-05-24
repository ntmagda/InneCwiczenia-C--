#include <stdio.h>
#include <stdlib.h>
main ()
{
     int num = 1;
     while (num < 21)
     {
     printf("%10d %10d\n", num, num * num);
     num=num+1;
     }
      system ("pause");
     getchar();
     return 0;
    
     } 
