#include <stdio.h>

int main(void) {
  int starost;
  char ime[10];   //  niz znakov (do 10)

  printf("Vpisi ime: ");
  scanf("%s", ime);

  printf("Vpisi starost: ");
  scanf("%d", &starost); 

  printf("Pozdravljen, %s, me veseli, da si star %d let!\n", ime, starost); 
}
