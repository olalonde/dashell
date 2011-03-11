#include <unistd.h>
#include <stdio.h>

int main(int argc, const char* argv[]) {
  //printf("I'm alive !!\n");
  int k;
  for(k = 0; argv[k] != NULL; k++) {
    printf("%d: %s \n", k, argv[k]);
  }
  while(1);
}
