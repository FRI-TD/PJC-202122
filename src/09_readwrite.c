#include <stdio.h>
#include <stdlib.h>

#define N 40960

int main(int argc, char *args[]) {
  int buf[N];

  FILE *f1 = fopen("viri/m800.png",  "rb");
  FILE *f2 = fopen("viri/m800x.png", "wb");

  if (f1!=NULL && f2!=NULL) {
	int prebrano; // koliko podatkov smo prebrali z zadnjim branjem
    do {
      prebrano = fread(buf, sizeof(int), N, f1);
	  fwrite(buf, sizeof(int), prebrano, f2);

	  printf("%d\n", prebrano);
	} while(prebrano > 0);

	fclose(f1);
	fclose(f2);
  }
}
