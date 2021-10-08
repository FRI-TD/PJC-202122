// Pri prevajanju (oziroma povezovanju) programov, ki
// uporabljajo matematicne funkcije, je (morda) treba
// dodati stikalo "-lm"
//
// gcc sin.c -lm

#include <stdio.h>
#include <math.h>

int main(void) {
  double y = sin(3.14/4); // 45

  printf("%f\n", y);
}
