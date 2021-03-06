// ustvarimo tabelo N razlicnih nakljucnih stevil 
// in jo uredimo; pri tem merimo cas izvajanja

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define N 20000
#define M 2000000

// uredi tabelo stevil
void uredi(int s[], int n) {
  for(int i=0; i<n; i++) {
	for(int j=0; j<n-1; j++) {
	  if (s[j] > s[j+1]) {  // zamenjam elementa v tabeli
//        int tmp = s[j];
//		s[j] = s[j+1];
//		s[j+1] = tmp;

//		s[j]   = s[j] + s[j+1];   // vsota
//		s[j+1] = s[j] - s[j+1];   // prvi
//		s[j]   = s[j] - s[j+1];   // drugi

		s[j]   = s[j] ^ s[j+1];   // vsota
		s[j+1] = s[j] ^ s[j+1];   // prvi
		s[j]   = s[j] ^ s[j+1];   // drugi
	  }
	}
  }
}

// s ... tabela, n ... stevilo elementov v tabeli
bool je_v_tabeli(int s[], int n, int x) {
  for(int i=0; i<n; i++)
	if (s[i] == x) 
	  return true;
  return false;
} 

void izpisi(int s[], int n) {
  for(int i=0; i<n; i++)
	printf("%d ", s[i]);
  printf("\n");
}

int main(void) {
  int stevila[N];

  for(int i=0; i<N; i++) {
	int x = 1 + rand() % M;   // 1 ... M
	if (!je_v_tabeli(stevila, i, x)) {
	  stevila[i] = x;
	} else {
      i--;
	} 
  }

  clock_t start = clock();
  uredi(stevila, N);
  clock_t end   = clock();
  double sekunde = 1.0 * (end - start) / CLOCKS_PER_SEC;

  printf("%f sekund\n");

  

  //izpisi(stevila, N);
}
