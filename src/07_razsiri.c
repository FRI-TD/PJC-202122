#include <stdio.h>
#include <stdlib.h>

// razsiri ... poveca velikost rezerviranega pomnilnika za 1
// ustvarimo novo tabelo, ki je za en element vecja od tabele t
// (ta ima n elementov)
void razsiri(int **t, int n) {
  int *nova = malloc((n+1)*sizeof(int));
  for(int i=0; i<n; i++)
	nova[i] = (*t)[i];
  if (n != 0)
   free(*t);

  *t = nova;
}

int main(int argc, char **args) {
  int *tab;

  for(int i=0; i<100; i++) {
    razsiri(&tab, i);
    tab[i] = i;
  }

  printf("%d\n", tab[50]);

  free(tab);

  return 0;
}
