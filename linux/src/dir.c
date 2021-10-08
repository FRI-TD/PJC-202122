// izpis direktorijske strukture - dela le na Linux sistemih

#include <stdio.h>
#include <dirent.h>

int main(int argc, char **args) {
  DIR *dir;
  struct dirent *ent;

  if ((dir = opendir(args[1])) != NULL) {
    while ((ent = readdir(dir)) != NULL) {
      printf("%s\n", ent->d_name); 
    }
  } else {
    printf("Direktorij %s ne obstaja\n", args[1]);
  } 
}
