#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void) {
  char niz[] = "abcdefghijklmn";

  char *isci = strstr(niz, "f");
  if (isci != NULL)
    printf("%s\n", isci);

  char *z = niz;
  while(z < isci)
	printf("%c", *z++); 
  printf("\n");

  isci = strstr(niz, "x");  
  printf("%p\n", isci);
}


