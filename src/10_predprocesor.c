#define N 10

#define min(X,Y) ((X) < (Y) ? (X) : (Y))

#define dprint(expr) printf(#expr " = %g\n", expr)


int minimum(int a, int b){
  return a < b ? a : b;
} 

int main(void) {
  printf("%d\n", N);

#ifdef DEBUG

#define C 120
  printf("Testiranje programa\n");
#endif

#undef DEBUG


#ifdef DEBUG
  printf("Testiranje programa - drugic\n");
#endif


  int a=10;
  int b=20;

  printf("min(%d,%d) = %d\n", a, b, min(a&b,N));
  printf("minimum(%d,%d) = %d\n", a, b, minimum(a++,b++));

  dprint(a/b);
}
