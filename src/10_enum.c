#include <stdio.h>

enum predmeti{P1, UR, AR, DS, MAT};

int main(void) {
  enum predmeti p;

  p=P1;
  p++;

  if (p == UR) {
    printf("%s\n", "super");
  } else {
    printf("%s\n", "skoda");
  }
}
