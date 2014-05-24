#include "stdio.h"
#include "stdlib.h"
#define N 10
typedef struct daneos{
    char imie[N];
    char nazwisko[N];
    int rok;
    struct daneos *next;
}daneos;
int menu ();
void dodaj_poczatek (daneos **pierwszy);
void wypisz (daneos **pierwszy,int);
void dodaj_koniec (daneos **ostatni, daneos **pierwszy);
void wyszukaj_rok (daneos **pierwszy,int m);
int main (){
    int m,i=menu();
    daneos *pierwszy =(daneos*) malloc(sizeof(*pierwszy));
    pierwszy->next=NULL;
    daneos *ostatni=pierwszy;
    while (1){    
        if (i==1){
            printf ("Wpisz ktory element listy chcesz wypisac\n");
            scanf ("%d",&m);
            wypisz (&pierwszy,m);
        }
        else if (i==2){
            dodaj_poczatek (&pierwszy);
        }
        else if (i==3){
            dodaj_koniec (&ostatni,&pierwszy);
        }
        else if (i==4){
            printf ("Wprowadz rok urodzenia szukanego elementu: ");
            scanf ("%d",&m);
            wyszukaj_rok (&pierwszy,m);
        }
        i=menu();
    }
    return 0;
}
int menu (){
    int i;
    printf ("Wpisz co chcesz zrobic\n");
    printf ("1.Wypisanie elementu z listy\n");
    printf ("2.Dodawanie nowego elementu na poczatku listy\n");
    printf ("3.Dodawanie nowego elementu na koncu listy\n");
    printf ("4.Wyszukiwanie elementu wg roku urodzenia\n");
    printf ("5.Usuwanie elementu z poczatku listy\n");
    printf ("6.Usuwanie elementu z konca listy\n");
    printf ("7.Usuwanie calej listy\n");
    printf ("Wpisanie innego znaku zakonczy program\n");
    scanf ("%d", &i);
    return i;}

void wypisz (daneos **pierwszy,int m){
    int i;
    daneos *wsk=*pierwszy;
    printf ("Element listy o podanym numerze to: \n");
    for(i=0;i<m;i++)
    wsk=wsk->next;
    printf ("\n%s %s %d\n",wsk->imie, wsk->nazwisko,wsk->rok);
}

void dodaj_koniec (daneos **ostatni, daneos **pierwszy){
    daneos *nowy=(daneos*)malloc(sizeof(*nowy));
    printf ("Wprowadz dane elementu ktory chcesz dodac na koniec listy\n");
    printf ("Wprowadz imie: ");
    scanf ("%s",&nowy->imie);
    printf ("Wprowadz nazwisko: ");
    scanf ("%s",&nowy->nazwisko);
    printf ("Wprowadz rok urodzenia: ");
    scanf ("%d",&nowy->rok);
    if ((*pierwszy)->next==NULL){
        (*pierwszy)->next=nowy;
        nowy->next=NULL;
        (*ostatni)=nowy;}
    else{
        nowy->next=NULL;
        (*ostatni)->next=nowy;}
    }
    
void dodaj_poczatek (daneos **pierwszy){
    daneos *nowy=(daneos*)malloc(sizeof(*nowy));
    printf ("Wprowadz dane elementu ktory chcesz dodac na poczatek listy\n");
    printf ("Wprowadz imie: ");
    scanf ("%s",&nowy->imie);
    printf ("Wprowadz nazwisko: ");
    scanf ("%s",&nowy->nazwisko);
    printf ("Wprowadz rok urodzenia: ");
    scanf ("%d",&nowy->rok);
    nowy->next=(*pierwszy);
    (*pierwszy)=nowy;}
    
void wyszukaj_rok (daneos **pierwszy,int m){
    daneos *wsk=*pierwszy;
    for (;(*wsk).rok!=m;wsk=wsk->next);
    printf ("\n%s %s %d\n",wsk->imie, wsk->nazwisko,wsk->rok);
}



void usun_koniec (daneos **pierwszy){
        if ((*pierwszy)->next==NULL){
    printf ("Lista jest pusta. Nie ma co usuwac.\n");
    return;}
    daneos *wsk=(*pierwszy);
    daneos *wsk2=(*pierwszy);
    for (;wsk->next!=NULL;wsk=wsk->next);
    for (;wsk2->next!=wsk;wsk2=wsk2->next);
    wsk2->next=NULL;
    free (wsk);
    printf ("Element poprawnie usuniety\n");
}
void usun_poczatek(daneos **pierwszy){
        if ((*pierwszy)->next==NULL){
    printf ("Lista jest pusta. Nie ma co usuwac.\n");
    return;}
    daneos *nowy=(*pierwszy)->next;
    free(pierwszy);
    (*pierwszy)=nowy;
    printf ("Element poprawnie usuniety\n");
}
void usun_cala (daneos **pierwszy){
    daneos *wsk=NULL;
    daneos *wsk2=(*pierwszy)->next;
    while (wsk2){
        wsk=wsk2;
        wsk2=wsk2->next;
        free(wsk);
    }

    printf ("Lista poprawnie usunieta\n");
}

