# include <stdio.h>
# include <stdlib.h>
int main()
{char imieinazw[50];
 char tab[50];
 int i,x;
    printf(" podaj swoje imie i nazwisko:\n");
fgets( imieinazw, 50, stdin);
i=0;
while(imieinazw[i]!=' ')
                      i++;
      for(x=0; x<i; x++)
         {tab[x]=' ';
         }
         tab[i]=(int)i;
puts(tab);
system("pause");
}
