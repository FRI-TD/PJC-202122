#include <stdio.h>

int main(int argc, char *args[]) {
  char vrstica[100];
  char najdaljsa[100];

  // berem vrstice, dokler uporabnik ne vpise prazne vrstice
  do {
    fgets(vrstica, 100, stdin);
	vrstica[strlen(vrstica)-1] = '\0'; // odbijemo odvecni \n

	if (strlen(vrstica) > strlen(najdaljsa))
	  strcpy(najdaljsa, vrstica);


  } while (strcmp(vrstica, "") != 0); 
  printf("Najdaljsa prebrana: %s\n", najdaljsa); 
}
