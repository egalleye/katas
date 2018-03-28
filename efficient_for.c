#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int efficient_for(int n) {
  int iter, iiter;
  int array[n];
  for (iter = 0; iter < n; iter++) {
    array[iter] = iter;
  }
  for (iter = 0; iter < n; iter++) {
    for (iiter = iter; iiter < n; iiter++) {
      printf("%d - %d\n", iter, iiter);
    }
  }
  return 0;
}

int main () {
  efficient_for(4);
  return 0;
}

