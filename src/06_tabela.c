#include <stdio.h>

int main(void) {

  int a[10]={15,1,2,3,4,5,6,7,8,9};

  printf("Naslov tabele a=%p\n", &a[0]);
  printf("Vrednost a:     %p\n", a);


  int *p; 
  p = &a[0];   // p = a

  printf("a[0]=%d\n", a[0]);
  printf("a[0]=%d\n", *p);
  printf("a[7]=%d\n", *(p+7));


  p++;
  printf("a[1]=%d\n", *p);

  //p = a;
  printf("a[8]=%d\n", p[8]); // p[8] ... *(p+8)
}
