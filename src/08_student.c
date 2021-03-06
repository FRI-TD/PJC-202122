#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct student {
  // podatkovn del
  int ID;
  char *ime;

  int *ocene;
  int stOcen;

  // kazalec na naslednji element
  struct student *nasl;

} student;


student * novStudent(int ID, char *ime, int steviloOcen) {
  student *s = malloc(sizeof(student));
  s->ID = ID;
  s->ime = (char*) malloc((strlen(ime)+1)*sizeof(char));
  strcpy(s->ime, ime);

  s->ocene = (int*) malloc(steviloOcen  * sizeof(int));
  s->stOcen = 0;

  s->nasl = NULL;

  return s;
}

void odstraniStudenta(student *s) {
  free(s->ime);
  free(s->ocene);
  free(s);  
}

void dodajOceno(student *s, int ocena) {
  s->ocene[s->stOcen++]=ocena;
}

void izpisiStudenta(student *s) {
  printf("Ime: %s\n", s->ime);
  printf("ID:  %d\n", s->ID);
  printf("Ocene: ");
  for(int i=0; i<s->stOcen; i++)
	printf("%d ", s->ocene[i]);
  printf("\n");
}
 
// funkcija element doda na zacetek in vrne novi zacetek
student * dodajZ(student *z, student *nov) {
  nov -> nasl = z;
  return nov;
}


// funkcija element doda na konec seznama in vrne novi zacetek
student * dodajK(student *z, student *nov) {
  if (z == NULL) {
    return nov;
  } else {
	student *t;
	t = z;
	while (t->nasl != NULL)
	  t = t->nasl;
	t->nasl = nov;

	return z;
  }
}

void dodajNaKonec(student **z, student *nov) {
  if (*z == NULL) {
    *z = nov;
  } else {
	student *t;
	t = *z;
	while (t->nasl != NULL)
	  t = t->nasl;
	t->nasl = nov;
  }
}

// funkcija element doda na pravo mesto in vrne novi zacetek
student * dodajU(student *z, student *nov) {
  if (z == NULL || strcmp(z->ime, nov->ime) > 0) {
    nov -> nasl = z;
	return nov;
  } else {
    student *t = z;
	while (t -> nasl != NULL && strcmp(t->nasl->ime, nov->ime) < 0)
	  t = t-> nasl;
    
    nov -> nasl = t -> nasl;
	t->nasl = nov;

	return z;
  }
}

student * odstrani(student *z, char *ime) {
  student *t = z;
  if (t == NULL) return NULL;   // seznam je prazen
  if (strcmp(t->ime, ime)==0) { // brisem prvi element v seznamu
    z = t->nasl;
    odstraniStudenta(t);
	return z;
  }

  // seznam ni prazen in element, ki ga brisem, NI prvi element v seznamu
  while((t->nasl != NULL) && (strcmp(t->nasl->ime, ime)!=0))
	t = t->nasl;

  if(t->nasl != NULL) {
	student *r = t->nasl;
    t->nasl = t->nasl->nasl;
	odstraniStudenta(r);
  }
  return z;
}

void izpisiSeznam(student *z) {
  while(z != NULL) {
	izpisiStudenta(z);
	z = z-> nasl;
  }
}

int main(void) {
  student *s1 = novStudent(63000001, "Polde", 3);
  dodajOceno(s1, 10);dodajOceno(s1, 6);dodajOceno(s1, 9);

  student *s2 = novStudent(63000002, "Micka", 3);
  dodajOceno(s2, 10);dodajOceno(s2, 10);dodajOceno(s2, 10);

  student *s3 = novStudent(63000003, "Lojzka", 3);
  dodajOceno(s3, 7);dodajOceno(s3, 6);dodajOceno(s3, 5);

  student *s4 = novStudent(63000004, "Miha", 3);
  dodajOceno(s4, 9);dodajOceno(s4, 6);dodajOceno(s4, 9);


  student *z = NULL;

  //z = dodajK(z, s1);
  //z = dodajK(z, s2);
  //z = dodajK(z, s3);
  //z = dodajK(z, s4);

//  z = dodajU(z, s1);
//  z = dodajU(z, s2);
//  z = dodajU(z, s3);

  dodajNaKonec(&z,s1);
  dodajNaKonec(&z,s2);
  dodajNaKonec(&z,s3);
  dodajNaKonec(&z,s4);

  z = odstrani(z, "Micka");  
  z = odstrani(z, "Miha");
  z = odstrani(z, "blbla");  
  izpisiSeznam(z);
}
