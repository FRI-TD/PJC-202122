#include <stdio.h>

#define N 3

struct oseba {
  int starost;
  char ime[10];
  char priimek[10];
};


int main(void) {
  struct oseba osebe[N];

  for(int i=0; i<N; i++) {
    printf("Vpisi ime: ");
    scanf("%s", osebe[i].ime);

    printf("Vpisi priimek: ");
    scanf("%s", osebe[i].priimek);

    printf("Vpisi starost: ");
    scanf("%d", &osebe[i].starost);

    printf("Pozdravljen %s %s, star si %d let\n", 
	  osebe[i].ime, osebe[i].priimek, osebe[i].starost);
  }
}


