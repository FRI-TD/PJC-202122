#include <stdio.h>

int main(void) {
  char vrstica[10];

  fgets(vrstica, 10, stdin); 
  printf("Vpisal si: %s\n", vrstica); 
}
