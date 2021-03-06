// kodiranje niza: vsako crko niza spremenim tako, 
// da jo "XOR"am z znakom gesla

// 'a' ^ 't' -> x
// x   ^ 't' -> 'a'


// 'a' + 't'  -> y
// y   - 't'  -> 'a'

// n = "nek dolg niz"   
// k = "kljuckljuckl"  ... 5

// n[i] ^ k[i % strlen(k)]

// kljuc za kodiranje
char kljuc[20];

void kodiraj(char niz[], int n) {
  for(int i=0; i < n; i++) 
    niz[i] = niz[i] ^ kljuc[i % strlen(kljuc)]; 
}
