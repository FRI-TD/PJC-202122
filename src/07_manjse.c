#include <stdio.h>

int main(void) {
  int t[] = {3,4,5,6,7,8,9};
  int MAX = 7;

  int *p = t;
  while (p <= &t[MAX-1]) {
	printf("%d\n", *p);
	p++;
  }
}
