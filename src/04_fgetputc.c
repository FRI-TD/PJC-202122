#include<stdio.h>
#include <ctype.h>

// prepisi datoteko, pri tem vse znake spremeni v velike


int main(void) {
  FILE *vhod;
  FILE *izhod;

  vhod  = fopen("./viri/C.txt", "r");
  izhod = fopen("./viri/C-velike.txt", "w");

  if (vhod != NULL && izhod != NULL) {

	int c; // znak, ki smo ga prebrali
	do {
	  c = fgetc(vhod);
	  if (c != EOF) {
	    c = toupper(c);
	    fputc(c, izhod);
	  }
	} while (c != EOF);

	fclose(vhod);
	fclose(izhod);

  } else {
	printf("Napaka!\n");
	return 1;
  }
}
