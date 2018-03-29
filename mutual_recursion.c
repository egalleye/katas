#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int F(int n);
int M(int n);

int F (int n) {
  int h;
  if (n == 0) {
    return 1;
  } 
  n = n - M(F(n - 1));
  return n;
}

int M (int n) {
  int h;
  if (n == 0) {
    return 0;
  }
  n = n - F(M(n - 1));
  return n;
}


int main ( ) {
  int n;
  n = F(25);
  printf("n = %d\n", n);
  /*
  if ( M(5) ) {
    printf("female\n");
  } else {
    printf("male\n");
  }
  */

  return 0;
}
