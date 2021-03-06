#include <stdlib.h>
#include <stdio.h>

int primerjalnik(const void *a, const void *b) {
  int x1 = *(int *)a;
  int x2 = *(int *)b;

  int s1 = x1%2;
  int s2 = x2%2;

  if (s1==s2) 
    return x1-x2;
  else 
	return s1-s2;
}

int main(void) {
  int n=10;
  int t[]={5,4,1,9,10,4,23,4,7,100};

  qsort(t, n, sizeof(int), primerjalnik);

  for(int i=0; i<n; i++) 
	printf("%d ", t[i]);
  printf("\n");
}
