#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *args[]) {

  char* blok = args[0];
  for(int i=0; i<100; i++,blok++) 
    printf("%c", *blok < 32 ? '?' : *blok);
  
  printf("%s\n", getenv("PATH"));

}
