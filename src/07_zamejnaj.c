#include <stdio.h>

void zamenjaj(int *x) {
  *x = 10;
}

int main(void) {
  int a = 5;
  zamenjaj(&a);
  printf("a=%d\n", a);

  int *p = &a;
  printf("%p\n",p);
  p++;
  printf("%p\n",p);

  void *p1 = &a;
  //p1++;
  printf("%p\n",p1);

  int b = *(int *)p1;
  printf("%d\n", b);
}
