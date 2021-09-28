// izpisi n razlicnih nakljucnih stevil iz intervala [a,b]


#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main(int argc, char *args[]) {

  int a = 10;  
  int b = 30;
  int n = 5;

  int v = b-a+1; 
  int s[v];
  for(int i = 0; i < v; i++)
	s[i] = a + i;

  srand(time(NULL));
  for(int i=0; i<n; i++) {
	int x = rand() % v;
	printf("%d\n", s[x]);

	s[x] = s[v-1];
	v--;
  }

}
