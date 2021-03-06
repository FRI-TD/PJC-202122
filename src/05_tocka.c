#include <stdio.h>

typedef struct tocka {
  int x;
  int y;
} tocka;

struct tocka zamenjaj(tocka t) {
  tocka t2;
  t2.x = t.y;
  t2.y = t.x;
  return t2;
}

int main(void) {
  int x = 5; 

  struct tocka t1;
  t1.x=4; t1.y=2;

  printf("Tocka t1(%d,%d)\n", t1.x, t1.y);

  struct tocka t2 = {7,8};
  printf("Tocka t2(%d,%d)\n", t2.x, t2.y);

  struct tocka t3 = {.y=5,.x=3};
  printf("Tocka t3(%d,%d)\n", t3.x, t3.y);

  struct tocka t4 = {.y=15};
  printf("Tocka t4(%d,%d)\n", t4.x, t4.y);

  printf("\n");
  printf("Tocka t1(%d,%d)\n", t1.x, t1.y);
  t1 = zamenjaj(t1);
  printf("Tocka t1(%d,%d)\n", t1.x, t1.y);
}
