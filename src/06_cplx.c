#include <stdio.h>

typedef struct cplx {
  double re;
  double im;
} cplx;

cplx sestej(cplx a, cplx b) {
  cplx rezultat;
  rezultat.re = a.re + b.re;
  rezultat.im = a.im + b.im;

  return rezultat;
}

int main(void) {
  cplx x1 = {3,4};
  cplx x2 = {.re=1, .im=2};

  cplx c = sestej(x1,x2);

  printf("c = %.2f + %.2f i\n", c.re, c.im);
}
