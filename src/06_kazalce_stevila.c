#include <stdio.h>

int main(void) {
  int x; int y=7;

  x = (int) &y;
  *((int *)x) = 15;

  int *p=&y;
  *p = 15;

  printf("y=%d\n", y);
}
