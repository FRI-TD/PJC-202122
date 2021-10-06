#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_IME 100

typedef struct oseba {
  int   ID;
  char* ime;
} oseba;

int test1(void) {
  oseba o;

  // sizeof(int) + sizeof(char*)

  printf("%d\n", sizeof(int) + sizeof(char*));
  printf("%d\n", sizeof(oseba));

  char ime[100];
  printf("Vpisi 1. ime: ");
  scanf("%s", ime);

  o.ID = 23123456;
  o.ime = (char*) malloc(MAX_IME * sizeof(char));
  // NARobE!!!!  o.ime = ime;
  strcpy(o.ime, ime);


  printf("Vpisi 2. ime: ");
  scanf("%s", ime);

  oseba o2;
  o2.ID = 1233445;
  o2.ime = (char*) malloc(MAX_IME * sizeof(char));
  strcpy(o2.ime, ime);

  printf("Ime 1: %s\n", o.ime);

  return 0;
}

void test2(void) {
  oseba *osebe;

  printf("Koliko oseb bos vpisal?");
  int stO;
  scanf("%d", &stO);

  // naredim tabelo (rezerviram pomnilnik za tabelo) stO oseb
  osebe = (oseba *) malloc(stO * sizeof(oseba));


  for(int i=0; i<stO; i++) {
	printf("Vpisi ID osebe %d: ", i+1);
	
	int id;
	scanf("%d", &id);
  	osebe[i].ID = id;

    printf("Vpisi ime osebe %d: ", i+1);
	char ime[100];
	scanf("%s", ime);
	osebe[i].ime = (char *) malloc((strlen(ime)+1)*sizeof(char));
	strcpy(osebe[i].ime, ime);
  }

  for(int i=0; i<stO; i++) {
    printf("%s, %d\n", osebe[i].ime, osebe[i].ID);
  }
} 

void test3() {
  oseba *o;

  o = malloc(sizeof(oseba));
  o->ID = 45;
  o->ime = malloc(100);
  strcpy(o->ime, "Polde");

}


int main(void) {
  test3();
}
