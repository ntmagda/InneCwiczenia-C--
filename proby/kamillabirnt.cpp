#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
# include <conio.h>
#include <string.h>
void gotoxy( short x, short y );              //przeprowadz kursor w (x,y)
void gen_menu(char * u);                     //generuje menu
void zla_droga(int * x, int * y, char u);   //gdy trafimy w sciane
 
int main(void)
{
    int y,x;
    char c, r, u;
    char labirynt[18][34]={ {'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'},
                            {'*','$',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
                            {'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*',' ','*'},
                            {'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*',' ',' ',' ',' ','*','*','*','*','*','*','*','*','*','*','*',' ','*'},
                            {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*','*','*','*',' ','*','*','*','*','*','*','*','*','*','*','*',' ','*'},
                            {'*',' ','*','*','*','*','*','*','*','*','*','*','*','*','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*','*',' ','*'},
                            {'*',' ','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*',' ','*'},
                            {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*','*','*','*','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
                            {'*',' ','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*',' ','*','*','*','*','*','*','*','*','*','*','*','*'},
                            {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*','*','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
                            {'*',' ','*','*','*','*','*','*','*','*','*','*','*',' ','*','*','*',' ','*','*',' ','*','*','*','*','*','*','*','*','*','*','*',' ','*'},
                            {'*',' ','*','*','*','*','*','*','*','*','*','*','*',' ','*','*','*',' ','*','*',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
                            {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*','*','*',' ','*','*',' ','*','*','*','*','*','*','*','*','*',' ','*','*','*'},
                            {'*',' ',' ','*','*','*','*','*','*','*','*',' ',' ',' ',' ','*','*',' ','*','*',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ','*','*'},
                            {'*',' ',' ','*','*','*','*','*','*','*','*',' ','*','*',' ','*','*',' ','*','*','*','*','*','*',' ','*','*','*',' ','*',' ',' ','*','*'},
                            {'*',' ',' ','*','*','*','*','*','*','*','*',' ','*','*',' ',' ',' ',' ','*','*','*','*','*','*',' ','*','*','*',' ','*','*',' ','*','*'},
                            {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*','*','*','*','*','*','*','*','*','*','*','*',' ',' ','*','*',' ',' ',' ',' ','#','*'},
                            {'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'}  };
   //generuje menu
   gen_menu(&u);
 
   //powraca do gry tutaj jesli trzeba
   gra:
   system("cls");
 
   //generuje labirynt
    for(y=0;y<18;y++)
    {
     for(x=0;x<34;x++)
      printf("%c",labirynt[y][x]);
     printf("\n");
    }
 
    //generuje pozycje startowa
    for(y=0;y<18;y++)
     {
      for(x=0;x<34;x++)
       if(labirynt[y][x]=='#') break;
      if(labirynt[y][x]=='#') break;
     }
 
     //chodzenie po labiryncie
    while(c=getch())
    {
        if(labirynt[y][x]!='*')
         switch(c)
          {
              case 'w' :
              {
               gotoxy(x,--y);
               if(labirynt[y][x]=='*')
                {
                gotoxy(x,y+1);
                printf(" ");
                zla_droga(&x,&y,u);
                }
               else
               {
                printf("#");
                gotoxy(x,y+1);
                printf(" ");
                break;
               }
              }
              case 's' :
              {
               gotoxy(x,++y);
               if(labirynt[y][x]=='*')
                {
                gotoxy(x,y-1);
                printf(" ");
                zla_droga(&x,&y,u);
                }
               else
               {
                printf("#");
                gotoxy(x,y-1);
                printf(" ");
                break;
               }
              }
              case 'a' :
              {
               gotoxy(--x,y);
               if(labirynt[y][x]=='*')
                {
                gotoxy(x+1,y);
                printf(" ");
                zla_droga(&x,&y,u);
                }
               else
               {
                printf("#");
                gotoxy(x+1,y);
                printf(" ");
                break;
               }
              }
              case 'd' :
              {
               gotoxy(++x,y);
               if(labirynt[y][x]=='*')
                {
                gotoxy(x-1,y);
                printf(" ");
                zla_droga(&x,&y,u);
                }
               else
               {
                printf("#");
                gotoxy(x-1,y);
                printf(" ");
                break;
               }
              }
          }
 
        if(labirynt[y][x]=='$') break;
     }
 
    gotoxy(0,20);
    printf("Gratulacje, wygrales!\n\n");
    printf("Aby zagrac ponownie nasicnij R\n\n");
    printf("Aby wyjsc z gry nacisnij dowolny inny przycisk...\n\n");
    scanf("%c",&r);
    if(r=='R'||r=='r') goto gra;
    else printf("Dziekuje za gre!\n\n");
return 0;
}
 
void gotoxy( short x, short y )
{
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
COORD position={x,y};
SetConsoleCursorPosition(h,position) ;
}
 
 
void gen_menu(char * u)
{
    printf("\n\n%45s\n\n","Witaj w grze!");
    printf("\n\n%55s\n\n","Gra jest prosta: Wyjdz z labiryntu!");
    printf("\n\n%44s\n","Sterowanie:");
    printf("\n\n%43s\n","w - gora");
    printf("\n\n%42s\n","s - dol");
    printf("\n\n%43s\n","a - lewo");
    printf("\n\n%44s\n","d - prawo");
    printf("\n\n%64s\n%53s\n\n","Unikaj scian, gdy w nie wejdziesz uslyszysz pikacz"," Wtedy gra odesle Cie na start!");
    printf("\n\n%54s\n","Chcesz wylaczyc pikacz? Nacisnij 0");
    printf("\n\n\n%62s\n","Aby rozpoczac nacisnij dowolny inny przycisk");
    *u=getch();
}
 
void zla_droga(int * x, int * y, char u)
{
    if(u!='0') printf("%c%c%c%c%c",7,7,7,7,7);
    gotoxy(*x,*y);
    printf("*");
    *y=16,*x=32;
    gotoxy(*x,*y);
    printf("#");
}
