#include <stdio.h>

int main(int argc, char *args[]) {
  
  int starost;  // celo stevilo
  char ime[6]; // niz dolg najvec 5 znakov  


  printf("Vpisi starost: ");
  scanf("%d", &starost);

  printf("Vpisi ime: ");
  scanf("%s", ime);


  printf("Pozdravljen, %s, star si %d let\n", ime, starost);
 }
