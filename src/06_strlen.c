#include <stdio.h>

int dolzina(char niz[]) {
  int i=0;
  while (niz[i] != '\0')
	i++;
  return i;
}

int dolzina2(char *niz) {
  int i=0;
  while (*(niz+i) != '\0')
    i++;
  return i; 
}


int main(void) {
  char niz[] = "To je niz";

  printf("Dolzina niza '%s' je %d\n", niz, dolzina2(niz));
}
