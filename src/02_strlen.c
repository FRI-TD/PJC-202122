#include <stdio.h>

int main(int argc, char *args[]) {
  char ime[20];

  printf("Vpisi ime: ");
  // scanf("%s", ime);
  fgets(ime, 20, stdin);
  ime[strlen(ime)-1] = '\0';

  printf("Dolzina tvojega imena: %d\n", strlen(ime));

  int d = 0;
  while (ime[d] != '\0') d++;
  printf("Izracunana dolzina: %d\n", d);

}
