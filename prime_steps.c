#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int is_prime (long long n) {
  long long iter;
  if (n <= 1) {
    return 0;
  /* Two is prime */
  } else if ( n == 2 ) {
    return 1;
  /* Three is prime */
  } else if ( n == 3 ) {
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
  long long iter, tmp, piter, ipiter, 
            prime_count = 0,
            curr = 0, 
            last = 0;
  long long prime_list[n - m/2];
  
  long long* answer;
  answer = malloc(sizeof(long long) *2);
  for (iter = m; iter < n + 1; iter++) {
    if (is_prime(iter)) {
      prime_list[prime_count] = iter;
      prime_count++;
      for (piter = 0; piter < prime_count; piter++) {
        for (ipiter = 0; ipiter < prime_count; ipiter++) {
          if (prime_list[ipiter] - prime_list[piter] == g) {
            printf("FOUND!!!!!\n");
            answer[0] = prime_list[piter];
            answer[1] = prime_list[ipiter];
            return answer;
          } 
          printf("%llu - %llu\n", prime_list[ipiter], prime_list[piter]);
        }
      }
      /*
      if (curr == 0) {
        curr = iter;
      } else { 
        tmp = curr;
        curr = iter;
        last = tmp;
        printf("curr = %llu last = %llu\n", curr, last);
        if (curr - last == g) {
          answer[0] = last;
          answer[1] = curr;
          return answer;
        }
      } 
      */
      
    } 
  }
  //printf("answer is NIL\n");
  answer[0] = 0;
  answer[1] = 0;
  return answer;
}

int main () {
  long long* answer;
  answer = (long long*) step(3, 1, 10);
  printf("curr = %llu last = %llu\n", answer[0], answer[1]);
  free(answer);
  return 0;
}
