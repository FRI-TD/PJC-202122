#include <stdio.h>
#include <stdlib.h>

void izpisi(int a[][3], int i, int j) {
  printf("%d\n", a[i][j]);
}

int main(void) {
  int a[3][3] = {1,2,3,4,5,6,7,8,9};

  izpisi(a, 1, 2);

  int** tabela; // dvodimenzionalna tabela celih stevil
  int v=5; // 5 vrstic
  int s=3; // stevilo stolpcev v vsaki vrstici
  tabela = (int**) malloc(v*sizeof(int*));
  for(int i=0; i<v; i++) {
    tabela[i] = (int*) malloc(s*sizeof(int));
  }
  tabela[0][4] = 42;
  printf("%d\n", tabela[1][0]);


}
