#include <stdio.h>

int main(void) {
  volatile int i = 15;
  int j = 5;

  int *p;
  p = &j;
  *p = 7;

  p++;
  *p=42;


  printf("i=%d, j=%d\n", i, j);
}
