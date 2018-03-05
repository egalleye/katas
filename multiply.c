#include <stdio.h>
#include <stdlib.h>

int multiply (int a, char* b) {
    int product;
    int m;
    m = *b;
    printf("a = %d b = %d\n", a, m);
    product = a*m;
    printf("product = %d\n", product);
    return product;
}

int main() {
    int a, c;
    char* b;
    a = 4;
    c = 5;
    b = &c;
    multiply(a, b);
    return 0;
}
