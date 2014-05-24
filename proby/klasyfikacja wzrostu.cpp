# include <stdio.h>
main ()
{ 
     int a,b;
     puts("podaj ile masz wzrostu w cm: .\n");
     scanf("%d",&a);
               if (a>200)
               printf(" jestes olbrzymem! .\n");
               else if(a>180 && a<=200)
               printf (" jestes duzy .\n");
               else if(a >150 && a<=180)
               printf(" jestes sredniego wzrostu .\n");
               else if(a<150) printf("jestes malutki .\n");
               else
             printf(" nie masz wzrostu .\n");

             scanf("%d",&b);
     return 0;
     }
