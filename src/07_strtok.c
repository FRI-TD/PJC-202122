#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void) {//123    45     67      8 
  char str[]   = "::prva::druga::tretja:cetrta";
  char delim[] = ":";

  int i=1;

  char *result = strtok(str, delim);
  while (result != NULL) {
	char *back = result;
	int cnt=0; // koliko je bilo locil pred najdenim nizom
	do {
	  back--;
	  if (back < str) break;
	  cnt++;
	} while (*back == delim[0]);
	i+=cnt;
	
    printf("%d - %s\n", i, result);

	result = strtok(NULL, delim);
  }
}


