#include <stdio.h>

int main(void) {

  int tab[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

  int *p = (int *) tab;

  printf("p[1]=%d\n", p[1]);
  printf("p[5]=%d\n", p[5]);

  int i=2; // druga vrstica
  int j=1; // prvi stolpec

  printf("tab[%d][%d]=%d\n", i,j,p[i*3 + j]);


}


