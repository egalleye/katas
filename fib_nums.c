#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


typedef unsigned long long ull;

ull init_prod;

unsigned long long* productFib(ull prod) {
  // your code
  ull *answer;
  ull curr, last, tmp, iter;
  init_prod = prod;
  answer = malloc( sizeof(ull) * 3);
  //printf("%llu\n", prod);
  if (prod == 0) {
    answer[0] = 0;
    answer[1] = 0;
    answer[2] = 1;
  }
  if (prod == 1) {
    answer[0] = 0;
    answer[1] = 1;
    answer[2] = 0;
  }

  for (iter = 1; iter < prod; iter++) {
    if (iter == 1) {
      last = 1;
      curr = 1;
    } else {
      tmp = curr;
      curr = last + curr;
      last = tmp;
      if (curr * last == prod) {
        //printf("true %llu * %llu = %llu\n", last, curr, prod);
        answer[0] = (ull) last;
        answer[1] = (ull) curr;
        answer[2] = (ull) 1;
        return answer;
      } else if (curr * last > prod) {
        //printf("false %llu * %llu > %llu\n", last, curr, prod);
        answer[0] = (ull) last;
        answer[1] = (ull) curr;
        answer[2] = (ull) 0;
        return answer;
      } 
      //printf("fib = %llu\n", curr);
    }
  }
  return answer;
}


int main () {
  //productFib(4895);
  productFib(74049690);
  return 0;
}
