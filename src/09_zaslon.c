#include <stdio.h>
#include <stdlib.h>

#define W 3
#define H 10

int main(int argc, char **args) {
  int *blok    = malloc(W*H*sizeof(int));
  for(int i=0; i<W*H; i++)
	blok[i]=i;

  int **zaslon = malloc(H*sizeof(int*));  // kazalci na posamezne vrstice
  for(int i=0; i<H; i++)
	zaslon[i] = blok + i*W;


  int i=4;
  int j=2;

  blok[i*W+j] = 42;
  printf("%d\n", zaslon[i][j]);
}
