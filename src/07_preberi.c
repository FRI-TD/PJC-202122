#include <stdio.h>
#include <stdlib.h>

void preberiBesedo(char *niz) {   
  scanf("%s", niz);  
}

int main(void) {
  char *beseda = malloc(100*sizeof(char));
  preberiBesedo(beseda);

  printf("%s\n", beseda);

  free(beseda);
}


