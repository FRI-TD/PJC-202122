#include<stdio.h>

// preberem vsebino datoteke in jo izpisem na zaslon

#define N 10

int main(void) {
  FILE *vhod;

  char mem[N] = "\n";

  int i=0;

  vhod = fopen("./viri/C.txt", "r");
  if (vhod != NULL) {
    while(!feof(vhod)) {
	  if (mem[strlen(mem)-1]=='\n')
		printf("%d -", ++i);

	  if (fgets(mem, N, vhod) != NULL)
	    printf("%s", mem); 
	}
	fclose(vhod); 
  } else {
    printf("Tezave pri odpisanju datoteke!\n");
	//return 1;
	exit(1);
  }

}
