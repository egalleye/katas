#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *repeat_str(size_t count, const char *src) {
  int iter;
  int idx;
  char* str_repeated;
  size_t new_str_size;
  size_t str_size = strlen(src);
  new_str_size = str_size*count;

  str_repeated = malloc( (sizeof(char) * count * str_size) + 1 );
  for (iter = 0; iter < new_str_size; iter++) {
    idx = iter%str_size;
    str_repeated[iter] = src[idx];
  }
  str_repeated[new_str_size] = '\0';
  return str_repeated;
}

int main() {
  printf("blah = %s\n", repeat_str(4, "a")) ;
  return 0;
}
