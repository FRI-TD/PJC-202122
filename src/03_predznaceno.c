#include <stdio.h>

main(void) {
  int i=-1;
  if (i < i+1)
	printf("i - OK");

  unsigned int ui=-1; // 0xFFFFFFFF + 1
  if (ui < ui+1)
	printf("ui - OK");
}
