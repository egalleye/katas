#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int is_prime (long long n) {
  int iter;
  if (n <= 1) {
    return 0;
  /* Two is prime */
  } else if ( n == 2 ) {
    return 1;
  /* Sieve of Eratosthenes */
  } else if ( n % 2 == 0 ) {
    return 0;
  /* Sieve of Eratosthenes */
  } else if (n % 3 == 0 ) {
    return 0;
  }
  /* Cycle through all odd numbers */
  for (iter = 3; iter <= n / 2; iter += 2) {
    /* Return false if divide is clean */
    if (n % iter == 0) {
      return 0;
    } 
  } 
  
  return 1;
}

long long* step(int g, long long m, long long n) {
  long long iter;
  printf("%d, %llu, %llu\n", g, m, n);
  for (iter = 0; iter < n; iter++) {
    if (is_prime(iter)) {
      printf("%llu is prime!\n", iter);
    } 
  }
  return 0;
}

int main () {
  step(2, 5, 38);
  return 0;
}
