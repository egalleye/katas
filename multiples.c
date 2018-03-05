#include <stdio.h>
#include <stdlib.h>

int solution(int number) {
    int iter;
    int sum = 0;
    for (iter = 1; iter < number; iter++) {

        if (iter%3 == 0) {
            sum += iter;
        } else if ( iter%5 == 0 ) {
            sum += iter;
        }
    }
    return sum;
}

int main() {
    int sum;
    sum = solution(10);
    printf("solution is %d\n", sum);
    return 0;
}
