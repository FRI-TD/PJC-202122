#include <stdio.h>
#include <string.h>
#include <limits.h>



int main(void) {
 printf("Velikost tipa long long je %d bajtov\n", sizeof(long long));

  int x = 0x7fffffff;
  printf("x=%d\n", x);
  printf("INT_MAX=%d\n", INT_MAX);
}
