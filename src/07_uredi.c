#include <stdio.h>

typedef void uredi(int *tab, int n);

void bubblesort(int *tab, int n) {
  printf("Urejam z bubblesortom\n");
}

void insertionsort(int *tab, int n) {
  printf("Urejam z insertionsortom\n");
}

void test(uredi *u, int *t, int n) {
  u(t,n);
}

int main(void) {
  int t[] = {5,3,7,3,9,10,4};

  uredi *u;
  int izbira = 0;

  if (izbira == 0)
	u = bubblesort;
  else
	u = insertionsort;

  u(t, 7);

  test(insertionsort, t, 5);
}
