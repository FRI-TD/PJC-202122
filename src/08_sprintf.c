// "%17d"  ... celo stevilo na 5 mest


int main(void) {
  int m;
  scanf("%d", &m);

  //"%"+m+"d"
  // sprintf ... podobno kot printf, le da rezultat ne gre na zaslon ampak v spremenljivko 

  char *format;
  format = malloc(20*sizeof(char));

  //char format[20];
  
  
  //sprintf(format, "%c%dd\n", '%', m);

  sprintf(format, "%%%dd\n", m);

  printf(format, 15);
}
