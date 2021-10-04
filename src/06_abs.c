#include <stdio.h>

int main(void) {
  int x = 15;
  printf("x=%d\n", x);

  int *p; // kazalec na tip int

  // p pokaze na naslov, kjer je x
  // absolutni naslov
  // p = (int*) 0x33FEE4;

  // relativno naslavljanje
  p = &x;
  *p = 42;  

  printf("x=%d\n", x);
  printf("&x=%p\n", p);
}
