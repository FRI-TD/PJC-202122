#include <stdio.h>

int main(int argc, char *args[]) {
  int t1[] = {10, 20, 30, 40};
  int t2[10] = {0};
  int t3[10] = {1,2,3,4,5};

  printf("%d\n", t1[0]);
  printf("%d\n", t2[0]);
  printf("%d\n", t3[9]);
}
