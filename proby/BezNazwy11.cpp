#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUF 20

/* uwaga definicja wlasnego typu! */
typedef struct  {
  int wiek;
  char imie[BUF];
  float waga;
} dziecko;

int main (void)
{
  int i, j;
  float *fp;
  char c[BUF];

  dziecko *dz, *dp;

  printf ("Ile egzemplarzy mam przydzieliæ? ");
  scanf ("%d", &j);

  /* alokacja */
  fp = (float*) malloc(j*sizeof(float));
  if ( fp == NULL ) {
    printf ("Blad! Nie moge przydzielic pamieci!\n");
    return 1;
  }
  printf ("Zaalokowane %d bajtow.\n", j*sizeof(float));

  /* wpisywanie wartosci */
  for (i=0; i<j; i++) {
    *(fp+i*sizeof(float)) = (float)((i+1)*2);
  }

  /* wypisywanie wartosci */
  for (i=0; i<j; i++) {
    printf ("Nasz float nr: %d to: %f\n", i, *(fp+i*sizeof(float)));
  }

  dp = (dziecko*) malloc(j*sizeof(dziecko));
  if ( dp == NULL ) {
    printf ("Blad! Nie moge przydzielic pamieci!\n");
    return 1;
  }
  printf ("Zaalokowane %d bajtow.\n", j*sizeof(dziecko));

  /* wpisywanie wartosci */
  for (i=0; i<j; i++) {
    dz = (dp+i*sizeof(dziecko));
    dz->wiek = 18+i;
    printf ("Podaj imie dziecka nr: %d " , i);
    scanf ("%s", c);
    strcpy(dz->imie, c);
    dz->waga = 55.0+i*2;
  }

  /* wypisywanie wartosci */
  for (i=0; i<j; i++) {
    dz = (dp+i*sizeof(dziecko));
    printf ("Dziecko o imieniu: \"%s\", ma %d lat i wazy: %f kg\n",
	  dz->imie, dz->wiek, dz->waga);
  }

  /* zwalnianie pamieci */
  free (fp);
  free (dp);

  return 0;
}
