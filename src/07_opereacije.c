#include <stdio.h>

typedef int op(int, int);

int add(int a, int b) {
  return a+b;
}

int mul(int a, int b) {
  return a*b;
}

int operacija(int(*p)(int, int), int a, int b) {
//int operacija(op *p, int a, int b) {
  return p(a,b);
}

int main(void) {
  int c = operacija(add, 7, 6);
  int d = operacija(mul, 3, 5);
  printf("%d\n", d);
}
