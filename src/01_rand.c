#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>


int main(void) {
  srand(time(NULL));
  int x = rand();
  printf("%d\n", x);

  printf("%d\n", RAND_MAX);
  printf("%d\n", INT_MAX);
}
