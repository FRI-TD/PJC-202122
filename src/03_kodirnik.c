#include <stdio.h>
#include <string.h>

void kodiraj(char niz[], int n);

extern char kljuc[];

int main(void) {
  char besedilo[] = "beseda";
  int n = strlen(besedilo);

  strcpy(kljuc, "test");

  printf("Originalen niz: %s\n", besedilo);
  kodiraj(besedilo, n);
  printf("Zakodiran  niz: %s\n", besedilo);
  kodiraj(besedilo, n);
  printf("Odkodiran  niz: %s\n", besedilo);
}
