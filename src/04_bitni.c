#include <stdio.h>

// stevilo iteracij: 31
int stevilo_bitov(int x) {
  int r = 0;
  for(int i=0; i<31; i++)
	if ((x & (1<<i)) != 0)
      r++;
  return r;
}

// stevilo iteracij: b (pozicija najbolj levega 1-bita)
int stevilo_bitov1(int x) {
  int r = 0;
  while (x != 0) {
	if ((x & 1) != 0)
      r++;
	x = x >> 1;
  }
  return r;
}

// stevilo iteracij: stevilo prizganih bitov
int stevilo_bitov2(int x) {
  int r;
  for(r=0; x>0; r++)
    x = x & (x-1);     // ugasne najbolj desni 1-bit

  return r;
}


char to_lower(char x) {
  return x | 32;
}

char to_upper(char x) {
  return x & ~32;
}



int main(void) {

  // najvecje nepredznaceno stevilo (0b1111111..11=0xFFFFFFFF)
  unsigned int umax =  ~0;
  printf("umax=%u\n", umax);

  // najvecje predznaceno stevilo
  int max = umax ^ (1<<31);
  printf("max=%d\n", max);

  // kaj je gost izbral
  int izbira = 0;
  
  int i=5; // trenutna izbira

  // (1<<i) ... vsi biti 0, 1 prizgana le na i-tem mestu

  // prizgemo i-ti bit
  izbira = izbira | (1<<i);

  // ugasni i-ti bit
  izbira = izbira & ~(1<<i);

  // preklop bita (0->1, 1->0)
  izbira = izbira ^ (1<<i);

  // ali je i-ti bit prizgan
  if ((izbira & (1<<i)) != 0) {
	// ...
  }

  // registracija programa
  //.... program izracuna ID (16-bitna stevilka, ki opisuje racunalnik)
  //	.. uporabnik ID sporoči proizvajalcu programa
  //	.. proizvajalec izračuna REG. ST (32 bitna) in jo sporoči uporabniku
  //	.. uporabnik vtipka REG.ST. 

  int x=42;
  printf("V stevilu %d je prizganih %d bitov\n", x, stevilo_bitov2(x));
	
}
