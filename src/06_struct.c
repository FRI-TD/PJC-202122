#include <stdio.h>
#include <stdlib.h>

typedef struct cplx {
  double re;
  double im;
  char *ime;
  
} cplx;

int main(void) {

  cplx *z;
  z = (cplx*) malloc(sizeof(cplx));

  (*z).re = 5;
  (*z).im = 4;
  (*z).ime = malloc(100*sizeof(char));

  // z->re = 5;
  // z->im = 4;
  // z->ime = malloc(100*sizeof(char));

  strcpy((*z).ime, "steviloA");

  printf("%.2f + %.2f i\n", (*z).re, z->im);
  
  free((*z).ime);
  free(z);
}
