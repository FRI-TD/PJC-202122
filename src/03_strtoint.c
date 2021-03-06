// Napisi funkcijo str_to_int(), ki prejme niz in
// ga pretvori v integer

#include <stdio.h>


extern int zblj;

int str_to_int(char niz[]) {
  // {'1','3','5','\0'}
  //i= 0   1   2   3=strlen(niz)

  // '1' -> 1  .... 
  // char x = '1';
  // int  y = x;   // y dobi vrednost ASCII kode znaka '1' 
  // int  z = x - 48; // z dobi vrednost stevke '1'  (1)
  // int  z = x - '0'

  int rezultat = 0;
  for(int i=0; i<strlen(niz); i++) {
    int z = niz[i] - '0';
	rezultat = 10*rezultat + z + zblj;
  }
  return rezultat;


  // return atoi(niz);
}

int main(void) {
  char stevilo[] = "135"; // {'1','3','5','\0'}
  int a = str_to_int(stevilo);
  printf("Stevilo '%s' = %d\n", stevilo, a);
}
